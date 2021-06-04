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
        persons[i] = person::read_from_stream();
    }

    for (size_t i = 0; i < size; i++)
    {
        std::cout << persons[i] << std::endl;
    }

    return 0;
}
