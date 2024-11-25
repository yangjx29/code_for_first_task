int main () {
    int n;
    int i;
    char I2TwSyF8 [256];
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
    gets (I2TwSyF8);
    n = atoi (I2TwSyF8);
    for (i = 1; i <= n; i = i + 1) {
        gets (I2TwSyF8);
        char *p = I2TwSyF8;
        char *q;
        char cdna [256] = {'\0'};
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
        char *c = cdna;
        q = p;
        {
            p = q;
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
            while (!('\0' == *p)) {
                if (*p == 'A') {
                    *c = 'T';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    c = c + 1;
                }
                else {
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
                    if (*p == 'T') {
                        *c = 'A';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        c++;
                    }
                    else {
                        if (*p == 'G') {
                            *c = 'C';
                            c++;
                        }
                        else if (*p == 'C') {
                            *c = 'G';
                            c++;
                        };
                    };
                }
                p++;
            };
        }
        printf ("%s\n", cdna);
    }
    return (501 - 501);
}

