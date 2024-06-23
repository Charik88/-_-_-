//
//  HOMEWORK_4_2.cpp
//  ООП_наследование_и_полиморфизм
//
//  Created by Anastasiya Charykova on 21.06.2024.
//


//#include <iostream>
//#include <string>

//class Triangle{
//protected:
//int a, b, c; // добавляем стороны
//// добавляем углы
//int A, B, C;
//
//public:
//// конструктор
//Triangle(int a, int b, int c, int A, int B, int C) : a(a), b(b), c(c), A(A), B(B), C(C){}
//// методы доступа к полям
//int get_a() const { return a; }
//int get_b() const { return b; }
//int get_c() const { return c; }
//int get_A() const { return A; }
//int get_B() const { return B; }
//int get_C() const { return C; }
//
//// функция вывода информации о треугольнике
//void print_info() const{
//    std::cout << "Cтороны: " << " a = " << a << " b = " << b << " c = " << c << std::endl;
//    std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << std::endl;
//}
//
//};
//// конструктор для прямоугольного треугольника
//class RightTriangle : public Triangle{
//public:
//RightTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C){}
//};
//
//// конструктор для равнобедренного треугольника
//class IsoscelesTriangle : public Triangle{
//public:
//IsoscelesTriangle (int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C){}
//};
//
//// конструктор для равностороннего треугольника
//class EquilateralTriangle : public Triangle{
//public:
//EquilateralTriangle (int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C){}
//};
//
//// класс четырехугольника
//class Quadrangle{
//protected:
//// добавляем стороны
//int a, b, c, d;
//// доавляем углы
//int A, B, C, D;
//
//public:
//// конструктор для четырехугольника
//Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D){}
//// методы доступа к полям
//int get_a() const {return a;}
//int get_b() const {return b;}
//int get_c() const {return c;}
//int get_d() const {return d;}
//int get_A() const {return A;}
//int get_B() const {return B;}
//int get_C() const {return C;}
//int get_D() const {return D;}
//// функция для вывода информации о четырехугольнике
//
//void print_info() const{
//    std::cout << "Cтороны: " << " a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
//    std::cout << "Углы: " << " A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
//}
//};
//
//// конструктор для прямоугольника
//class Rectangle : public Quadrangle {
//public:
//Rectangle (int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D){}
//};
//
//// конструктор для квадрата
//class Square : public Quadrangle{
//public:
//Square (int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D){}
//};
//
//// конструктор для параллелограмма
//class Parallelogram : public Quadrangle{
//public:
//Parallelogram (int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D){}
//};
//
//// конструктор для ромба
//class Rhombus : public Quadrangle{
//public:
//Rhombus (int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D){}
//};
//int main(){
//
//    Triangle t(10, 20, 30, 60, 90, 120);
//    RightTriangle rt(10, 20, 30, 50, 60, 90);
//    IsoscelesTriangle it(10, 20, 10, 50, 60, 50);
//    EquilateralTriangle et(30, 30, 30, 60, 60, 60);
//    Quadrangle q(10, 20, 30, 40, 90, 90, 90, 90);
//    Rectangle r(10, 20, 30, 40, 90, 90, 90, 90);
//    Square s(10, 10, 10, 10, 90, 90, 90, 90);
//    Parallelogram p(10, 20, 30, 40, 90, 90, 90, 90);
//    Rhombus rh(10, 20, 30, 40, 90, 90, 90, 90);
//    std::cout << "Треугольник:" << std::endl;
//    t.print_info();
//    std::cout << "Прямоугольный треугольник:" << std::endl;
//    rt.print_info();
//    std::cout << "Равнобедренный треугольник:" << std::endl;
//    it.print_info();
//    std::cout << "Равносторонний треугольник:" << std::endl;
//    et.print_info();
//    std::cout << "Четырехугольник:" << std::endl;
//    q.print_info();
//    std::cout << "Прямоугольник:" << std::endl;
//    r.print_info();
//    std::cout << "Квадрат:" << std::endl;
//    s.print_info();
//    std::cout << "Параллелограмм:" << std::endl;
//    p.print_info();
//    std::cout << "Ромб:" << std::endl;
//    rh.print_info();
//
//    return 0;
//
//}

#include <iostream>
#include <string>
#include <vector>

// Базовый класс Фигура
class Figure {
protected:
    std::string name;

public:
    Figure(const std::string& name) : name(name) {}

    virtual void print_info() const = 0; // виртуальная функция для вывода информации о фигуре
    virtual ~Figure() {} // деструктор базового класса
};

// Функция для вывода информации о фигуре
void print_info(const Figure* figure) {
    figure->print_info();
}

// Класс Треугольник
class Triangle : public Figure {
protected:
    double a, b, c;
    double A, B, C;

public:
    Triangle(const std::string& name, double a, double b, double c, double A, double B, double C) : Figure(name), a(a), b(b), c(c), A(A), B(B), C(C) {}

    void print_info() const override { // переопределение виртуальной функции для вывода информации о треугольнике
std::cout << name << ":" << std::endl;
std::cout << "Стороны: a = " << a << ", b = " << b << ", c = " << c << std::endl;
std::cout << "Углы: A = " << A << ", B = " << B << ", C = " << C << std::endl;
    }
};

