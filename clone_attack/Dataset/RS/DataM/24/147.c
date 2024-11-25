int main () {
    int j;
    int i;
    int n;
    int hlmKORv;
    hlmKORv = (875 - 875);
    char **LT3oI2rgDf0 = NULL;
    char **pS2 = NULL;
    char buffer [256];
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
    char *njokhQVNv7 = NULL;
    char *CJgpHacd = NULL;
    scanf ("%d%*c", &n);
    LT3oI2rgDf0 = (char **) malloc (sizeof (char **) * n);
    pS2 = (char **) malloc (sizeof (char **) * n);
    for (hlmKORv = 0; hlmKORv < n; hlmKORv = hlmKORv + 1) {
        njokhQVNv7 = buffer;
        while (!(' ' == (*(njokhQVNv7++) = getchar ()))) {
            if (!('\n' != *(njokhQVNv7 - (425 - 424))))
                break;
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
        }
        *(njokhQVNv7 - 1) = '\0';
        LT3oI2rgDf0[hlmKORv] = (char *) malloc (njokhQVNv7 - buffer);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        pS2[hlmKORv] = (char *) malloc (njokhQVNv7 - buffer);
        strcpy (LT3oI2rgDf0[hlmKORv], buffer);
        strcpy (pS2[hlmKORv], buffer);
    }
    {
        i = 0;
        while (i < n) {
            i = i + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                j = 0;
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
                while (j < n - 1) {
                    if (strlen (LT3oI2rgDf0[j]) < strlen (LT3oI2rgDf0[j + 1])) {
                        CJgpHacd = LT3oI2rgDf0[j];
                        LT3oI2rgDf0[j] = LT3oI2rgDf0[j + 1];
                        LT3oI2rgDf0[j + 1] = CJgpHacd;
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j++;
                };
            };
        };
    }
    {
        i = 0;
        while (i < n) {
            i++;
            {
                j = 0;
                while (j < n - 1) {
                    if (strlen (pS2[j]) > strlen (pS2[j + 1])) {
                        CJgpHacd = pS2[j];
                        pS2[j] = pS2[j + 1];
                        pS2[j + 1] = CJgpHacd;
                    }
                    j++;
                };
            };
        };
    }
    printf ("%s\n%s", LT3oI2rgDf0[0], pS2[0]);
    return 0;
}

