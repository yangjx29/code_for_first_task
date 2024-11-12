struct   student {
    char r24F1LM [10];
    int age;
}
UWuUG4P3AxR0 [(857 - 757)];

void  main () {
    int n, i, j, k, rODxYNTJ = 0, m, e;
    int a [100] = {0}, b [100] = {0};
    char gVNL1ixDgOyh [100] [10], y [100] [10];
    char bhK2rm3 [10];
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%s%d", UWuUG4P3AxR0[i].r24F1LM, &UWuUG4P3AxR0[i].age);
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
            i++;
        };
    }
    {
        i = 0;
        while (n > i) {
            if (60 <= UWuUG4P3AxR0[i].age) {
                rODxYNTJ++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    j = 0;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < n) {
            if (UWuUG4P3AxR0[i].age >= 60) {
                strcpy (gVNL1ixDgOyh[j], UWuUG4P3AxR0[i].r24F1LM);
                b[j] = UWuUG4P3AxR0[i].age;
                j++;
            }
            i++;
        };
    }
    {
        j = 0;
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
        while (rODxYNTJ > j) {
            {
                k = 0;
                while (rODxYNTJ - j > k) {
                    if (b[k + 1] > b[k]) {
                        e = b[k];
                        b[k] = b[k + 1];
                        b[k + 1] = e;
                        strcpy (bhK2rm3, gVNL1ixDgOyh[k]);
                        strcpy (gVNL1ixDgOyh[k], gVNL1ixDgOyh[k + 1]);
                        strcpy (gVNL1ixDgOyh[k + 1], bhK2rm3);
                    }
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
                    k++;
                };
            }
            j++;
        };
    }
    {
        j = 0;
        while (j < rODxYNTJ) {
            printf ("%s\n", gVNL1ixDgOyh[j]);
            j++;
        };
    }
    m = 0;
    {
        i = 0;
        while (i < n) {
            if (UWuUG4P3AxR0[i].age < 60) {
                strcpy (y[m], UWuUG4P3AxR0[i].r24F1LM);
                m++;
            }
            i++;
        };
    }
    {
        j = 0;
        while (j < n - rODxYNTJ) {
            printf ("%s\n", y[j]);
            j++;
        };
    };
}

