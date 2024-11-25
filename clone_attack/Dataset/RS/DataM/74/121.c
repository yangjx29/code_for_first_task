int peaImodQj0E (int Rocb2KOErGF) {
    int YmiSuq4jCcVX, OnDcawUsg, peaImodQj0E = 1;
    YmiSuq4jCcVX = (int) sqrt (Rocb2KOErGF);
    for (OnDcawUsg = 2; OnDcawUsg <= YmiSuq4jCcVX; OnDcawUsg = OnDcawUsg +1)
        if (!(0 != Rocb2KOErGF % OnDcawUsg))
            peaImodQj0E = 0;
    return (peaImodQj0E);
}

int fgklapiAX (int Rocb2KOErGF) {
    int OnDcawUsg, tKEkMWfX, fgklapiAX = 1, upDKXO5Sn, hdueUwOG;
    tKEkMWfX = log10 (Rocb2KOErGF);
    {
        OnDcawUsg = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (OnDcawUsg <= tKEkMWfX) {
            upDKXO5Sn = Rocb2KOErGF;
            hdueUwOG = Rocb2KOErGF;
            upDKXO5Sn = upDKXO5Sn / pow ((582 - 572), OnDcawUsg);
            hdueUwOG = hdueUwOG / pow ((584 - 574), tKEkMWfX - OnDcawUsg);
            OnDcawUsg++;
            if ((upDKXO5Sn - upDKXO5Sn / 10 * 10) != (hdueUwOG - hdueUwOG / 10 * 10))
                fgklapiAX = 0;
        };
    }
    return (fgklapiAX);
}

void  main () {
    int SqpjUN0tr, Rocb2KOErGF, OnDcawUsg, tKEkMWfX, vXdj4hms7y = 0, gURY6cE [10000];
    scanf ("%d %d", &SqpjUN0tr, &Rocb2KOErGF);
    for (OnDcawUsg = SqpjUN0tr; OnDcawUsg <= Rocb2KOErGF; OnDcawUsg++)
        if (peaImodQj0E (OnDcawUsg) && fgklapiAX (OnDcawUsg))
            gURY6cE[++vXdj4hms7y] = OnDcawUsg;
    if (vXdj4hms7y == 0)
        ;
    else {
        for (OnDcawUsg = 1; OnDcawUsg < vXdj4hms7y; OnDcawUsg++)
            printf ("%d,", gURY6cE[OnDcawUsg]);
        printf ("%d\n", gURY6cE[vXdj4hms7y]);
    };
}

