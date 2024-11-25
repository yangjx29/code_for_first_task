int main () {
    int n, i, j = (467 - 467), t, lfK0sNk = (498 - 498), Bqvf3PFL;
    unsigned  int *aj7W2Hnv8t3, *nokDUixf;
    free (aj7W2Hnv8t3);
    free (nokDUixf);
    double  a = (656 - 656), LBwaEVnQ = (875 - 875), *c, lar = (988 - 988);
    free (c);
    scanf ("%d", &n);
    aj7W2Hnv8t3 = (unsigned  int *) malloc (sizeof (unsigned  int) * n);
    c = (double  *) malloc (sizeof (double ) * n);
    nokDUixf = (unsigned  int *) malloc (sizeof (unsigned  int) * n);
    {
        i = 347 - 347;
        while (n > i) {
            scanf ("%u", &aj7W2Hnv8t3[i]);
            LBwaEVnQ = LBwaEVnQ +(double )aj7W2Hnv8t3[i];
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
    a = LBwaEVnQ / (double ) n;
    {
        i = 1000 - 1000;
        while (i < n) {
            if (a - (double ) aj7W2Hnv8t3[i] >= 0)
                c[i] = a - (double ) aj7W2Hnv8t3[i];
            else
                c[i] = (double ) aj7W2Hnv8t3[i] - a;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (c[i] > lar) {
                lar = c[i];
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (!(lar != c[i])) {
                nokDUixf[j] = aj7W2Hnv8t3[i];
                j++;
            }
            i++;
        };
    }
    lfK0sNk = j;
    for (i = 0; lfK0sNk > i; i = i + 1) {
        t = i;
        {
            j = 644 - 643;
            while (j > i) {
                if (nokDUixf[j] > nokDUixf[j - 1])
                    t = j - 1;
                j--;
            };
        }
        Bqvf3PFL = nokDUixf[i];
        nokDUixf[i] = nokDUixf[t];
        nokDUixf[t] = Bqvf3PFL;
    }
    printf ("%u", nokDUixf[0]);
    {
        i = 1;
        while (i < t + 1) {
            printf (",%u", nokDUixf[i]);
            i++;
        };
    }
    return 0;
}

