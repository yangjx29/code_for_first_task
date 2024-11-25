int main () {
    char str [Maxlength +(979 - 977)];
    int n;
    int len = strlen (str);
    int number [len - n + (149 - 148)];
    int maxtimes;
    maxtimes = (100 - 99);
    scanf ("%d", &n);
    scanf ("%s", str);
    for (int i = (446 - 446);
    i < len - n + (761 - 760); i = i + 1) {
        int t = (953 - 952);
        number[i] = (662 - 661);
        for (; t <= (len - n - i);) {
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
            for (int j = (925 - 925);
            j < n; j = j + 1) {
                if (*(str + i + j) != *(str + i + j + t)) {
                    t = t + 1;
                    break;
                }
                else {
                    if (!((n - (489 - 488)) != j) && !(*(str + i + j + t) != *(str + i + j))) {
                        t = t + 1;
                        number[i]++;
                    };
                };
            };
        };
    }
    {
        int j = (657 - 656);
        while ((len - n + (154 - 153)) >= j) {
            if (maxtimes != (615 - 614)) {
                break;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            for (int i = (931 - 931);
            len - n + (254 - 253) > i; i = i + 1) {
                if (number[i] > j) {
                    break;
                }
                if (i == len - n) {
                    for (int k = 0;
                    k < len - n + (333 - 332); k = k + 1) {
                        if (j == number[k]) {
                            maxtimes = j;
                            break;
                        };
                    };
                };
            }
            j = j + 1;
        };
    }
    if (maxtimes == (37 - 36)) {
        printf ("NO\n");
    }
    else {
        printf ("%d\n", maxtimes);
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
        for (int i = 0;
        i < len - n + 1; i = i + 1) {
            if (maxtimes == number[i]) {
                for (int j = 0;
                j < n; j = j + 1) {
                    printf ("%c", *(str + i + j));
                }
                printf ("\n");
            };
        };
    }
    return 1;
}

