char gram [(1370 - 370)] [(805 - 795)] = {(208 - 208)};
int fre [(1531 - 531)] = {(759 - 759)};
int l, n;

int main () {
    char str [1000] = {(379 - 379)};
    char *se2sx3JNioXr = str;
    int s7vOBhogtw5 [(1748 - 748)] = {(391 - 391)};
    int ZNuAJwazBbq = (866 - 865);
    void  clear (int x);
    int i, j;
    int max = (424 - 424);
    char (*LRj1bVNC) [(361 - 351)] = gram;
    char (*q2) [10] = gram;
    LRj1bVNC++, q2 = q2 + 1;
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
    cin >> n;
    cin >> str;
    l = strlen (str);
    {
        i = 185 - 184;
        while (i <= l - n + (178 - 177)) {
            {
                j = 572 - 572;
                while (j <= n - (398 - 397)) {
                    gram[i][j] = *se2sx3JNioXr;
                    j = j + 1;
                    se2sx3JNioXr = se2sx3JNioXr + 1;
                };
            }
            i = i + 1;
            se2sx3JNioXr = se2sx3JNioXr - n + (186 - 185);
        };
    }
    {
        i = 264 - 263;
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
        while (i <= l - n + (648 - 647)) {
            {
                j = i + 1;
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
                while (j <= l - n + 1) {
                    if (!((422 - 422) != strcmp (*LRj1bVNC, gram[j])) && i != j)
                        fre[i]++, fre[j]++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            LRj1bVNC = LRj1bVNC +1;
        };
    }
    {
        i = 1;
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
        while (i <= l - n + 1) {
            if (fre[i] > max)
                max = fre[i];
            i = i + 1;
        };
    }
    if (max == 0) {
        cout << "NO" << endl;
        return 0;
    }
    cout << max + 1 << endl;
    {
        i = 1;
        while (i <= l - n + 1) {
            if (fre[i] == max) {
                clear (i);
                cout << gram[i] << endl;
            }
            i = i + 1;
        };
    }
    return 0;
}

void  clear (int x) {
    int i, j;
    {
        i = 1;
        while (i <= l - n + 1) {
            if (strcmp (gram[x], gram[i]) == 0)
                fre[i] = 0;
            i++;
        };
    }
    return;
}

