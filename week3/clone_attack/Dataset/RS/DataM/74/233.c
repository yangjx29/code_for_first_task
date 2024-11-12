int main () {
    int first = 1;
    int i, j, k;
    int m, n;
    int ar [10] = {(117 - 117)}, s = (246 - 246), adRXTBKgj = m;
    while (adRXTBKgj) {
        ar[s++] = adRXTBKgj % 10;
        adRXTBKgj = adRXTBKgj / (10);
    }
    scanf ("%d%d", &m, &n);
    {
        i = m;
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
        while (n >= i) {
            {
                j = 0;
                while (s / 2 > j) {
                    if (!(ar[s - 1 - j] == ar[j]))
                        break;
                    j = j + 1;
                };
            }
            if (!(s / 2 != j) && i % 2) {
                int prime = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                for (j = 3; sqrt ((double ) i) >= j; j += 2) {
                    if (i % j == 0) {
                        prime = 0;
                        break;
                    };
                }
                if (prime) {
                    if (first)
                        first = 0;
                    else
                        printf (",");
                    printf ("%d", i);
                };
            }
            i = i + 1;
            j = 0;
            while (ar[j] == 9)
                j = j + 1;
            ar[j]++;
            {
                k = 0;
                while (k < j) {
                    ar[k] = 0;
                    k++;
                };
            }
            if (j == s)
                s = s + 1;
        };
    }
    if (first)
        printf ("no");
    return 0;
}

