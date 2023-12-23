// Домашнее задание к занятию «STL. Часть 2»
// # Задача 2. Печать контейнера

#include <iostream>
#include <vector>
#include <set>
#include <list>

template<class T>
void PrintContainer(const T& Container)
{
    for (auto& i : Container)
    {
        std::cout << i << '\t';
    }
    std::cout << std::endl;
}


int main()
{
    std::set<std::string> test_set = { "one", "two", "three", "four", "test_set" };
    PrintContainer(test_set); // four one three two. помните почему такой порядок? :)

    std::list<std::string> test_list = { "one", "two", "three", "four", "test_list" };
    PrintContainer(test_list); // one, two, three, four

    std::vector<std::string> test_vector = { "one", "two", "three", "four", "test_vector" };
    PrintContainer(test_vector); // one, two, three, four
}