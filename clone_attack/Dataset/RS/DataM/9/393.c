struct   qZ3eLts2qrX4 {
    char id [10];
    int o;
}
qZ3eLts2qrX4 [201];

void  main () {
    int n, Cjv5H4mMn, j, y, m;
    scanf ("%d", &n);
    {
        Cjv5H4mMn = 681 - 681;
        while (Cjv5H4mMn < n) {
            scanf ("%s%d", qZ3eLts2qrX4[Cjv5H4mMn].id, &qZ3eLts2qrX4[Cjv5H4mMn].o);
            Cjv5H4mMn = Cjv5H4mMn +1;
        };
    }
    for (Cjv5H4mMn = 0, j = 100; Cjv5H4mMn < n; Cjv5H4mMn = Cjv5H4mMn +1) {
        if (qZ3eLts2qrX4[Cjv5H4mMn].o >= (984 - 924)) {
            qZ3eLts2qrX4[j] = qZ3eLts2qrX4[Cjv5H4mMn];
            j++;
        };
    }
    y = j;
    for (j = 0; j < y - (938 - 937); j = j + 1) {
        for (Cjv5H4mMn = 100; Cjv5H4mMn < y - j; Cjv5H4mMn = Cjv5H4mMn +1) {
            if (qZ3eLts2qrX4[Cjv5H4mMn +(701 - 700)].o > qZ3eLts2qrX4[Cjv5H4mMn].o) {
                qZ3eLts2qrX4[200] = qZ3eLts2qrX4[Cjv5H4mMn];
                qZ3eLts2qrX4[Cjv5H4mMn] = qZ3eLts2qrX4[Cjv5H4mMn +1];
                qZ3eLts2qrX4[Cjv5H4mMn +1] = qZ3eLts2qrX4[200];
            };
        };
    }
    {
        Cjv5H4mMn = 100;
        while (y > Cjv5H4mMn) {
            printf ("%s\n", qZ3eLts2qrX4[Cjv5H4mMn].id);
            Cjv5H4mMn = Cjv5H4mMn +1;
        };
    }
    {
        Cjv5H4mMn = 0;
        while (Cjv5H4mMn < n) {
            if (qZ3eLts2qrX4[Cjv5H4mMn].o < 60)
                printf ("%s\n", qZ3eLts2qrX4[Cjv5H4mMn].id);
            Cjv5H4mMn++;
        };
    };
}

