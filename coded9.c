//write a program to create a voting system until user press 'n' and display the count of each candidate//

#include <stdio.h>
int main()
{
    int v1=0,v2=0,v3=0,v4=0,v5=0,cand=0;
    char n,c;
    while(c!="n" )
    {
        printf("select candidate(1,2,3,4 or 5)");
        scanf("%d",&cand);
        switch (cand)
        {
        case 1:
            v1++;
            break;
        case 2:
            v2++;
            break;
        case 3:
            v3++;
            break;
        case 4:
            v4++;
            break;
        case 5:
            v5++;
            break;
            default:
            printf("Invalid vote");
        }
        printf("enter n to stop:");
        scanf("%c",&c);
        if (c == "n")
        {
            
            break;
        }

    }
    printf("candidate1:%d\n",v1);
    printf("candidate2:%d\n",v2);
    printf("candidate3:%d\n",v3);
    printf("candidate4:%d\n",v4);
    printf("candidate5:%d\n",v5);
}