/*
�Լ��� �Ű������� ������ ���
with �����ͺ���
*/


#include<iostream>

using namespace std;

void SwapByValue(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "========SwapByValue �Լ� ����========" << num1 << endl;
    cout << "num1 : " << num1 << "(" << &num1 << ")" << endl;
    cout << "num2 : " << num2 << "(" << &num2 << ")" << endl;

}
void SwapByReference_ptr(int* num1, int* num2)
{
    //�����͸� �̿� call by reference
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    cout << "========SwapByReference_prt �Լ� ����========" << num1 << endl;
    cout << "num1 : " << *num1 << "(" << num1 << ")" << endl;
    cout << "num2 : " << *num2 << "(" << num2 << ")" << endl;
}


void SwapByReference_ref(int& num1, int& num2)
{
    //�����ڸ� �̿� call by reference
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "========SwapByReference_ref �Լ� ����========" << num1 << endl;
    cout << "num1 : " << num1 << "(" << &num1 << ")" << endl;
    cout << "num2 : " << num2 << "(" << &num2 << ")" << endl;

}

void ShowState(const int& num1, const int& num2)
{
    // �����ڸ� ���� ���� ��ȭ�� �Ͼ�� �ʴ� ���... => const�� �ٿ� �Լ��� Ư���� ��Ȯ�� ǥ�����ָ� ����
    // �Լ� ���������� ���� ��ȭ�� ������ �� �� �ֱ� ������
    // ���� �Լ��� �̸��� ���� ��� ���� ���� ���� ���� ������ ������ ������ ������ ���ִ� ���� ���� ������
    cout << "========num1, num2�� �� Ȯ��========" << num1 << endl;
    cout << "num1 : " << num1 << "(" << &num1 << ")" << endl;
    cout << "num2 : " << num2 << "(" << &num2 << ")" << endl;
}

int main(void)
{
    int num1 = 100;
    int num2 = 200;

    int& ref1 =num1;
    int& ref2 =num2;

    int* ptr1 = &num1;
    int* ptr2 = &num2;

    cout << "========main �Լ� ========" << num1 << endl;
    cout << "num1 : " << num1 << "(" << &num1 << ")" << endl;
    cout << "num2 : " << num2 << "(" << &num2 << ")" << endl;
    SwapByValue(num1,num2);
    cout << "========main �Լ� SwapByValue ȣ�� ��========" << num1 << endl;
    cout << "num1 : " << num1 << "(" << &num1 << ")" << endl;
    cout << "num2 : " << num2 << "(" << &num2 << ")" << endl;
    SwapByReference_ptr(ptr1 , ptr2);
    cout << "========main �Լ� SwapByReference_ptr ȣ�� ��========" << num1 << endl;
    cout << "num1 : " << num1 << "(" << &num1 << ")" << endl;
    cout << "num2 : " << num2 << "(" << &num2 << ")" << endl;
    SwapByReference_ref(ref1,ref2);
    cout << "========main �Լ� SwapByReference_ref ȣ�� ��========" << num1 << endl;
    cout << "num1 : " << num1 << "(" << &num1 << ")" << endl;
    cout << "num2 : " << num2 << "(" << &num2 << ")" << endl;
    ShowState(num1,num2);


    return 0; 
}

/*
���
call by value
�Ű������� �̸��� ������ �޸� �Ҵ��� �ް� ���ڷ� ���� ���� �����Ͽ� �Ű������� �ʱ�ȭ

call by reference
�ּҰ��� �̿��Ͽ� �� ���� ���� ������ ����������.
������ �̿��ϵ� �����͸� �̿��ϵ� �ּҰ��� ���� ���� ���� ������ ������
*/