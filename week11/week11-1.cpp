#include <stdio.h>
int addnum(int a,int b)
{
    printf("在寒士addnum()裡,得到三數a:%d b:%d\n",a,b);
    int ans=a+b;
    printf("算出答案%d要return出去喔\n",ans);
    return ans;
    }
int main()
{
    printf("在main()呼較使用addum()\n");
    int ans=addnum(2,3);
    printf("在 mian()得到答案:%d\n",ans);
}
