#include<iostream>
#include<ctime>

using namespace std;

//��ũ�� �Լ�(�ܼ� ġȯ)
#define SQUARE_macro_1(x) ((x)*(x))
#define SQUARE_macro_2(x) (x*x)

//�ζ��� �Լ�
inline int SQUARE_inline(int x)
{
    return x*x;
}
//�Ϲ� �Լ�
int SQUARE_basic(int x)
{
    return x*x;
}


int main(void)
{
    cout << "SQUARE_macro_1(5)   : " << SQUARE_macro_1(5) <<endl;
    cout << "SQUARE_macro_2(5)   : " << SQUARE_macro_2(5) <<endl;
    cout << "SQUARE_inline(5)    : " << SQUARE_inline(5) <<endl;
    cout << "SQUARE_basic(5)     : " << SQUARE_basic(5) <<endl;
    cout << "===========================================" <<endl;
    cout << "SQUARE_macro_1(5+5) : " << SQUARE_macro_1(5+5) <<endl;
    cout << "SQUARE_macro_2(5+5) : " << SQUARE_macro_2(5+5) <<endl;
    cout << "SQUARE_inline(5+5)  : " << SQUARE_inline(5+5) <<endl;
    cout << "SQUARE_basic(5+5)   : " << SQUARE_basic(5+5) <<endl;
}