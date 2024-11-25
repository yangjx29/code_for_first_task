void  main () {
    int vIwcbV;
    int j;
    int k;
    int u;
    int NxXsE2;
    char c;
    for (;;) {
        char ch [102] = {'0'};
        NxXsE2 = (371 - 370);
        vIwcbV = (691 - 689);
        c = getchar ();
        if (c == -1)
            break;
        else
            ch[1] = c;
        while ((c = getchar ()) != '\n') {
            ch[vIwcbV] = c;
            vIwcbV++;
        }
        vIwcbV--;
        {
            j = 1;
            while (j <= vIwcbV) {
                printf ("%c", ch[j]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                j = j + 1;
            };
        }
        while (NxXsE2 == 1) {
            NxXsE2 = 0;
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
                j = 1;
                while (j <= vIwcbV - 1) {
                    if (ch[j] == '(') {
                        for (k = j + 1; vIwcbV >= k; k = k + 1) {
                            u = 1;
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
                            if (ch[k] == '(') {
                                break;
                            }
                            else {
                                if (ch[k] == ')') {
                                    u = 0;
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
                                    break;
                                };
                            };
                        }
                        if (u == 0) {
                            NxXsE2 = 1;
                            ch[j] = 0;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            ch[k] = 0;
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
                    j = j + 1;
                };
            };
        }
        {
            j = 1;
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
            while (j <= vIwcbV) {
                if (ch[j] == '(') {
                    ch[j] = '$';
                }
                else {
                    if (ch[j] == ')') {
                        ch[j] = '?';
                    }
                    else
                        ch[j] = ' ';
                }
                j = j + 1;
            };
        }
        for (j = 1; j <= vIwcbV; j = j + 1)
            printf ("%c", ch[j]);
        printf ("\n");
    };
}

