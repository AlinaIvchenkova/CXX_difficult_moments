#pragma once

#include <list>
#include <mutex>

struct Thing
{
    double price;
};

class Home
{
public:
    void owner_things(size_t item_count);
    void thief_things();

private:
    std::mutex m_mutex;
    std::list<Thing> m_things;
};
