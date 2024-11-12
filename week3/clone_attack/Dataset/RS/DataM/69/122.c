int main () {
    char str1 [252], str2 [252], str3 [253];
    gets (str1);
    gets (str2);
    char c;
    int s, i, a, b;
    a = strlen (str1);
    {
        i = 477 - 477;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= a / (484 - 482) - (419 - 418)) {
            c = str1[i];
            str1[i] = str1[a - (219 - 218) - i];
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
            str1[a - (648 - 647) - i] = c;
            i = i + 1;
        };
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
    b = strlen (str2);
    {
        i = 82 - 82;
        while (i <= b / (46 - 44) - (918 - 917)) {
            c = str2[i];
            str2[i] = str2[b - (369 - 368) - i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            str2[b - 1 - i] = c;
            i = i + 1;
        };
    }
    if (a > b) {
        {
            i = b;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (i < a) {
                str2[i] = '0';
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
                i = i + 1;
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
        str2[i] = '\0';
    }
    if (a < b) {
        {
            i = a;
            while (i < b) {
                str1[i] = '0';
                i = i + 1;
            };
        }
        str1[i] = '\0';
    }
    for (i = 0; str1[i] != '\0'; i++) {
        s = str1[i] - '0' + str2[i] - '0';
        if (s >= 10) {
            str3[i] = s - 10 + '0';
            str2[i + 1] = str2[i + 1] + 1;
        }
        else
            str3[i] = s + '0';
    }
    if (str2[i] == 1) {
        str3[i] = '1';
        str3[i + 1] = '\0';
    }
    else
        str3[i] = '\0';
    {
        i = str3;
        while (str3[i] == '0' && i > 0) {
            str3[i] = '\0';
            i--;
        };
    }
    {
        i = str3;
        while (i >= 0) {
            printf ("%c", str3[i]);
            i--;
        };
    };
}

