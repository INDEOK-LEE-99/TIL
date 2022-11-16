/*
    ������
        �����ڴ� ����� ���ÿ� �ʱ�ȭ
        �����ڴ� �� �� �ʱ�ȭ�Ǹ�, ������ ��� ���� �Ұ�
    �����ڿ� �����͸� ���ϸ鼭 ������ ����
*/


#include<iostream>


using namespace std;

int main(void)
{
    //integer variable
    int num = 99;
    //������ ���� 
    int& ref = num;
    //������ ����
    int* ptr = &num;

    //�� ������ ���� ���
    cout << "num(num) : " << num << endl;
    cout << "num(ref) : " << ref << endl;
    cout << "num(ptr) : " << *ptr << endl;
    cout << "======================"<< endl;
    //���� ��

    //�ּҰ� Ȯ��
    cout << "num address : " << &num << endl;
    cout << "ref address : " << &ref << endl;
    cout << "ptr address : " << ptr << endl;
    cout << "======================"<< endl;
    // ���� �ּҰ�

    //������ ������ ���� �� ����
    ref++;
    cout << "num : " << num << endl;
    *ptr = *ptr +100;
    cout << "num : " << num << endl;
    cout << "======================"<< endl;

    //�迭�� ����(������, ������)
    int arr[5] = {100,200,300,400,500};
    int& ref_arr = arr[0];
    int* ptr_arr = arr;

    cout << "arr[0] : " << arr[0] << endl;
    cout << "arr[0](ref_arr) : " << ref_arr << endl;
    cout << "arr[0](ptr_arr) : " << *ptr_arr << endl;
    cout << "======================"<< endl;

    cout << "arr[0] : " << arr[1] << endl;
    cout << "arr[0](ref_arr) : " << ref_arr + 1 << endl;
    cout << "arr[0](ptr_arr) : " << *(ptr_arr+1) << endl;
    cout << "======================"<< endl;
    //�����Ϳ����� �ּҰ� ������ ���� ���� ��Ҹ� ��Ÿ�� �� �ִ�.
    //�����ڴ� arr[0]�� �������̹Ƿ� arr[0]�� ����Ų��.
    
}