//
//  HOMEWORK_4_2.cpp
//  ООП_наследование_и_полиморфизм
//
//  Created by Anastasiya Charykova on 21.06.2024.
//

#include "HOMEWORK_4_2.hpp"
#include <iostream>
#include <string>

class Triangle{
protected:
int a, b, c; // добавляем стороны
// добавляем углы
int A, B, C;

public:
// конструктор
Triangle(int a, int b, int c, int A, int B, int C) : a(a), b(b), c(c), A(A), B(B), C(C){}
// методы доступа к полям
int get_a() const { return a; }
int get_b() const { return b; }
int get_c() const { return c; }
int get_A() const { return A; }
int get_B() const { return B; }
int get_C() const { return C; }

// функция вывода информации о треугольнике
void print_info() const{
    std::cout << "Cтороны: " << " a = " << a << " b = " << b << " c = " << c << std::endl;
    std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << std::endl;
}

};
// конструктор для прямоугольного треугольника
class RightTriangle : public Triangle{
public:
RightTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C){}
};

// конструктор для равнобедренного треугольника
class IsoscelesTriangle : public Triangle{
public:
IsoscelesTriangle (int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C){}
};

// конструктор для равностороннего треугольника
class EquilateralTriangle : public Triangle{
public:
EquilateralTriangle (int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C){}
};

// класс четырехугольника
class Quadrangle{
protected:
// добавляем стороны
int a, b, c, d;
// доавляем углы
int A, B, C, D;

public:
// конструктор для четырехугольника
Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D){}
// методы доступа к полям
int get_a() const {return a;}
int get_b() const {return b;}
int get_c() const {return c;}
int get_d() const {return d;}
int get_A() const {return A;}
int get_B() const {return B;}
int get_C() const {return C;}
int get_D() const {return D;}
// функция для вывода информации о четырехугольнике

void print_info() const{
    std::cout << "Cтороны: " << " a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
    std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
}
};

// конструктор для прямоугольника
class Rectangle : public Quadrangle {
public:
Rectangle (int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D){}
};

// конструктор для квадрата
class Square : public Quadrangle{
public:
Square (int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D){}
};

// конструктор для параллелограмма
class Parallelogram : public Quadrangle{
public:
Parallelogram (int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D){}
};

// конструктор для ромба
class Rhombus : public Quadrangle{
public:
Rhombus (int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D){}
};
int main(){

    Triangle t(10, 20, 30, 60, 90, 120);
    RightTriangle rt(10, 20, 30, 50, 60, 90);
    IsoscelesTriangle it(10, 20, 10, 50, 60, 50);
    EquilateralTriangle et(30, 30, 30, 60, 60, 60);
    Quadrangle q(10, 20, 30, 40, 90, 90, 90, 90);
    Rectangle r(10, 20, 30, 40, 90, 90, 90, 90);
    Square s(10, 10, 10, 10, 90, 90, 90, 90);
    Parallelogram p(10, 20, 30, 40, 90, 90, 90, 90);
    Rhombus rh(10, 20, 30, 40, 90, 90, 90, 90);
    std::cout << "Треугольник:" << std::endl;
    t.print_info();
    std::cout << "Прямоугольный треугольник:" << std::endl;
    rt.print_info();
    std::cout << "Равнобедренный треугольник:" << std::endl;
    it.print_info();
    std::cout << "Равносторонний треугольник:" << std::endl;
    et.print_info();
    std::cout << "Четырехугольник:" << std::endl;
    q.print_info();
    std::cout << "Прямоугольник:" << std::endl;
    r.print_info();
    std::cout << "Квадрат:" << std::endl;
    s.print_info();
    std::cout << "Параллелограмм:" << std::endl;
    p.print_info();
    std::cout << "Ромб:" << std::endl;
    rh.print_info();

    return 0;

}
