#include <iostream>
int main(int arc, char ** argv) {
// Написать программу, проверяющую что сумма двух чисел лежит в пределах от 10 до 20 (включительно), если да – вывести true, в противном случае – false;
    int a,b,c;
    std::cout << "Enter integer ";
    std::cin >> a;
    std::cout << "Enter integer ";
    std::cin >> b;
    c=a+b;
    bool d;
    if ( c >= 10 && c <= 20)
        d=true;
    else
        d=false;
    printf("Cумма в заданном диапазоне 10..20 включительно: %s\n", d?"true":"false");

// Написать программу, проверяющую, является ли некоторое число - натуральным простым. Простое число - это число, которое делится без остатка только на единицу и себя само.
    a=0;
    while(a<2) {
      std::cout << "Введите число больше 1 ";
      std::cin >> a;
    }
    d=false;
    for(int i=2;i<a;i++){
        if (a%i == 0) {
	    d=true;
	    break;
	}
    }
    if(d)
        std::cout << "Число " << a << " не является натуральным." << std::endl;
    else
        std::cout << "Число " << a << " является натуральным." << std::endl;
// Написать программу, выводящую на экран “истину”, если две целочисленные константы, объявленные в её начале либо равны десяти сами по себе, либо их сумма равна десяти.
    const int e=10, f=10;
    d=false;
    if ((e==10 && f==10) || (e+f==10))
        std::cout << "и 'e' и 'f' равны десяти или их сумма равна 10 - истина" << std::endl;
//* Написать программу, которая определяет является ли год високосным. Каждый 4-й год является високосным, кроме каждого 100-го, при этом каждый 400-й – високосный. Для проверки работы вывести результаты работы программы в консоль
    int year;
    std::cout << "Введите год: ";
    std::cin >> year;
    d=false; // признак високосности
    if(year % 4 == 0) {
	d=true;
        if(year % 100 == 0)
	    d=false;
        if(year % 400 == 0)
	    d=true;	
    }
    printf("%d %s\n",year,d?"год високосный":"год не високосный");
    
    return 0;
}
