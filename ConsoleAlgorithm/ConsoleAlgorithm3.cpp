/*
* 선형 검색을 하기 위한 기본 순서도와 이를 바탕으로
* 선형 검색 프로그램을 작성하라.
* ex>데이타 입력 : 6 5 2 1 8 9 7 4
*    검색 데이타 : 9
*      자료중 9가 있습니다.
*    검색 데이타 : 3
*      자료중 3은 없습니다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>

int Find(std::vector<int>& data,int num)
{
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i] == num)
        {
            return 1;
        }
    }
    return 0;
}

void printresult(int num, int check)
{
    if (check==1)
    {
        printf("자료중 %d가 있습니다.\n", num);
    }
    else
    {
        printf("자료중 %d은 없습니다.\n", num);
    }
}

int main()
{
    using namespace std;
    vector<int> data;
    int a=0;
    printf("데이타 입력 :");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d",&a);
        data.push_back(a);
    }
    printf("검색 데이타 :");
    scanf("%d", &a);
    printresult(a,Find(data, a));
    printf("검색 데이타 :");
    scanf("%d", &a);
    printresult(a, Find(data, a));
    return 0;
}