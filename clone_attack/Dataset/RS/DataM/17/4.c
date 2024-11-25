int main () {
    int lcyzubnvBh7 [200];
    char PAqgnSX8b [201], done [201];
    int rc7x6k8B;
    int TNantwmX35E;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int ITDQXH, L8GHlbkP, len;
    for (; cin.getline (PAqgnSX8b, 200);) {
        len = strlen (PAqgnSX8b);
        {
            ITDQXH = 0;
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
            while (ITDQXH < 200) {
                done[ITDQXH] = ' ';
                ITDQXH = ITDQXH +1;
            };
        }
        TNantwmX35E = 0;
        rc7x6k8B = 0;
        L8GHlbkP = (93 - 93);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            ITDQXH = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (ITDQXH < len) {
                if (!('(' != PAqgnSX8b[ITDQXH])) {
                    rc7x6k8B = rc7x6k8B + 1;
                    lcyzubnvBh7[L8GHlbkP] = ITDQXH;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    done[lcyzubnvBh7[L8GHlbkP]] = '$';
                    L8GHlbkP++;
                }
                if (PAqgnSX8b[ITDQXH] == ')') {
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
                    if (rc7x6k8B <= TNantwmX35E) {
                        done[ITDQXH] = '?';
                    }
                    else {
                        done[lcyzubnvBh7[L8GHlbkP -1]] = ' ';
                        TNantwmX35E++;
                        L8GHlbkP = L8GHlbkP -1;
                    };
                }
                ITDQXH = ITDQXH +1;
            };
        }
        cout << PAqgnSX8b << endl;
        {
            ITDQXH = 0;
            while (ITDQXH < len) {
                cout << done[ITDQXH];
                ITDQXH = ITDQXH +1;
            };
        }
        cout << endl;
    }
    return 0;
}

