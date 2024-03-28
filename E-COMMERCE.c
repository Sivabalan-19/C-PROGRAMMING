#include<string.h>
#include<stdio.h>
void home()
{
    printf("\n-----------------------------------------");
    printf("\n 1. EXPLORE \n");
    printf("\n 2. YOUR CART \n");
    printf("\n 3. CHECK OUT \n");
    printf("\n 4. MY ACCOUNT \n");
    printf("\n 5. CUSTOMER SERVICE \n");
    printf("\n 6. EXIT \n");
    printf("-----------------------------------------\n");
}
union exit 
{
    char exi;
}e;
void categories()
{
    printf("\n1. ELECTRONICS\n");
    printf("\n2. HOME DECOR\n");
    printf("\n3. FASHION\n");
    printf("\n4. HOMES & KITCHEN\n");
    printf("\nEnter categories you want to see : ");
}
void electronics()
{
    printf("\n1. IPHONE 15 PRO MAX            150000\n");
    printf("\n2. MACBOOK AIR M3 CHIP          300000\n");
    printf("\n3. SAMSUNG GALAXY S23 ULTRA     125000\n");
    printf("\n4. APPLE WATCH ULTRA            085000\n");
    printf("\n5. SAMSUNG TV 214 CM            880000\n");
    printf("\nEnter your choice : ");
}
void homedecor()
{
    printf("\n1. LED LAMP             1000\n");
    printf("\n2. BUDDHA STATUE        5000\n");
    printf("\n3. WALL STICKER         500\n");
    printf("\n4. WALL CLOCK           1000\n");
    printf("\n5. ARTIFICIAL PLANT     2000\n");
    printf("Enter your choice : ");
}
void fashion()
{
    printf("\n1. SHIRT           1000\n");
    printf("\n2. PANTS            700\n");
    printf("\n3. T-SHIRT          500\n");
    printf("\n4. HODDY           2000\n");
    printf("\n5. COURT SUIT     10000\n");
    printf("\nEnter your choice : ");
}
void kitchen()
{
    printf("\n1. KETTLE               2000\n");
    printf("\n2. WATER PURIFIER       5000\n");
    printf("\n3. MIXER                 500\n");
    printf("\n4. REFRIGERATOR        10000\n");
    printf("\n5. VACCUM CLEANER       2000\n");
    printf("Enter your choice : ");
}
void cusfeed()
{   
    int cusfed; char feed[100];
    printf("If you have any Problem, Please contact 123-456-789\n");
     printf("\nThank you for your feedback. We will look into..");
}
struct variable{
     int a ,choice,no;
      int rate, lenght;
      char cart[40][30];
    }o;
