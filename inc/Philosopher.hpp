#pragma once
#include "Book.hpp"
#include "Table.hpp"

class Philosopher {
    Book book_;
    Table table_;
public:
    Philosopher(Book& book, Table& table);
};
