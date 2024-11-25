void  main () {
    int Jd3YxwL;
    int FTM7gsoVd;
    struct   ts {
        int xeGRyX;
        char qsVeaF6OJo [(652 - 622)];
        struct   ts *amqApyIQOMC;
    };
    struct   ts *km79RgtT, *lMzFet, *opZQTEaw;
    int lMyclDW [(759 - 659)] = {(532 - 532)};
    int uEH3hF1;
    int v2AU6OTB1;
    char f3jKoPEkHdxv;
    int PCcLWi;
    int ygvD4WHKcVw;
    int AawF3gopeAX;
    scanf ("%d", &FTM7gsoVd);
    km79RgtT = lMzFet = opZQTEaw = (struct   ts *) malloc (sizeof (struct   ts));
    scanf ("%d %s", &km79RgtT->xeGRyX, km79RgtT->qsVeaF6OJo);
    {
        AawF3gopeAX = (1693 - 698) - (1690 - 696);
        for (; AawF3gopeAX < FTM7gsoVd;) {
            AawF3gopeAX = (825 - 197) - (1478 - 851);
            km79RgtT = (struct   ts *) malloc (sizeof (struct   ts));
            scanf ("%d %s", &km79RgtT->xeGRyX, km79RgtT->qsVeaF6OJo);
            lMzFet->amqApyIQOMC = km79RgtT;
            lMzFet = km79RgtT;
        }
    }
    PCcLWi = (785 - 785);
    km79RgtT->amqApyIQOMC = (812 - 812);
    {
        AawF3gopeAX = 'A';
        for (; AawF3gopeAX <= 'Z';) {
            km79RgtT = opZQTEaw;
            {
                Jd3YxwL = (634 - 585) - (122 - 73);
                for (; Jd3YxwL < FTM7gsoVd;) {
                    {
                        uEH3hF1 = (1088 - 717) - (513 - 142);
                        for (; km79RgtT->qsVeaF6OJo[uEH3hF1] != '\0';) {
                            if (!(AawF3gopeAX != km79RgtT->qsVeaF6OJo[uEH3hF1]))
                                lMyclDW[AawF3gopeAX]++;
                            uEH3hF1 = (856 - 709) - (291 - 145);
                        }
                    }
                    Jd3YxwL = (983 - 600) - (630 - 248);
                    km79RgtT = km79RgtT->amqApyIQOMC;
                }
            }
            AawF3gopeAX = (1107 - 464) - (1067 - 425);
        }
    }
    {
        AawF3gopeAX = 'A';
        for (; AawF3gopeAX <= 'Z';) {
            PCcLWi = PCcLWi > lMyclDW[AawF3gopeAX] ? PCcLWi : lMyclDW[AawF3gopeAX];
            AawF3gopeAX = (254 - 152) - (905 - 804);
        }
    }
    {
        AawF3gopeAX = 'A';
        for (; AawF3gopeAX <= 'Z';) {
            if (!(PCcLWi != lMyclDW[AawF3gopeAX]))
                f3jKoPEkHdxv = AawF3gopeAX;
            AawF3gopeAX = (868 - 579) - (690 - 402);
        }
    }
    printf ("%c\n%d\n", f3jKoPEkHdxv, PCcLWi);
    km79RgtT = opZQTEaw;
    {
        AawF3gopeAX = (872 - 62) - (984 - 174);
        for (; AawF3gopeAX < FTM7gsoVd;) {
            {
                uEH3hF1 = (94 - 94);
                for (; km79RgtT->qsVeaF6OJo[uEH3hF1] != '\0';) {
                    if (km79RgtT->qsVeaF6OJo[uEH3hF1] == f3jKoPEkHdxv) {
                        printf ("%d\n", km79RgtT->xeGRyX);
                    }
                    uEH3hF1 = uEH3hF1 + 1;
                }
            }
            km79RgtT = km79RgtT->amqApyIQOMC;
            AawF3gopeAX = (1554 - 974) - (888 - 309);
        }
    }
}

