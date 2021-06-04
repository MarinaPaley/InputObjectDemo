#include "person.h"

// NOTE: Конструктор без параметров необходим для возможности создания массива объектов.
person::person() = default;

person::person(const size_t age, std::string first_name, std::string last_name)
    : age_(age), first_name_(std::move(first_name)), last_name_(std::move(last_name))
{
}

person person::read_from_stream(std::istream& in)
{
    size_t age = 0;
    in >> age;

    // NOTE: Необходимо для корректной работы метода std::getline
    in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string first_name;
    std::getline(in, first_name);

    std::string last_name;
    std::getline(in, last_name);

    // NOTE: В данном случае имеем дело с rvalue, поэтому произойдёт перемещение (move), а не копирование (copy).
    return person(age, first_name, last_name);
}

std::ostream& operator<<(std::ostream& out, const person& person)
{
    return out << "age = " << person.age_ << ", full name = " << person.last_name_ << " " << person.first_name_;
}

std::istream& operator>>(std::istream& in, person& person)
{
    return in >> person.age_ >> person.last_name_ >> person.first_name_;
}