// Класс Прямоугольный треугольник
class RightTriangle : public Triangle {
public:
RightTriangle(const std::string& name, double a, double b, double c) : Triangle(name, a, b, c, 0, 0, 90) {}

    void print_info() const override {
std::cout << name << ": " << std::endl;
std::cout << "Cтороны: a = " << a << ", b = " << b << ", c = " << c << std::endl;
std::cout << "Углы: A = " << A << ", B = " << B << ", C = 90" << std::endl;
    }
};

// Класс Равнобедренный треугольник
class IsoscelesTriangle : public Triangle {
public:
IsoscelesTriangle(const std::string& name, double a, double c) : Triangle(name, a, a, c, 0, 0, 0) {}

    void print_info() const override {
std::cout << name << ": " << std::endl;
std::cout << "Cтороны: a = " << a << ", b = " << a << ", c = " << c << std::endl;
std::cout << "Углы: A = " << A << ", B = " << C << ", C = " << A << std::endl;
    }
};

// Класс Равносторонний треугольник
class EquilateralTriangle : public Triangle {
public:
EquilateralTriangle(const std::string& name, double a) : Triangle(name, a, a, a, 60, 60, 60) {}

    void print_info() const override {
std::cout << name << ":" << std::endl;
std::cout << "Cтороны: a = " << a << ", b = " << a << ", c = " << a << std::endl;
std::cout << "Углы: A = 60, B = 60, C = 60" << std::endl;
    }
};

// Класс Четырёхугольник
class Quadrilateral : public Figure {
protected:
    double a, b, c, d;
    double A, B, C, D;

public:
    Quadrilateral(const std::string& name, double a, double b, double c, double d, double A, double B, double C, double D)
        : Figure(name), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {}

    void print_info() const override {
std::cout << name << ":" << std::endl;
std::cout <<"Стороны a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
std::cout << "Углы: A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << std::endl;
    }
};

// Класс Прямоугольник
class Rectangle : public Quadrilateral {
public:
Rectangle(const std::string& name, double a, double b) : Quadrilateral(name, a, b, a, b, 90, 90, 90, 90) {}

    void print_info() const override {
std::cout << name << ":" << std::endl;
std::cout <<"Стороны: a = " << a << ", b = " << b << ", c = " << a << ", d = " << b << std::endl;
std::cout << "Углы: A = 90, B = 90, C = 90, D = 90" << std::endl;
    }
};

// Класс Квадрат
class Square : public Rectangle {
public:
Square(const std::string& name, double a) : Rectangle(name, a, a) {}

    void print_info() const override {
std::cout << name << ":" << std::endl;
std::cout << "Стороны: a = " << a << ", b = " << a << ", c = " << a << ", d = " << a << std::endl;
std::cout << "Углы: A = 90, B = 90, C = 90, D = 90" << std::endl;
    }
};

// Класс Параллелограмм
class Parallelogram : public Quadrilateral {
public:
    Parallelogram(const std::string& name, double a, double b, double A, double B) : Quadrilateral(name, a, b, a, b, A, B, A, B) {}

    void print_info() const override {
std::cout << name << ":" << std::endl;
std::cout << "Cтороны: a = " << a << ", b = " << b << ", c = " << a << ", d = " << b << std::endl;
std::cout << "Углы: A = " << A << ", B = " << B << ", C = " << A << ", D = " << B << std::endl;
    }
};

// Класс Ромб
class Rhombus : public Parallelogram {
public:
    Rhombus(const std::string& name, double a, double A, double B)
        : Parallelogram(name, a, a, A, B) {}

    void print_info() const override {
std::cout << name << ":" << std::endl;
std::cout << "Стороны: a = " << a << ", b = " << a << ", c = " << a << ", d = " << a << std::endl;
std::cout << "Углы: A = " << A << ", B = " << B << ", C = " << A << ", D = " << B << std::endl;
    }
};

int main() {
    // Создание экземпляров фигур
    Triangle triangle("Треугольник", 3, 4, 5, 45, 45, 90);
    RightTriangle rightTriangle("Прямоугольный треугольник", 3, 4, 5);
    IsoscelesTriangle isoscelesTriangle("Равнобедренный треугольник", 5, 5);
    EquilateralTriangle equilateralTriangle("Равносторонний треугольник", 5);
    Quadrilateral quadrilateral("Четырёхугольник", 2, 4, 3, 5, 90, 90, 90, 90);
    Rectangle rectangle("Прямоугольник", 4, 6);
    Square square("Квадрат", 4);
    Parallelogram parallelogram("Параллелограмм", 3, 5, 60, 120);
    Rhombus rhombus("Ромб", 4, 60, 120);

    // Вектор указателей на фигуры
    std::vector<Figure*> figures = {&triangle, &rightTriangle, &isoscelesTriangle,&equilateralTriangle, &quadrilateral, &rectangle, &square, &parallelogram, &rhombus};

    // Вывод информации о каждой фигуре
    for (const auto& figure : figures) {
        print_info(figure);
    }

    return 0;
}
