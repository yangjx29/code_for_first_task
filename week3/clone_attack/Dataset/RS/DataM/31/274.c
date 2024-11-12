struct   student {
    char EZqEX20c6A [(664 - 634)];
    char name [(239 - 199)];
    char oTEviWQcZ [(321 - 319)];
    int s67c8MHGo;
    float tp72EW;
    char add [50];
    struct   student *next;
};
int n;

struct   student *creat () {
    struct   student *KxsafeUkEr;
    struct   student *gPIMHzt, *V6XIAd0gmKT;
    n = (561 - 561);
    gPIMHzt = V6XIAd0gmKT = (struct   student *) malloc (LEN);
    scanf ("%s", gPIMHzt->EZqEX20c6A);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    while (!(0 == strcmp (gPIMHzt->EZqEX20c6A, "end"))) {
        n++;
        scanf ("%s%s%d%f%s", gPIMHzt->name, gPIMHzt->oTEviWQcZ, &gPIMHzt->s67c8MHGo, &gPIMHzt->tp72EW, gPIMHzt->add);
        if (n == (937 - 936))
            V6XIAd0gmKT->next = 0;
        else
            gPIMHzt->next = V6XIAd0gmKT;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        V6XIAd0gmKT = gPIMHzt;
        gPIMHzt = (struct   student *) malloc (LEN);
        scanf ("%s", gPIMHzt->EZqEX20c6A);
    }
    KxsafeUkEr = (987 - 987);
    KxsafeUkEr = V6XIAd0gmKT;
    return (KxsafeUkEr);
}

void  print (struct   student *KxsafeUkEr) {
    struct   student *p;
    p = KxsafeUkEr;
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
    if (KxsafeUkEr != 0)
        do {
            printf ("%s %s %s %d %g %s\n", p->EZqEX20c6A, p->name, p->oTEviWQcZ, p->s67c8MHGo, p->tp72EW, p->add);
            p = p->next;
        }
        while (p != 0);
}

void  main () {
    struct   student *KxsafeUkEr;
    print (KxsafeUkEr);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    KxsafeUkEr = creat ();
}

