#include "home.h"

#include <functions.h>
#include <thread>
#include <chrono>

void Home::owner_things(size_t item_count)
{
    for (size_t i = 0; i < item_count; ++i)
    {
        std::lock_guard m(m_mutex);

        Thing thing({random_(1., 1000000.)});
        m_things.push_back(thing);

        std::cout << "add thing. price:" << thing.price << std::endl;
    }
}

void Home::thief_things()
{
    bool can_steal = true;
    while (can_steal)
    {
        if (m_things.empty())
        {
            std::this_thread::sleep_for(std::chrono::seconds(1));
            can_steal = not m_things.empty();

            continue;
        }

        std::lock_guard m(m_mutex);
        auto it_max = std::max_element(m_things.begin(), m_things.end(), [](const auto& lh, const auto& rh){ return lh.price > rh.price; });
        std::cout << "steal thing. price:" << it_max->price << std::endl;
        m_things.erase(it_max);
    }
}


