int main () {
    int n;
    int flag;
    n = 1;
    flag = 1;
    char a [100];
    char gaB1fE5tTx [100];
    char words [50] [256] = {0};
    char y9ZibMBE [(844 - 588)];
    gets (y9ZibMBE);
    gets (a);
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
    gets (gaB1fE5tTx);
    int o2QrCNpoysVl;
    int i;
    int ewiYyd;
    int akni3a;
    o2QrCNpoysVl = -1;
    for (i = 0; !('\0' == y9ZibMBE[i]); i = i + 1) {
        if (!(' ' != y9ZibMBE[i])) {
            n = n + 1;
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
            };
        };
    }
    for (i = 0; n > i; i = i + 1) {
        for (o2QrCNpoysVl = o2QrCNpoysVl + 1, ewiYyd = 0; y9ZibMBE[o2QrCNpoysVl] != '\0' && !(' ' == y9ZibMBE[o2QrCNpoysVl]); ewiYyd = ewiYyd + 1, o2QrCNpoysVl = o2QrCNpoysVl + 1) {
            words[i][ewiYyd] = y9ZibMBE[o2QrCNpoysVl];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (i = 0; n > i; i = i + 1) {
        akni3a = strcmp (words[i], a);
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
        if (akni3a == 0) {
            flag = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            strcpy (words[i], gaB1fE5tTx);
        };
    }
    if (flag == 0) {
        printf ("%s", words[0]);
        for (i = 1; i < n; i = i + 1) {
            printf (" %s", words[i]);
        };
    }
    if (flag == 1) {
        printf ("%s", y9ZibMBE);
    }
    return 0;
}

