#include <iostream>
#include <cmath>

class Vector {
private:
    double x, y;

public:
    // 构造函数
    Vector(double x, double y) : x(x), y(y) {}

    // 加法方法
    Vector add(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
    }

    // 打印方法
    void print() const {
        std::cout << "Vector(" << x << ", " << y << ")" << std::endl;
    }

    // 模长方法
    void dir() const {
        double magnitude = std::sqrt(x * x + y * y);
        std::cout << "Magnitude: " << magnitude << std::endl;
    }
};

int main() {
    // 创建两个向量
    Vector v1(3.0, 4.0);
    Vector v2(1.0, 2.0);

    // 打印向量
    std::cout << "Vector 1: ";
    v1.print();
    std::cout << "Vector 2: ";
    v2.print();

    // 向量相加
    Vector v3 = v1.add(v2);
    std::cout << "Sum of Vector 1 and Vector 2: ";
    v3.print();

    // 求模长
    v3.dir();

    return 0;
}
