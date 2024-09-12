#include <iostream>
using namespace std;
//void foo(int* x ) {
//    *x *= 4;
//}
float* more(float *x, float *y) {
    if (*x<=*y)
    {
        return y;
    }
    else
    {
       
        return x;
    }
    
    cout << endl << endl;
}
void positiveornegative(int* x) {
    if (*x<0)
    {
        cout << "negative";
    }
    else   if (*x > 0)
    {
        cout << "positive";
    }
    else
    {
        cout << "equals to zero";
    }
    cout << endl << endl;

}
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << "num1 = " << *x << "\nnum2 = " << *y;
    cout << endl << endl;

}
template<typename T1>
T1 addition(T1* num1, T1* num2) {
   T1 p = *num1 + *num2;
   return p;
}
template<typename T2>
T2 substraction(T2* num1, T2* num2) {
    T2 p = *num1 - *num2;
    return p;

}
template<typename T3>
T3 multiplication(T3* num1, T3* num2) {
   T3 p = *num1 * *num2;
   return p;

}
template<typename T4>
T4 division(T4* num1, T4* num2) {
    T4 p = *num1 * *num2;
    return p;

}
template<typename T>
T calculator(T *num1, T* num2, char* c) {
    switch (*c)
    {
        
    case '+':
        return addition(num1, num2);
        break;
    case '*':
        return multiplication(num1, num2);
        break;
    case  '-':
        return substraction(num1, num2);
        break;
    case  '/':
        return  division(num1, num2);
        break;
    default:
        break;
    }


}

template<typename A>

A sumarr(A* arr1[], int len) {
    A sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += *arr1[i];
    }
    return sum;
}

int main()
{
    //int x = 5;
    //
    //int* x_ptr = &x;
    //foo(x_ptr);
    //cout << &x;

    float num1;
    cout << "eded daxilk edin  - " ;
    cin >> num1;
    float* num1_pntr = &num1;
    float num2;
    cout << "eded daxilk edin  - ";
    cin >> num2;
    float* num2_pntr = &num2;
   cout<< more(num1_pntr, num2_pntr);
    
    int num3;
    cout << "eded daxilk edin  - ";
    cin >> num3;
    int* num3_pntr = &num3;
    positiveornegative(num3_pntr);



    int num4;
    cout << "1ci eded daxilk edin  - ";
    cin >> num4;
    int* num4_pntr = &num4;
    int num5;
    cout << "2ci eded daxilk edin  - ";
    cin >> num5;
    int* num5_pntr = &num5;
    swap(num4_pntr, num5_pntr);

    float num6;
    cout << "1ci eded daxilk edin  - ";
    cin >> num6;
    float* num6_pntr = &num6;
    float num7;
    cout << "2ci eded daxilk edin  - ";
    cin >> num7;
    float* num7_pntr = &num7;
    cout << "select charecter + - / * - ";
    char c;
    cin >> c;
    char* c_pntr = &c;
    cout<<calculator(num6_pntr, num7_pntr,c_pntr);



    srand(time(NULL));
    int min = -100;
    int max = 100;
    int arr[15];
    for (int i = 0; i < 15; i++)
    {
        int random = min + rand() % (max - min + 1);
        arr[i] = random;
    }

}
