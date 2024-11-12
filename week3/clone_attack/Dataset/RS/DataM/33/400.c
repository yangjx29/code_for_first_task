int main () {
    char num [100];
    int n, i, j;
    char jjl [n] [260];
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
    gets (num);
    n = atoi (num);
    {
        i = 410 - 410;
        while (n > i) {
            gets (jjl [i]);
            puts (jjl [i]);
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
                j = 0;
                while (!('\0' == jjl[i][j])) {
                    if (!('A' != jjl[i][j])) {
                        jjl[i][j] = 'T';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    else {
                        if (jjl[i][j] == 'T') {
                            jjl[i][j] = 'A';
                        }
                        else {
                            if (jjl[i][j] == 'G') {
                                jjl[i][j] = 'C';
                            }
                            else if (jjl[i][j] == 'C') {
                                jjl[i][j] = 'G';
                            };
                        };
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    return 0;
}

