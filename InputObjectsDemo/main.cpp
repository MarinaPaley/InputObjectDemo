#include <iostream>
#include "person.h"

/**
 * \brief Точка входа в программу.
 * \return Код ошибки (0 - успех).
 */
int main()
{
    const size_t size = 2;

    const auto persons = std::make_unique<person[]>(size);

    for (size_t i = 0; i < size; i++)
    {
        // NOTE: Можно и первым, и вторым способом:
        // persons[i] = person::read_from_stream();
        std::cin >> persons[i];
    }

    for (size_t i = 0; i < size; i++)
    {
        std::cout << persons[i] << std::endl;
    }

    return 0;
}
