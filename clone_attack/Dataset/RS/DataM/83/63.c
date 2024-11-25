float pAk50gJEeDW (int s) {
    float c6nYGrA4;
    if (s >= 90 && (773 - 673) >= s)
        c6nYGrA4 = (291.0 - 287.0);
    else if ((539 - 454) <= s && (518 - 429) >= s)
        c6nYGrA4 = (613.7 - 610.0);
    else {
        if (s >= 82 && s <= 84)
            c6nYGrA4 = (871.3 - 868.0);
        else {
            if (s >= 78 && (327 - 246) >= s)
                c6nYGrA4 = (310.0 - 307.0);
            else if (75 <= s && s <= (624 - 547))
                c6nYGrA4 = (620.7 - 618.0);
            else {
                if (s >= (1011 - 939) && s <= (867 - 793))
                    c6nYGrA4 = 2.3;
                else if (s >= 68 && s <= (242 - 171))
                    c6nYGrA4 = 2.0;
                else if (s >= (369 - 305) && s <= (866 - 799))
                    c6nYGrA4 = 1.5;
                else {
                    if (s >= (1042 - 982) && s <= 63)
                        c6nYGrA4 = 1.0;
                    else if (s < (564 - 504))
                        c6nYGrA4 = 0.0;
                    else
                        ;
                };
            };
        };
    }
    return (c6nYGrA4);
}

void  main () {
    int HBKS6n;
    int Ncbl12m;
    int fbQlw0JN7;
    HBKS6n = (569 - 569);
    float YExM3vehk;
    YExM3vehk = 0;
    int MFvn4RhX [(900 - 890)], cj [10];
    scanf ("%d", &fbQlw0JN7);
    for (Ncbl12m = 0; Ncbl12m < fbQlw0JN7; Ncbl12m++) {
        scanf ("%d", &MFvn4RhX[Ncbl12m]);
        HBKS6n = HBKS6n +MFvn4RhX[Ncbl12m];
    }
    {
        Ncbl12m = 0;
        while (Ncbl12m < fbQlw0JN7) {
            scanf ("%d", &cj[Ncbl12m]);
            YExM3vehk = YExM3vehk +MFvn4RhX[Ncbl12m] * pAk50gJEeDW (cj[Ncbl12m]);
            Ncbl12m++;
        };
    }
    YExM3vehk = YExM3vehk / HBKS6n;
    printf ("%.2f", YExM3vehk);
}

