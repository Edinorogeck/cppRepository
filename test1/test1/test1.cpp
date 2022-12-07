// test1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

double GetPi() {
    return 3.14;
}

double VSPher(double r) {
    return 4 * GetPi() * r * r * r;
}

double VSPher(double r, double h) {
    return GetPi() * r * r * h;
}

void PrintArray(vector<int> &Arr) {
    
    copy(Arr.begin(), Arr.end(), std::ostream_iterator<int> (std::cout, " "));
}



int main()
{
    //int hoursInDay = 24;
    //int aaaaa = 30;
    //const int* const pointsToInt = &hoursInDay;
    //pointsToInt = &aaaaa;
    //*pointsToInt = 13; 


    //int* const pDaysInMonth = nullptr;
    //int daysInLunarMonth = 28;
    //pDaysInMonth = &daysInLunarMonth;

    //int number = 3;
    //int* pNum1 = &number;
    //*pNum1 = 20;
    //int* pNum2 = pNum1;
    //number *= 2;
    //cout << *pNum2 << endl;

    int* pointToAnInt = new int;
    int* pNumberCopy = pointToAnInt;
    *pNumberCopy = 30;
    cout << *pointToAnInt;
    //delete pNumberCopy;
    delete pointToAnInt;



    int* pInteger = nullptr;
    double r = 5, h;
    vector<int> array;
    array.push_back(555);
    array.push_back(555);
    array.push_back(555);
    array.push_back(555);
    array.push_back(555);
    array.push_back(555);
    array.push_back(555);
    array.push_back(555);

    double* pr = &r;
    *pr = 8;
    cout << pr << ' ' << *pr << ' ' << r;

    //PrintArray(array);

    //cin >> r >> h;

    //cout << VSPher(r) << endl << VSPher(r, h) << endl;




    return 0;   

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
