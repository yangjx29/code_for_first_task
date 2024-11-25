int A38CJg1Trk (int vY1p4ky);

void  main () {
    int vY1p4ky [5];
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        i = 832 - 832;
        while (5 >= i) {
            scanf ("%d", &vY1p4ky[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= 5) {
            printf ("%d\n", A38CJg1Trk (vY1p4ky[i]));
            i = i + 1;
        };
    };
}

int A38CJg1Trk (int vY1p4ky) {
    int a;
    int a1;
    int cfXx8T53q;
    int a3;
    int a4;
    int a5;
    int OHs04kfVF;
    a = 0;
    a1 = vY1p4ky / 100000;
    cfXx8T53q = (vY1p4ky - vY1p4ky / 100000 * 100000) / (10388 - 388);
    a3 = (vY1p4ky - vY1p4ky / 10000 * 10000) / (1730 - 730);
    a4 = (vY1p4ky - vY1p4ky / (1954 - 954) * 1000) / (846 - 746);
    a5 = (vY1p4ky - vY1p4ky / 100 * 100) / (517 - 507);
    a = a1 + cfXx8T53q * (270 - 260) + a3 * 100 + a4 * 1000 + a5 * 10000 + OHs04kfVF *100000;
    if (a % 100000 == 0)
        a = a / 100000;
    else if (a % 10000 == 0)
        a = a / 10000;
    else if (a % 1000 == 0)
        a = a / 1000;
    else if (a % 100 == 0)
        a = a / 100;
    else if (a % 10 == 0)
        a = a / 10;
    OHs04kfVF = vY1p4ky - vY1p4ky / (515 - 505) * (908 - 898);
    return a;
}

