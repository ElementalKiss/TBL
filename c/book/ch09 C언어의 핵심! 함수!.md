# 함수를 정의하고 선언하기
## 함수를 만드는 이유
* Divide and Conquer!
* 복잡한 문제를 main이라는 하나의 함수로 해결하는 것은 매우 어렵다.

## 함수의 입력과 출력: printf 함수도 반환을 합니다.
* C언어의 함수는 입력 또는 출력이 없는 것이 존재한다.(만들 수 있다.)
* ptintf 함수는 \n 문자를 포함하여 출력한 문자열의 길이를 반환한다.

## 전달인자의 유무와 반환값의 유무에 따라서 함수를 네 개의 형태로 나눕시다.
* 유형 1: 전달인자 있고, 반환 값 있다! 전달인자(O), 반환 값(O)
* 유형 2: 전달인자 있고, 반환 값 없다! 전달인자(O), 반환 값(X)
* 유형 3: 전달인자 없고, 반환 값 있다! 전달인자(X), 반환 값(O)
* 유형 4: 전달인자 없고, 반환 값 없다! 전달인자(X), 반환 값(X)

## 다양한 형태의 함수 정의1: 전달인자와 반환 값이 모두 있는 경우
* 전달인자는 int형 정수 둘이며, 이 둘을 이용한 덧셈을 진행한다.
* 덧셈결과는 반환이 되며, 따라서 반환형도 int형으로 선언한다.
* 마지막으로 함수의 이름은 Add라 한다.

```cpp
int Add(int num1, int num2)
{
    int result = num1 + num2;
    return result;  // result에 저장된 값을 Add 함수를 호출한 영역으로 전달
}
```
* 'int' 반환형
* 'Add' 함수의 이름
* '(int num1, int num2)' 매개변수
* 'return result;' 값의 반환
* 함수의 호출문이 반환 값으로 대체되는 것으로 이해할 수 있다.

## 다양한 형태의 함수 정의2: 전달인자나 반환 값이 존재하지 않는 경우
* printf함수 사용시 매번 서식지정을 하지 않도록 하는 함수
```cpp
void ShowAddResult(int num) // 인자전달(O), 반환 값(X)
{
    printf("덧셈결과 출력: %d \n", num);
}
```
* scanf함수보다 호출하기 편리하도록 하는 함수
```cpp
int ReadNum(void)   // 인자전달(X), 반환 값(O)
{
    int num;
    scanf("%d", &num);
    return num;
}
```
* 프로그램의 사용방법을 소개하는 함수
```cpp
void HowToUseThisProg(void)
{
    printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
    printd("자! 그럼 두개의 정수를 입력하세요. \n");
}
```
* void는 '인자를 입력하지 않는다' 라는 뜻이 담겨있다.

## return이 지니는 두 가지 의미 중 한가지 의미만 살리기
* return은 함수를 빠져나간다.
* return은 값을 반환한다.
* void로 선언된 함수에서도 return문을 사용할 수 있다.
```cpp
void NoReturnType(int num)
{
    if(num<0)
        return; // 값을 반환하지 않는 return문!        
}
```
* 위 함수에서 return은 '값의 반환 없이 그냥 함수를 빠져나간다'로 사용.

## 함수의 정의와 그에 따른 원형의 선언
* 컴파일 진행 방향에 따라 함수의 정의후 함수를 사용하여야 한다.
* 함수의 정의 이전에 함수를 사용하기 위해서는 함수의 선언이 필요하다.
```cpp
int Add(int num1, int num2);    // 매개변수의 이름을 포함한 선언
int Add(int, int);  //매개변수의 이름을 생략한 표현
```

## 다양한 종류의 함수 정의하기
* 하나의 함수 내에 둘 이상의 return문이 존재할 수 있다.
* main 함수가 아닌 다른 함수에서도 다른 함수를 호출할 수 있다.

