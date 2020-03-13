#include "Philosopher.hpp"

Philosopher::Philosopher(Book& book, Waiter& waiter, std::mutex& leftFork, std::mutex& rightFork_) :
    book_(book), waiter_(waiter), leftFork_(leftFork), rightFork_(rightFork_)
{
}
