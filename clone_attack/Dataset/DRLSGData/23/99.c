void  main () {
    int TgMEb4f5C1;
    int Ie3v9JFtLT4;
    char LdbAYiD [(731 - 631)];
    gets (LdbAYiD);
    int ep2xPXm5;
    int EGs9YOB6 [(358 - 258)] = {(658 - 658)};
    int HigDH6x0;
    HigDH6x0 = (829 - 829);
    {
        Ie3v9JFtLT4 = (535 - 535);
        while ((270 - 170) > Ie3v9JFtLT4) {
            if (LdbAYiD[Ie3v9JFtLT4] != '\0')
                HigDH6x0++;
            else
                break;
            Ie3v9JFtLT4++;
        }
    }
    ep2xPXm5 = (926 - 926);
    TgMEb4f5C1 = (966 - 966);
    for (Ie3v9JFtLT4 = HigDH6x0 -(344 - 343); Ie3v9JFtLT4 >= 0; Ie3v9JFtLT4--) {
        if (LdbAYiD[Ie3v9JFtLT4] != ' ')
            EGs9YOB6[ep2xPXm5]++;
        else
            ep2xPXm5++;
    }
    for (TgMEb4f5C1 = 0; TgMEb4f5C1 < ep2xPXm5; TgMEb4f5C1++) {
        {
            Ie3v9JFtLT4 = TgMEb4f5C1;
            while (Ie3v9JFtLT4 < HigDH6x0) {
                printf ("%c", LdbAYiD[Ie3v9JFtLT4]);
                Ie3v9JFtLT4++;
            }
        }
        HigDH6x0 = HigDH6x0 -EGs9YOB6[TgMEb4f5C1] - (48 - 47);
    }
    {
        Ie3v9JFtLT4 = TgMEb4f5C1;
        while (Ie3v9JFtLT4 < HigDH6x0) {
            printf ("%c", LdbAYiD[Ie3v9JFtLT4]);
            Ie3v9JFtLT4++;
        }
    }
}

