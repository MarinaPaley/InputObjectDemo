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
        // NOTE: В данном случае можно воспользоваться как первым, так и вторым способом.
        // Принципиальное их отличие заключается в том, что статический метод НЕ ожидает
        // созданного объекта на входе, а оператор сдвига из потока ввода – ожидает.
        // persons[i] = person::read_from_stream();
        std::cin >> persons[i];
    }

    for (size_t i = 0; i < size; i++)
    {
        std::cout << persons[i] << std::endl;
    }

    return 0;
}
