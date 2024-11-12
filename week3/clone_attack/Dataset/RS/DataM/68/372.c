int f (int IQIEqyr) {
    int i;
    {
        i = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= sqrt (IQIEqyr)) {
            if (!(0 != IQIEqyr % i))
                return 0;
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
            i = i + 1;
        };
    }
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
    return 1;
}

void  main () {
    int U1lrPuC;
    int i;
    int IuIsEoP;
    scanf ("%d", &U1lrPuC);
    for (i = 6; i <= U1lrPuC; i += 2)
        for (IuIsEoP = 3; IuIsEoP <= i / 2; IuIsEoP += 2) {
            if ((f (IuIsEoP)) &&(f (i - IuIsEoP))) {
                printf ("%d=%d+%d\n", i, IuIsEoP, i - IuIsEoP);
                break;
            };
        };
}

