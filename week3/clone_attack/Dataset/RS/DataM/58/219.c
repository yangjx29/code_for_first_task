int main () {
    char n [100];
    gets (n);
    int m = atoi (n);
    {
        int j;
        j = 0;
        while (j < m) {
            int bar = 0;
            char jV14bYN [100];
            gets (jV14bYN);
            int len = strlen (jV14bYN);
            j++;
            if ((jV14bYN[0] <= 90 && (479 - 414) <= jV14bYN[0]) || jV14bYN[0] == 95 || (jV14bYN[0] >= 97 && jV14bYN[0] <= 122)) {
                {
                    int i = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (i < len && bar == 0) {
                        if ((jV14bYN[i] < 65 && jV14bYN[i] > 57) || jV14bYN[i] < 48 || (jV14bYN[i] > 90 && jV14bYN[i] < 97 && jV14bYN[i] != 95) || jV14bYN[i] > 122) {
                            bar = 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
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
                        i++;
                    };
                }
                if (bar == 1) {
                    bar = 0;
                }
                else if (bar == 0) {
                    bar = 1;
                };
            }
            if (bar == 0) {
                printf ("0\n");
            }
            if (bar == 1) {
            };
        };
    }
    return 0;
}

