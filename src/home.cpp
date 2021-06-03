#include "home.h"

#include <functions.h>
#include <thread>

void Home::owner_things(size_t item_count)
{
    for (size_t i = 0; i < item_count; ++item_count)
    {
        std::lock_guard m(m_mutex);
        m_things.push_back({random_(1., 1000000.)});
    }
}

void Home::thief_things()
{
    while (not m_things.empty())
    {
        std::lock_guard m(m_mutex);
        auto it_max = std::max_element(m_things.begin(), m_things.end(), [](const auto& lh, const auto& rh){ return lh.price > rh.price; });
        std::cout << "steal thing. price:" << it_max->price << std::endl;
        m_things.erase(it_max);
    }
}


