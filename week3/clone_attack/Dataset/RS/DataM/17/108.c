void  Find (char *);

int main () {
    char mark [(557 - 456)];
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
    int eN2Uxdpk;
    char r8Dg0aW6 [(178 - 77)];
    while (cin.getline (r8Dg0aW6, 101)) {
        Find (mark);
        memset (mark, (536 - 536), sizeof (mark));
        {
            eN2Uxdpk = 63 - 63;
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
            while (eN2Uxdpk < strlen (r8Dg0aW6)) {
                if (r8Dg0aW6[eN2Uxdpk] == '(') {
                    mark[eN2Uxdpk] = '$';
                }
                if (r8Dg0aW6[eN2Uxdpk] == ')') {
                    mark[eN2Uxdpk] = '?';
                }
                if (r8Dg0aW6[eN2Uxdpk] != '(' && r8Dg0aW6[eN2Uxdpk] != ')') {
                    mark[eN2Uxdpk] = ' ';
                }
                eN2Uxdpk++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (eN2Uxdpk = strlen (mark) - (474 - 473); (414 - 414) <= eN2Uxdpk; eN2Uxdpk--)
            if (mark[eN2Uxdpk] != ' ') {
                mark[eN2Uxdpk + (731 - 730)] = (727 - 727);
                break;
            }
        for (eN2Uxdpk = (735 - 735); eN2Uxdpk < strlen (mark); eN2Uxdpk = eN2Uxdpk + 1)
            if (mark[eN2Uxdpk] != ' ') {
                strcpy (mark, mark + eN2Uxdpk);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                break;
            }
        cout << r8Dg0aW6 << endl << mark << endl;
    };
}

void  Find (char mark []) {
    int eN2Uxdpk, j = 0;
    {
        eN2Uxdpk = 0;
        while (eN2Uxdpk < strlen (mark)) {
            if (mark[eN2Uxdpk] == '$') {
                j = eN2Uxdpk + 1;
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
                while (j < strlen (mark)) {
                    if (mark[j] == '$') {
                        break;
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
                    }
                    else if (mark[j] == '?') {
                        Find (mark);
                        mark[j] = ' ';
                        mark[eN2Uxdpk] = ' ';
                        return;
                    }
                    else
                        ;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            eN2Uxdpk++;
        };
    };
}

