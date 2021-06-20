#include <iostream>

std::shared_ptr<int> calculateProduct(int a, int b)
{
    std::shared_ptr<int> result = std::make_shared<int>(a*b);
    return result;
}

int main() {
    auto number = calculateProduct(10, 20);
    std::cout << "num: " << *number << " | owners: " << number.use_count();
    return 0;
}
