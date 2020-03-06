#pragma once
#include <mutex>

struct Fork {
    std::mutex fork;
};

class Table {};
