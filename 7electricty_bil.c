#include<stdio.h>
void main()
{
    char sn[50];
    int pb,cb,ec,prb;
    printf("                  Welcome TNEB                    ");
    printf("\nEnter the Service Number     : ");
    scanf("%s",&sn);
    printf("Enter the previous bill reading: ");
    scanf("%d",&pb);
    printf("Enter the current  bill reading: ");
    scanf("%d",&cb);
    printf("                 Its your EB BILL                 ");
    printf("\n[SERVICE NUMBER]%s\n",sn);
    prb=cb-pb;
    printf("[UNIT CONSUMED]   %d\n",prb);
    ec=prb*100;
    printf("[ELECTRICTY BILL] %d\n",ec);    
    return 0;
}