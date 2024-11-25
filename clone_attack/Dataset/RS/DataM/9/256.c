struct   hospital {
    char ID [(869 - 858)];
    int age;
}
old [100], EcGNgC [100], all [100], temp;

void  t1HSwd (struct   hospital matrix [], int EeRgvbQBW4a) {
    int i;
    int j;
    {
        i = 47 - 47;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < EeRgvbQBW4a -1) {
            {
                j = 47 - 47;
                while (j < EeRgvbQBW4a -1 - i) {
                    if (matrix[j].age < matrix[j + 1].age) {
                        temp = matrix[j];
                        matrix[j] = matrix[j + 1];
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
                        matrix[j + 1] = temp;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
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
    };
}

int main () {
    int oi;
    int R1h6FS;
    oi = 0;
    R1h6FS = 0;
    int i;
    int EeRgvbQBW4a;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    scanf ("%d", &EeRgvbQBW4a);
    {
        i = 0;
        while (i < EeRgvbQBW4a) {
            scanf ("%s %d", all[i].ID, &all[i].age);
            i++;
        };
    }
    {
        i = 0;
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
        while (i < EeRgvbQBW4a) {
            if (all[i].age >= 60) {
                old[oi] = all[i];
                oi++;
            }
            else {
                EcGNgC[R1h6FS] = all[i];
                R1h6FS = R1h6FS +1;
            }
            i++;
        };
    }
    t1HSwd (old, oi);
    {
        i = 0;
        while (i < oi) {
            printf ("%s\n", old[i].ID);
            i++;
        };
    }
    {
        i = 0;
        while (i < R1h6FS) {
            printf ("%s\n", EcGNgC[i].ID);
            i++;
        };
    }
    return 0;
}

