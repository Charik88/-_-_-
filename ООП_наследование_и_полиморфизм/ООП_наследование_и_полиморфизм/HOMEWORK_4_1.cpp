//
//  HOMEWORK_4_1.cpp
//  ООП_наследование_и_полиморфизм
//
//  Created by Anastasiya Charykova on 21.06.2024.
//

#include "HOMEWORK_4_1.hpp"
#include <iostream>
#include <string>

// Основной класс Figure
class Figure {
protected:
  int sides_count; // Защищённое поле для количества сторон
  std::string name; // Защищённое поле для названия фигуры

public:
  // Конструктор Фигуры
  Figure() : sides_count(0), name("Фигура") {}

  // Публичный метод для доступа к количеству сторон
  int get_sides_count() const { return sides_count; }

  // Публичный метод для доступа к названию фигуры
  std::string get_name() const { return name; }
};

// Класс Triangle, наследуется от Figure
class Triangle : public Figure {
public:
  // Конструктор
  Triangle() {
    sides_count = 3; //  количеств сторон для треугольника
    name = "Треугольник"; // название фигуры
  }
};

// Класс Quadrangle, наследуется от Figure
class Quadrangle : public Figure {
public:
  // Конструктор
  Quadrangle() {
    sides_count = 4; // количество сторон для четырёхугольника
    name = "Четырёхугольник"; // название фигуры
  }
};

int main() {
  // Создание экземпляров классов
  Figure figure;
  Triangle triangle;
  Quadrangle quadrangle;

  // Вывод информации о количестве сторон и названии фигур
  std::cout << "Колличество сторон: " << std::endl;
  std::cout << figure.get_name() << ": " << figure.get_sides_count()
            << std::endl;
  std::cout << triangle.get_name() << ": " << triangle.get_sides_count()
            << std::endl;
  std::cout << quadrangle.get_name() << ": " << quadrangle.get_sides_count()
            << std::endl;

  return 0;
}
