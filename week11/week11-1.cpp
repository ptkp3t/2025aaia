#include <stdio.h>
int addnum(int a,int b)
{
    printf("�b�H�haddnum()��,�o��T��a:%d b:%d\n",a,b);
    int ans=a+b;
    printf("��X����%d�nreturn�X�h��\n",ans);
    return ans;
    }
int main()
{
    printf("�bmain()�I���ϥ�addum()\n");
    int ans=addnum(2,3);
    printf("�b mian()�o�쵪��:%d\n",ans);
}
