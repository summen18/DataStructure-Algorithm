// �ַ�������
// ��Ŀ���ݣ�
// �������ַ���str��substr��str��substr���ַ�����������10^5��ֻ������Сд��ĸ�����֡�
//���ַ������������ַ�����β����'\0'������substr���뵽str��ASCII�������Ǹ��ַ����棬���ж�������ֻ���ǵ�һ����
// �����ʽ:
// ��������ֻ��һ�У���ʽΪ
// str substr
// �����ʽ��
// �������֮����ַ�����

#include <iostream>
using namespace std;

int main()
{
    string s, subs;
    cin>>s>>subs;
    int i, max=0,len=s.length();
    for ( i = 0; i < len; i++)
    {
        if (s[i]>s[max])
        {
            max = i;
        }
    }
    s.insert(max+1,subs);
    cout<<s;
    return 0;
}