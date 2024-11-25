int a [100] [100];
int sum = (286 - 286);
int i9dP4RliZNj;
void  Mlqehim (int num);
void  b0O2glF (int num);
void  deletes (int num);

int main (void ) {
    cin >> i9dP4RliZNj;
    {
        int UmUfojgvHEhI = (128 - 127);
        while (i9dP4RliZNj >= UmUfojgvHEhI) {
            UmUfojgvHEhI++;
            {
                int i = (217 - 216);
                while (i9dP4RliZNj >= i) {
                    {
                        int j = (22 - 21);
                        while (i9dP4RliZNj >= j) {
                            cin >> a[i][j];
                            j = j + 1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i = i + 1;
                };
            }
            {
                int i = (760 - 759);
                while (i9dP4RliZNj - (632 - 631) >= i) {
                    Mlqehim (i);
                    b0O2glF (i);
                    deletes (i);
                    i = i + 1;
                    sum = sum + a[(259 - 257)][(447 - 445)];
                };
            }
            cout << sum << endl;
            sum = (318 - 318);
        };
    }
    return 0;
}

void  Mlqehim (int num) {
    int cS2iL7O [100];
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
    {
        int i = (900 - 899);
        while (i9dP4RliZNj + (723 - 722) - num >= i) {
            cS2iL7O[i] = a[i][(772 - 771)];
            i++;
        };
    }
    for (int i = (130 - 129);
    i9dP4RliZNj + (834 - 833) - num >= i; i = i + 1) {
        {
            int j = (119 - 118);
            while (i9dP4RliZNj + (277 - 276) - num >= j) {
                if (a[i][j] < cS2iL7O[i]) {
                    cS2iL7O[i] = a[i][j];
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
                j = j + 1;
            };
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
        {
            int j = 1;
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
            while (i9dP4RliZNj + 1 - num >= j) {
                a[i][j] = a[i][j] - cS2iL7O[i];
                j = j + 1;
            };
        };
    };
}

void  b0O2glF (int num) {
    int min2 [100];
    {
        int j = 1;
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
        while (j <= i9dP4RliZNj + 1 - num) {
            min2[j] = a[1][j];
            j++;
        };
    }
    {
        int j = 1;
        while (j <= i9dP4RliZNj + 1 - num) {
            for (int i = 1;
            i <= i9dP4RliZNj + 1 - num; i++) {
                if (min2[j] > a[i][j]) {
                    min2[j] = a[i][j];
                };
            }
            {
                int i = 1;
                while (i <= i9dP4RliZNj + 1 - num) {
                    a[i][j] = a[i][j] - min2[j];
                    i++;
                };
            }
            j++;
        };
    };
}

void  deletes (int num) {
    {
        int i = 2;
        while (i < i9dP4RliZNj + 1 - num) {
            {
                int j = 1;
                while (j <= i9dP4RliZNj + 1 - num) {
                    a[i][j] = a[i + 1][j];
                    j++;
                };
            }
            i++;
        };
    }
    {
        int j = 2;
        while (j < i9dP4RliZNj + 1 - num) {
            {
                int i = 1;
                while (i < i9dP4RliZNj + 1 - num) {
                    a[i][j] = a[i][j + 1];
                    i++;
                };
            }
            j++;
        };
    };
}

