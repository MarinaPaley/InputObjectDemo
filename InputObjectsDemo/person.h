#pragma once

#include <iostream>
#include <string>

/**
 * \brief Класс Персона.
 */
class person
{
    /**
     * \brief Возраст.
     */
    size_t age_ = 0;

    /**
     * \brief Имя.
     */
    std::string first_name_;

    /**
     * \brief Фамилия.
     */
    std::string last_name_;

public:
    /**
     * \brief Инициализирует новый экземпляр класса.
     */
    person();

    /**
     * \brief Инициализирует новый экземпляр класса.
     * \param age Возраст.
     * \param first_name Имя.
     * \param last_name Фамилия.
     */
    person(const size_t age, std::string first_name, std::string last_name);

    /**
     * \brief Считывает из потока ввода данные и создаёт по ним объект.
     * \param in Поток ввода.
     * \return Объект типа person.
     */
    static person read_from_stream(std::istream& in = std::cin);

    /**
     * \brief Оператор сдвига.
     * \param out Поток вывода.
     * \param person Персона.
     * \return Поток вывода.
     */
    friend std::ostream& operator<< (std::ostream& out, const person& person);

    friend std::istream& operator>> (std::istream& in, person& person);
};
