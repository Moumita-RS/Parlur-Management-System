#include<stdio.h>
#include<conio.h>
#include<windows.h>


int i,j,no,con,aga;
float count=0,h_pack=500,h_treat=2000,h_loss=1200,h_colour=1300,h_stra=1800;
float hc_u=220,hc_v=300,hc_lair=230;
float f_har=530,f_gold=600,f_fruit=700;
float ht_nail=210,ht_mani=300,ht_bri=280;
float lt_foot=220,lt_nail=210,lt_padi=400;
float b_gor=8000,b_sty=9000,b_super=10000;
float o_eye=30,o_hair=160,o_tra=300;


void welcome()
    {
        printf("\n\n");
        printf("\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome To Our Most Fashionable Beauty Parlor \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

        printf("\n\n\n");

        printf("select 1 To see our menu or 0 to exit ");
        scanf("%d",&i);
        printf("\n");

    }

void menu()
{
    printf("\t\tNo. \t\t Name \n");
    printf("\t\t--- \t\t ---- \n\n");
    printf("\t\t1. \t \tHair Treatment\n");
    printf("\t\t2. \t \tHair Cut   \n");
    printf("\t\t3. \t \tFacial Fact   \n");
    printf("\t\t4. \t \tHand Treatment   \n");
    printf("\t\t5. \t \tLeg Treatment   \n");
    printf("\t\t6. \t \tBridal Special   \n");
    printf("\t\t7. \t \tOther Services   \n");
}

void hairtreat()
{
    printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome To Hair Treatment Section \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ");

    printf("\n\n\t\tNo. \t\t Name \t\t\t \t\t\t  Price(Taka)\n");
    printf("\t\t--- \t\t ---- \t\t \t  \t\t\t-----------\n\n");

    printf("\t\t1. \t \tHair Pack         \t\t\t\t%.2f\n",h_pack);
    printf("\t\t2. \t \tHair Treatment for Growth         \t\t\%.2f\n",h_treat);
    printf("\t\t3. \t \tHair Loss Solution Normal Treatment   \t\t%.2f\n",h_loss);
    printf("\t\t4. \t \tHair Color   \t\t\t\t\t%.2f\n",h_colour);
    printf("\t\t5. \t \tHair Straight   \t\t\t\t%.2f\n",h_stra);

    printf("\n\nEnter Number What You Want : ");
    scanf("%d",&no);

    switch(no)
    {
    case 1:
        {
            printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+h_pack;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Hair Treatment Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                hairtreat();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;

        }

    case 2:
        {
            printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+h_treat;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Hair Treatment Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                hairtreat();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;


        }
    case 3:
        {
            printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+h_loss;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Hair Treatment Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                hairtreat();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;

        }
    case 4:
        {
            printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+h_colour;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Hair Treatment Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                hairtreat();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;

        }
    case 5:
        {
            printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+h_stra;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Hair Treatment Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                hairtreat();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;

        }
    default:
        {
            system("cls");
            printf("\n\n\tSorry You Press The Wrong Number...Please Press The Right Number ");
            hairtreat();
        }
    }
}

void haircut()
{
    printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome To Haircut Section \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ");

    printf("\n\n\t\tNo. \t\t Name \t\t\t \t\t\t  Price(Taka)\n");
    printf("\t\t--- \t\t ---- \t\t \t  \t\t\t-----------\n\n");

    printf("\t\t1. \t \tU-Type Cutting         \t\t\t\t%.2f\n",hc_u);
    printf("\t\t2. \t \tV-Type Cutting       \t\t \t\t\%.2f\n",hc_v);
    printf("\t\t3. \t \tLair   \t\t\t\t\t\t%.2f\n",hc_lair);


    printf("\n\nEnter Number What You Want : ");
    scanf("%d",&no);

    switch(no)
    {
    case 1:
        {
             printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+hc_u;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Haircut Section Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                haircut();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;
        }

    case 2:
        {
             printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+hc_v;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Haircut Section Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                haircut();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;
        }

    case 3:
        {
             printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+hc_lair;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Haircut Section Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                haircut();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;
        }
    default:
        {
            system("cls");
            printf("\n\n\tSorry You Press The Wrong Number...Please Press The Right Number ");
            haircut();
        }
    }

}

void facial()
{
    printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome To Facial Section \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ");

    printf("\n\n\t\tNo. \t\t Name \t\t\t \t\t\t  Price(Taka)\n");
    printf("\t\t--- \t\t ---- \t\t \t  \t\t\t-----------\n\n");

    printf("\t\t1. \t \tHerbal Facial         \t\t\t\t%.2f\n",f_har);
    printf("\t\t2. \t \tGold Facial       \t\t \t\t\%.2f\n",f_gold);
    printf("\t\t3. \t \tFruit Facial   \t\t\t\t\t%.2f\n",f_fruit);


    printf("\n\nEnter Number What You Want : ");
    scanf("%d",&no);

    switch(no)
    {
    case 1:
        {
            printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+f_har;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Facial Section Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                facial();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;
        }

    case 2:
        {
             printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+f_gold;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Facial Section Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                facial();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;
        }

    case 3:
        {
             printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+f_fruit;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Facial Section Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                facial();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;
        }
    default:
        {
            system("cls");
            printf("\n\n\tSorry You Press The Wrong Number...Please Press The Right Number ");
            facial();
        }
    }

}

void handtreat()
{
    printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome To Hand Treatment Section \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ");

    printf("\n\n\t\tNo. \t\t Name \t\t\t \t\t\t  Price(Taka)\n");
    printf("\t\t--- \t\t ---- \t\t \t  \t\t\t-----------\n\n");

    printf("\t\t1. \t \tNail Art Normal         \t\t\t\t%.2f\n",ht_nail);
    printf("\t\t2. \t \tManicure       \t\t\t\t \t\t\%.2f\n",ht_mani);
    printf("\t\t3. \t \tBridal Mehedi   \t\t\t\t\t%.2f\n",ht_bri);


    printf("\n\nEnter Number What You Want : ");
    scanf("%d",&no);

    switch(no)
    {
    case 1:
        {
            printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+ht_nail;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Hand Treatment Section Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                handtreat();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;

        }

    case 2:
        {
            printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+ht_mani;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Hand Treatment Section Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                handtreat();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;
        }

    case 3:
        {
            printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+ht_bri;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Hand Treatment Section Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                handtreat();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;
        }
    default:
        {
            system("cls");
            printf("\n\n\tSorry You Press The Wrong Number...Please Press The Right Number ");
            handtreat();
        }
    }

}

void legtreat()
{
    printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome To Leg Treatment Section \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ");

    printf("\n\n\t\tNo. \t\t Name \t\t\t \t\t\t  Price(Taka)\n");
    printf("\t\t--- \t\t ---- \t\t \t  \t\t\t-----------\n\n");

    printf("\t\t1. \t \tFoot Massage         \t\t\t\t%.2f\n",lt_foot);
    printf("\t\t2. \t \tNail Art       \t\t\t\t \t%.2f\n",lt_nail);
    printf("\t\t3. \t \tPadicure   \t\t\t\t\t%.2f\n",lt_padi);


    printf("\n\nEnter Number What You Want : ");
    scanf("%d",&no);

    switch(no)
    {
    case 1:
        {
            printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+lt_foot;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Leg Treatment Section Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                legtreat();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;

        }

    case 2:
        {
            printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+lt_nail;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Leg Treatment Section Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                legtreat();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;
        }

    case 3:
        {
            printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+lt_padi
                ;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Leg Treatment Section Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                legtreat();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;
        }
    default:
        {
            system("cls");
            printf("\n\n\tSorry You Press The Wrong Number...Please Press The Right Number ");
            legtreat();
        }
    }


}

void bridal()
{
    printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome To Bridal Special Section \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ");

    printf("\n\n\t\tNo. \t\t Name \t\t\t \t\t\t  Price(Taka)\n");
    printf("\t\t--- \t\t ---- \t\t \t  \t\t\t-----------\n\n");

    printf("\t\t1. \t \tGorgeous Bride Package         \t\t\t\t%.2f\n",b_gor);
    printf("\t\t2. \t \tStylish Bride Package       \t\t \t\t\%.2f\n",b_sty);
    printf("\t\t3. \t \tSuper Bride Package   \t\t\t\t\t%.2f\n",b_super);


    printf("\n\nEnter Number What You Want : ");
    scanf("%d",&no);

    switch(no)
    {
    case 1:
        {
            printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+b_gor;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Bridal Special Section Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                bridal();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;

        }

    case 2:
        {
            printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+b_sty;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Bridal Special Section Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                bridal();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;
        }

    case 3:
        {
            printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+b_super;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Bridal Special Section Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                bridal();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;
        }
    default:
        {
            system("cls");
            printf("\n\n\tSorry You Press The Wrong Number...Please Press The Right Number ");
            bridal();
        }
    }


}

void other()
{
    printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome To Other Section \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ");

    printf("\n\n\t\tNo. \t\t Name \t\t\t \t\t\t  Price(Taka)\n");
    printf("\t\t--- \t\t ---- \t\t \t  \t\t\t-----------\n\n");

    printf("\t\t1. \t \tEye Brow Plack         \t\t\t\t%.2f\n",o_eye);
    printf("\t\t2. \t \tHair Setup       \t\t\t\t \t\t\%.2f\n",o_hair);
    printf("\t\t3. \t \tTraditional Makeover   \t\t\t\t\t%.2f\n",o_tra);


    printf("\n\nEnter Number What You Want : ");
    scanf("%d",&no);

    switch(no)
    {
    case 1:
        {
            printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+o_eye;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Other Section Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                other();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;

        }

    case 2:
        {
            printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+o_hair;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Other Section Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                other();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;
        }

    case 3:
        {
            printf("For Final Conformation Press 1: ");
            scanf("%d",&con);

            if(con==1)
            {
                count=count+o_tra;
                printf("\n\n\t\t\tThanks For Receive Our Services\n\n");
            }
            printf("\n\n");
            printf("If You Want to See Other Section Press 1: ");
            printf("\nIf You Want to See  Menu again Press 2: ");
            printf("\nFor Exit Press Any key: \n");
            scanf("%d",&aga);

            system("cls");

            if(aga==1)
            {
                other();
            }
            else if(aga==2)
            {
                main();
            }
            else
            {
                break;
            }
            break;
        }
    default:
        {
            system("cls");
            printf("\n\n\tSorry You Press The Wrong Number...Please Press The Right Number ");
            other();
        }
    }


}


int main()
{



   welcome();



    switch(i)
    {
    case 0:
            printf("----Thanks For Visiting----");
            exit(0);
    case 1:
        {
            menu();
            break;
        }

    default:
        {
            system("cls");

            printf("\n\nSorry You Press Wrong Number...Please Press The Right Number ");
            main();
            break;

        }

    }

    printf("\n\nEnter The Number What you Want: ");
    scanf("%d",&j);
    system("cls");

    switch(j)
    {
    case 1:
        {

           hairtreat();
           break;

        }
    case 2:
        {
            haircut();
            break;
        }
    case 3:
        {
            facial();
            break;
        }
    case 4:
        {
            handtreat();
            break;
        }
    case 5:
        {
            legtreat();
            break;
        }
    case 6:
        {
            bridal();
            break;
        }
    case 7:
        {
            other();
            break;
        }
    default:
        {
            system("cls");
            printf("\n\nSorry You Press Wrong Number...Please Continue With The Main Menu");
            main();
            break;

        }


    }
    if(count>0)
    {
        printf("\n\nSir..Your Bill is %.2f",count);

    }


    printf("\n\n");

    return 0;
}
