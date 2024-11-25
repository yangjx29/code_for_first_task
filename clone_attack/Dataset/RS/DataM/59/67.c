int gsp7FRMQf;
char M8CcREYLIF [(579 - 479)] [(250 - 150)], b [(138 - 38)] [(256 - 156)];

void  infect (void ) {
    {
        int G063vXnV;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        G063vXnV = (384 - 384);
        while (gsp7FRMQf > G063vXnV) {
            {
                int j = (242 - 242);
                while (gsp7FRMQf > j) {
                    if (M8CcREYLIF[G063vXnV][j] == '@') {
                        if (!('.' != M8CcREYLIF[G063vXnV +(69 - 68)][j]) && gsp7FRMQf > G063vXnV +(560 - 559))
                            b[G063vXnV +(933 - 932)][j] = '@';
                        if (!('.' != M8CcREYLIF[G063vXnV -(913 - 912)][j]) && (42 - 42) <= G063vXnV -(206 - 205))
                            b[G063vXnV -(168 - 167)][j] = '@';
                        if (M8CcREYLIF[G063vXnV][j + (169 - 168)] == '.' && j + (870 - 869) < gsp7FRMQf)
                            b[G063vXnV][j + (709 - 708)] = '@';
                        if (!('.' != M8CcREYLIF[G063vXnV][j - (847 - 846)]) && (894 - 894) <= j - (42 - 41))
                            b[G063vXnV][j - (737 - 736)] = '@';
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
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
            G063vXnV = G063vXnV +1;
        };
    };
}

int main () {
    int zXfaB7;
    int zBdRIvF8 = (303 - 303);
    cin >> gsp7FRMQf;
    {
        int G063vXnV = (11 - 11);
        while (G063vXnV < gsp7FRMQf) {
            {
                int j = (250 - 250);
                while (j < gsp7FRMQf) {
                    cin >> M8CcREYLIF[G063vXnV][j];
                    b[G063vXnV][j] = M8CcREYLIF[G063vXnV][j];
                    j = j + 1;
                };
            }
            G063vXnV = G063vXnV +1;
        };
    }
    cin >> zXfaB7;
    {
        int G063vXnV = 1;
        while (G063vXnV < zXfaB7) {
            infect ();
            {
                int G063vXnV = (332 - 332);
                while (G063vXnV < gsp7FRMQf) {
                    {
                        int j = (261 - 261);
                        while (j < gsp7FRMQf) {
                            M8CcREYLIF[G063vXnV][j] = b[G063vXnV][j];
                            j++;
                        };
                    }
                    G063vXnV = G063vXnV +1;
                };
            }
            G063vXnV = G063vXnV +1;
        };
    }
    {
        int G063vXnV = (114 - 114);
        while (G063vXnV < gsp7FRMQf) {
            {
                int j = (891 - 891);
                while (j < gsp7FRMQf) {
                    if (M8CcREYLIF[G063vXnV][j] == '@')
                        zBdRIvF8 = zBdRIvF8 + 1;
                    j++;
                };
            }
            G063vXnV++;
        };
    }
    cout << zBdRIvF8 << endl;
    return 0;
}

