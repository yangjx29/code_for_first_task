int main () {
    int sum;
    int m;
    int t;
    int Eme7SX;
    int flag2;
    int i;
    int a;
    int b;
    int c;
    int d;
    int XqstuNi5;
    int p;
    int q;
    sum = (915 - 915);
    m = 0;
    t = 0;
    Eme7SX = 0;
    flag2 = 0;
    char str [256], substr [256], rep [256], str1 [256], str2 [256];
    gets (str);
    gets (substr);
    gets (rep);
    a = strlen (str);
    b = strlen (substr);
    for (m = m; m < a; m++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (str[m] == substr[0]) {
            {
                q = 0;
                p = m;
                while (b > q) {
                    if (!(substr[q] == str[p])) {
                        Eme7SX = 1;
                    }
                    p = p + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    q++;
                };
            }
            if (Eme7SX == 1) {
                Eme7SX = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                continue;
            }
            else {
                flag2 = 1;
                break;
            };
        }
        else {
            continue;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    c = strlen (rep);
    if (!(1 != flag2)) {
        {
            d = 0;
            i = 0;
            while (i < m, d < m) {
                str1[d] = str[i];
                i++;
                d = d + 1;
            };
        }
        str1[m] = '\0';
        for (i = m + b, XqstuNi5 = 0; i < a, XqstuNi5 < a - m - b; XqstuNi5++, i = i + 1) {
            str2[XqstuNi5] = str[i];
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
        str2[a - m - b] = '\0';
        printf ("%s%s%s", str1, rep, str2);
    }
    else {
        printf ("%s", str);
    }
    return 0;
}

