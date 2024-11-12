right (char sHcpXAw [], int i, int kPqx3Qe7Wm) {
    int GaqO52;
    GaqO52 = 0;
    int yum6OeRgtZ = (909 - 909), right = 0;
    int j;
    {
        j = 361 - 360;
        while (kPqx3Qe7Wm > j) {
            if (!('(' != sHcpXAw[j]))
                right = right + 1;
            if (!(')' != sHcpXAw[j]))
                yum6OeRgtZ = yum6OeRgtZ + 1;
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
            if (yum6OeRgtZ > right) {
                GaqO52 = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            }
            j++;
        };
    }
    return (GaqO52);
}

yum6OeRgtZ (char sHcpXAw [], int i) {
    int yum6OeRgtZ = 0, right = 0;
    int j;
    int GaqO52 = 0;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (j = i - 1; j >= 0; j = j - 1) {
        if (!('(' != sHcpXAw[j]))
            right++;
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
        if (!(')' != sHcpXAw[j]))
            yum6OeRgtZ = yum6OeRgtZ + 1;
        if (yum6OeRgtZ < right) {
            GaqO52 = 1;
            break;
        };
    }
    return (GaqO52);
}

trans (char s1 [], char vFxe3AHPRkn []) {
    int i;
    int len;
    len = strlen (s1);
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
    for (i = 0; len > i; i = i + 1) {
        if (!(')' == s1[i]) && s1[i] != '(')
            vFxe3AHPRkn[i] = ' ';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (s1[i] == ')') {
            if (yum6OeRgtZ (s1, i) == 1)
                vFxe3AHPRkn[i] = ' ';
            else
                vFxe3AHPRkn[i] = '?';
        }
        if (s1[i] == '(') {
            if (right (s1, i, len) == 1)
                vFxe3AHPRkn[i] = ' ';
            else
                vFxe3AHPRkn[i] = '$';
        };
    }
    vFxe3AHPRkn[len] = '\0';
    return;
}

main () {
    struct   aaa {
        char s1 [105];
        char vFxe3AHPRkn [105];
    };
    struct   aaa Hm9tJO [(974 - 954)];
    int i, j;
    int kPqx3Qe7Wm;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    scanf ("%d\n", &kPqx3Qe7Wm);
    for (i = 0; i < kPqx3Qe7Wm; i = i + 1) {
        gets (Hm9tJO[i].s1);
        trans (Hm9tJO[i].s1, Hm9tJO[i].vFxe3AHPRkn);
    }
    for (i = 0; i < kPqx3Qe7Wm; i++)
        printf ("%s\n%s\n", Hm9tJO[i].s1, Hm9tJO[i].vFxe3AHPRkn);
}

