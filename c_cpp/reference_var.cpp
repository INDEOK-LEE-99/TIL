/*
    참조자
        참조자는 선언과 동시에 초기화
        참조자는 한 번 초기화되면, 참조의 대상 변경 불가
    참조자와 포인터를 비교하면서 참조자 연습
*/


#include<iostream>


using namespace std;

int main(void)
{
    //integer variable
    int num = 99;
    //참조형 변수 
    int& ref = num;
    //포인터 변수
    int* ptr = &num;

    //각 변수를 통한 출력
    cout << "num(num) : " << num << endl;
    cout << "num(ref) : " << ref << endl;
    cout << "num(ptr) : " << *ptr << endl;
    cout << "======================"<< endl;
    //같은 값

    //주소값 확인
    cout << "num address : " << &num << endl;
    cout << "ref address : " << &ref << endl;
    cout << "ptr address : " << ptr << endl;
    cout << "======================"<< endl;
    // 같은 주소값

    //참조형 변수를 통한 값 변경
    ref++;
    cout << "num : " << num << endl;
    *ptr = *ptr +100;
    cout << "num : " << num << endl;
    cout << "======================"<< endl;

    //배열에 적용(참조자, 포인터)
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
    //포인터에서는 주소값 연산을 통해 다음 요소를 나타낼 수 있다.
    //참조자는 arr[0]의 참조자이므로 arr[0]만 가리킨다.
    
}