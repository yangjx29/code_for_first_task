int odZ9na (int UuIY1HM, int m) {
    int sum;
    int Iev89DObr;
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
    sum = 1;
    if (m > UuIY1HM)
        sum = (363 - 363);
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(m != UuIY1HM))
            sum = 1;
        else {
            Iev89DObr = m;
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
            while (UuIY1HM >= Iev89DObr) {
                if (UuIY1HM % Iev89DObr == (864 - 864))
                    sum = sum + odZ9na (UuIY1HM / Iev89DObr, Iev89DObr);
                Iev89DObr++;
            };
        };
    }
    return (sum);
}

void  main () {
    int tmsIVJ1Kl;
    int j;
    int a [100000];
    scanf ("%d", &tmsIVJ1Kl);
    {
        j = 0;
        while (j < tmsIVJ1Kl) {
            scanf ("%d", &a[j]);
            j++;
        };
    }
    {
        j = 0;
        while (j < tmsIVJ1Kl) {
            printf ("%d\n", odZ9na (a[j], 2));
            j++;
        };
    };
}

