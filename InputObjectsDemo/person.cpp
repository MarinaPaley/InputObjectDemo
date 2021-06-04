#include "person.h"

person::person() = default;

person::person(const size_t age, std::string full_name)
    : age_(age), full_name_(std::move(full_name))
{
}

person person::read_from_stream(std::istream& in)
{
    size_t local_age = 0;
    in >> local_age;

    // NOTE: Необходимо для правильной работы метода std::getline
    in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string name;
    std::getline(in, name);

    return person(local_age, name);
}

std::ostream& operator<<(std::ostream& out, const person& person)
{
    return out << "age = " << person.age_ << ", full name = " << person.full_name_;
}
