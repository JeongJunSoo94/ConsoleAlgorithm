/*
* ���� �˻��� �ϱ� ���� �⺻ �������� �̸� ��������
* ���� �˻� ���α׷��� �ۼ��϶�.
* ex>����Ÿ �Է� : 6 5 2 1 8 9 7 4
*    �˻� ����Ÿ : 9
*      �ڷ��� 9�� �ֽ��ϴ�.
*    �˻� ����Ÿ : 3
*      �ڷ��� 3�� �����ϴ�.
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
        printf("�ڷ��� %d�� �ֽ��ϴ�.\n", num);
    }
    else
    {
        printf("�ڷ��� %d�� �����ϴ�.\n", num);
    }
}

int main()
{
    using namespace std;
    vector<int> data;
    int a=0;
    printf("����Ÿ �Է� :");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d",&a);
        data.push_back(a);
    }
    printf("�˻� ����Ÿ :");
    scanf("%d", &a);
    printresult(a,Find(data, a));
    printf("�˻� ����Ÿ :");
    scanf("%d", &a);
    printresult(a, Find(data, a));
    return 0;
}