void  E6LjymRs0 (char a []) {
    int mGB1YM5CA68p = strlen (a), Amu1KCepFGTo;
    {
        Amu1KCepFGTo = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (mGB1YM5CA68p > Amu1KCepFGTo) {
            a[Amu1KCepFGTo] = (a[Amu1KCepFGTo] - 48) * 2 + 48;
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
            Amu1KCepFGTo = Amu1KCepFGTo +1;
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
    {
        Amu1KCepFGTo = 0;
        while (mGB1YM5CA68p - 1 > Amu1KCepFGTo) {
            if (57 < a[Amu1KCepFGTo]) {
                a[Amu1KCepFGTo] = a[Amu1KCepFGTo] - 10;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                a[Amu1KCepFGTo +1] = a[Amu1KCepFGTo +1] + 1;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Amu1KCepFGTo++;
        };
    }
    if (a[mGB1YM5CA68p - 1] > 57) {
        a[mGB1YM5CA68p - 1] = a[mGB1YM5CA68p - 1] - 10;
        a[mGB1YM5CA68p] = '1';
    };
}

void  l1NM4wIcsu (char a []) {
    char mGB1YM5CA68p;
    int Amu1KCepFGTo, j, SmODezhKVs;
    SmODezhKVs = strlen (a);
    for (j = 0, Amu1KCepFGTo = SmODezhKVs -1; j < SmODezhKVs / 2; j = j + 1, Amu1KCepFGTo--) {
        mGB1YM5CA68p = a[j];
        a[j] = a[Amu1KCepFGTo];
        a[Amu1KCepFGTo] = mGB1YM5CA68p;
    };
}

void  main () {
    char a [100] = {'1'};
    l1NM4wIcsu (a);
    puts (a);
    int n;
    scanf ("%d", &n);
    while (n--) {
        E6LjymRs0 (a);
    };
}