int main()
{

        printf("E - COMMERECE PLATFORM\n");
        printf("\n\n");
        printf("- - - - - - - - - - SIGN UP - - - - - - - - - - \n");
        char  signuserid[30], signpass[20];
        printf("\nEnter the USERNAME : ");
        scanf("%s", signuserid);
        printf("\nEnter the PASSWORD : ");
        scanf("%s",signpass);
    do
    {
        char items[3000] = " ";
        char password[30];
        char userid[20];
         printf("\n- - - - - - - - - - SIGN IN - - - - - - - - - - \n");
        printf("\nEnter the USERNAME : ");
        scanf("%s",userid);
        printf("\nEnter the PASSWORD : ");
        scanf("%s",password);
        if(!strcmp(userid,signuserid) && !strcmp(password,signpass))
        {
            int i =1, index=0;
            while(i==1)
            {
            home();
            printf("\n   Enter the choice : ");
            scanf("\n%d",&o.choice);
            int *ptr=&o.choice;
            switch(*ptr)
            {      
                case 1:
                {
                    int ex, ch;
                    categories();
                    scanf("%d",&ex);
                    if(ex==1)
                    {
                        electronics();
                        scanf("%d",&ch);
                        if(ch==1)
                        {
                            strcat(items,"IPHONE 15 PRO MAX ");
                            o.rate+=150000;
                            index ++;
                        }
                         if(ch==2)
                        {
                            strcat(items,"MAC BOOK AIR M3 CHIP  ");
                            o.rate+=300000;
                            index ++;
                        }
                         if(ch==3)
                        {
                            strcat(items,"SAMSUNG GALAXY S23 ULTRA  ");
                            o.rate+=125000;
                            index ++;
                        }
                         if(ch==4)
                        {
                            strcat(items,"APPLE WATCH ULTRA ");
                            o.rate+=85000;
                            index ++;
                        }
                         if(ch==5)
                        {
                            strcat(items,"SAMSUNG TV 214 CM ");
                            o.rate+=880000;
                            index ++;
                        }
                    }
                     if(ex==2)
                    {
                        homedecor();
                        scanf("%d",&ch);
                        if(ch==1)
                        {
                            strcat(items,"LED LAMP  ");
                            o.rate+=1000;
                            index ++;
                        }
                         if(ch==2)
                        {   
                            strcat(items,"BUDDHA STATUE ");
                            o.rate+=5000;
                            index ++;
                        }
                         if(ch==3)
                        {
                            strcat(items,"WALL STICKER  ");
                            o.rate+=500;
                            index ++;
                        }
                         if(ch==4)
                        {
                            strcat(items,"WALL CLOCK    ");
                            o.rate+=1000;
                            index ++;
                        }
                         if(ch==5)
                        {
                            strcat(items,"ARTIFICIAL PLANT ");
                            o.rate+=2000;
                            index ++;
                        }
                    }
                     if(ex==3)
                    {
                        fashion();
                        scanf("%d",&ch);
                        if(ch==1)
                        {
                            strcat(items,"SHIRT ");
                            o.rate+=1000;
                            index ++;
                        }
                         if(ch==2)
                        {
                            strcat(items,"PANTS ");
                            o.rate+=700;
                            index ++;
                        }
                         if(ch==3)
                        {
                            strcat(items,"T-SHIRT  ");
                            o.rate+=500;
                            index ++;
                        }
                         if(ch==4)
                        {
                            strcat(items,"HODDY ");
                            o.rate+=2000;
                            index ++;
                        }
                         if(ch==5)
                        {
                            strcat(items,"COURT SUIT ");
                            o.rate+=10000;
                            index ++;
                        }
                    }
                     if(ex==4)
                    {
                        kitchen();
                        scanf("%d",&ch);
                        if(ch==1)
                        {
                            strcat(items,"KETTLE ");
                            o.rate+=2000;
                            index ++;
                        }
                         if(ch==2)
                        {
                            strcat(items,"WATER PURIFIER ");
                            o.rate+=5000;
                            index ++;
                        }
                         if(ch==3)
                        {
                            strcat(items,"MIXER ");
                            o.rate+=500;
                            index ++;
                        }
                         if(ch==4)
                        {
                            strcat(items,"REFRIGERATOR ");
                            o.rate+=1000;
                            index ++;
                        }
                         if(ch==5)
                        {
                            strcat(items,"VACCUM CLEANER ");
                            o.rate+=2000;
                            index ++;
                        }
                    }
                    break;
                    
                } 
                case 2:
                {
                    printf("\nNumber of products : %d\n",index);
                    printf("\n%s\n",items);
                    printf("\n Rate of the products on your cart %d",o.rate);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("Do you want to check out PRESS 1 :");
                    scanf("%d",&num);
                    if(num==1)
                    { 
                        printf("Total cost = %d",o.rate);
                        o.rate = 0;
                        strcpy(items,"");
                        index=0;
                        printf("\n THANK YOU FOR USING OUR WEBSITE ... CONTIUE PURCHASING ");
                    }
                    break;
                }
                case 4:
                {
                    printf("\nUSERNAME    : %s",signuserid);
                    o.lenght=strlen(signpass);
                    printf("\nPASSWORD    : ");
                    for(int i=0;i<o.lenght;i++)
                    {
                        printf("*");
                    }
                    break;
                }
                case 5:
                {
                    cusfeed();
                    break;
                }
                case 6:
                {
                    i++;
                }
            }}
            printf("\nPRESS ANY KEY TO EXIT : ");
            scanf("\n%d",&e.exi);
        }
        else
        {
            printf("Incorrect password\n\n\n");
            printf("\nDO YOU WANT TO CONTIUE PRESS 1 ");
            scanf("\n%d",&e.exi);
        }
    }while(e.exi==1) ;
    printf("\n\n- - - - - - - - THANK YOU FOR USING OUR WEBSITE- - - - - - - - ");}
