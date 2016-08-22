#include <iostream>

struct attribute_t
{
    attribute_t()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
    ~attribute_t()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

class base_t
{
public:
    base_t()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        throw std::logic_error(__PRETTY_FUNCTION__);
    }
    ~base_t()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        throw std::logic_error(__PRETTY_FUNCTION__);
    }
private:
    attribute_t attribute;
};

int main(int argc, const char * argv[]) {

    try {
        base_t base;
    } catch (...) {
    }
    
    
    return 0;
}
