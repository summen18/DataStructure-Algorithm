// 字符串插入
// 题目内容：
// 有两个字符串str和substr，str和substr的字符个数不超过10^5，只包含大小写字母和数字。
//（字符个数不包括字符串结尾处的'\0'。）将substr插入到str中ASCII码最大的那个字符后面，若有多个最大则只考虑第一个。
// 输入格式:
// 输入数据只有一行，格式为
// str substr
// 输出格式：
// 输出插入之后的字符串。

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