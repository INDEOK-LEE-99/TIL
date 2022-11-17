/*
함수의 매개변수로 참조인 경우
with 포인터변수
*/


#include<iostream>

using namespace std;

void SwapByValue(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "========SwapByValue 함수 내부========" << num1 << endl;
    cout << "num1 : " << num1 << "(" << &num1 << ")" << endl;
    cout << "num2 : " << num2 << "(" << &num2 << ")" << endl;

}
void SwapByReference_ptr(int* num1, int* num2)
{
    //포인터를 이용 call by reference
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    cout << "========SwapByReference_prt 함수 내부========" << num1 << endl;
    cout << "num1 : " << *num1 << "(" << num1 << ")" << endl;
    cout << "num2 : " << *num2 << "(" << num2 << ")" << endl;
}


void SwapByReference_ref(int& num1, int& num2)
{
    //참조자를 이용 call by reference
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "========SwapByReference_ref 함수 내부========" << num1 << endl;
    cout << "num1 : " << num1 << "(" << &num1 << ")" << endl;
    cout << "num2 : " << num2 << "(" << &num2 << ")" << endl;

}

void ShowState(const int& num1, const int& num2)
{
    // 참조자를 통해 값이 변화가 일어나지 않는 경우... => const를 붙여 함수의 특성을 명확히 표현해주면 좋다
    // 함수 원형만으로 값의 변화가 없음을 알 수 있기 때문에
    // 물론 함수의 이름을 통해 어느 정도 감을 잡을 수도 있지만 오류의 소지를 완전히 없애는 것이 좋기 때문에
    cout << "========num1, num2의 값 확인========" << num1 << endl;
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

    cout << "========main 함수 ========" << num1 << endl;
    cout << "num1 : " << num1 << "(" << &num1 << ")" << endl;
    cout << "num2 : " << num2 << "(" << &num2 << ")" << endl;
    SwapByValue(num1,num2);
    cout << "========main 함수 SwapByValue 호출 후========" << num1 << endl;
    cout << "num1 : " << num1 << "(" << &num1 << ")" << endl;
    cout << "num2 : " << num2 << "(" << &num2 << ")" << endl;
    SwapByReference_ptr(ptr1 , ptr2);
    cout << "========main 함수 SwapByReference_ptr 호출 후========" << num1 << endl;
    cout << "num1 : " << num1 << "(" << &num1 << ")" << endl;
    cout << "num2 : " << num2 << "(" << &num2 << ")" << endl;
    SwapByReference_ref(ref1,ref2);
    cout << "========main 함수 SwapByReference_ref 호출 후========" << num1 << endl;
    cout << "num1 : " << num1 << "(" << &num1 << ")" << endl;
    cout << "num2 : " << num2 << "(" << &num2 << ")" << endl;
    ShowState(num1,num2);


    return 0; 
}

/*
결론
call by value
매개변수의 이름의 변수가 메모리 할당을 받고 인자로 받은 값을 복사하여 매개변수에 초기화

call by reference
주소값을 이용하여 그 안의 값을 접근이 가능해진다.
참조라를 이용하든 포인터를 이용하든 주소값을 통해 안의 값에 접근이 가능함
*/