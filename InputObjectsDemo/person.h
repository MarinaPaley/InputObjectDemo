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
     * \brief Полное имя.
     */
    std::string full_name_;

public:

    /**
     * \brief Инициализирует новый экземпляр класса.
     */
    person();

    /**
     * \brief Инициализирует новый экземпляр класса.
     * \param age Возраст.
     * \param full_name Полное имя.
     */
    person(const size_t age, std::string full_name);

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
};
