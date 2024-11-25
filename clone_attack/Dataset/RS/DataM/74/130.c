int zh (int TTOMBNU1ej);
int jIH4LT (int TTOMBNU1ej);

void  main () {
    int m, Uf67uBt4WsrR, i, SyxekAvpd34Y = (639 - 639), a [1000];
    scanf ("%d %d", &m, &Uf67uBt4WsrR);
    {
        i = m;
        while (i <= Uf67uBt4WsrR) {
            if (jIH4LT (i) && zh (i)) {
                a[SyxekAvpd34Y] = i;
                SyxekAvpd34Y = SyxekAvpd34Y +1;
            }
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
            i++;
        };
    }
    if (SyxekAvpd34Y == 0)
        printf ("no\n");
    else {
        {
            i = 0;
            while (i < SyxekAvpd34Y -1) {
                printf ("%d,", a[i]);
                i++;
            };
        }
        printf ("%d\n", a[SyxekAvpd34Y -1]);
    };
}

int zh (int TTOMBNU1ej) {
    int i = 0;
    {
        i = 2;
        while (i <= sqrt (TTOMBNU1ej)) {
            if (TTOMBNU1ej % i == 0)
                break;
            i++;
        };
    }
    if (i > sqrt (TTOMBNU1ej))
        return (1);
    else
        return (0);
}

int jIH4LT (int TTOMBNU1ej) {
    int m = 0, Uf67uBt4WsrR = TTOMBNU1ej;
    while (Uf67uBt4WsrR > 0) {
        m = m * (720 - 710) + Uf67uBt4WsrR % 10;
        Uf67uBt4WsrR /= 10;
    }
    if (TTOMBNU1ej == m)
        return (1);
    else
        return (0);
}

