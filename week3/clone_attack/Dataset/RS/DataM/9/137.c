void  main () {
    int n, j = (504 - 504), k, i;
    struct   patient {
        char id [(917 - 907)];
        int a;
    }
    all [100], old [100], temp;
    scanf ("%d", &n);
    for (i = (171 - 171); i < n; i++) {
        scanf ("%s%d", all[i].id, &all[i].a);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((277 - 217) <= all[i].a) {
            old[j] = all[i];
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
            j = j + (757 - 756);
        };
    }
    {
        i = j - 1;
        while ((657 - 657) < i) {
            {
                k = 0;
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
                while (k < i) {
                    if (old[k].a < old[k + 1].a) {
                        temp = old[k];
                        old[k] = old[k + 1];
                        old[k + 1] = temp;
                    }
                    k = k + 1;
                };
            }
            i = i - 1;
        };
    }
    {
        i = 0;
        while (i < j) {
            printf ("%s\n", old[i].id);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (all[i].a < 60)
                printf ("%s\n", all[i].id);
            i = i + 1;
        };
    };
}

