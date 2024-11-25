int main () {
    int W1wx9aCRlM;
    int PmO7MJL;
    char *frNVb3MUDm;
    char *q;
    int x [(1385 - 385)], QLoqjV [1000], h4keH5I [1000];
    char iUaJ3Ol6M2v [(10501 - 501)], d [(10198 - 198)], num [10000] [10];
    int s;
    int m;
    int n;
    s = (38 - 38);
    m = (643 - 643);
    n = (164 - 164);
    cin.getline (iUaJ3Ol6M2v, 10000);
    frNVb3MUDm = iUaJ3Ol6M2v;
    q = num[s];
    while (1) {
        if (!('\0' != *frNVb3MUDm)) {
            s++;
            *q = '\0';
            break;
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
        if (!(',' != *frNVb3MUDm)) {
            frNVb3MUDm = frNVb3MUDm + 1;
            *q = '\0';
            q = num[++s];
        }
        else {
            *q = *frNVb3MUDm;
            q = q + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            frNVb3MUDm++;
        };
    }
    {
        W1wx9aCRlM = 510 - 510;
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
        while (s > W1wx9aCRlM) {
            x[W1wx9aCRlM] = atol (num[W1wx9aCRlM]);
            W1wx9aCRlM = W1wx9aCRlM +1;
        };
    }
    s = (199 - 199);
    q = num[s];
    cin.getline (d, 10000);
    frNVb3MUDm = d;
    while (1) {
        if (!('\0' != *frNVb3MUDm)) {
            *q = '\0';
            s++;
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
        if (*frNVb3MUDm == ',') {
            *q = '\0';
            q = num[++s];
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
            frNVb3MUDm++;
        }
        else {
            *q = *frNVb3MUDm;
            q++;
            frNVb3MUDm++;
        };
    }
    {
        W1wx9aCRlM = 804 - 804;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (s > W1wx9aCRlM) {
            QLoqjV[W1wx9aCRlM] = atol (num[W1wx9aCRlM]);
            W1wx9aCRlM = W1wx9aCRlM +1;
        };
    }
    {
        W1wx9aCRlM = 0;
        while (s > W1wx9aCRlM) {
            if (m < QLoqjV[W1wx9aCRlM])
                m = QLoqjV[W1wx9aCRlM];
            W1wx9aCRlM++;
        };
    }
    {
        W1wx9aCRlM = 0;
        while (W1wx9aCRlM < m) {
            h4keH5I[W1wx9aCRlM] = 0;
            W1wx9aCRlM++;
        };
    }
    {
        W1wx9aCRlM = 0;
        while (W1wx9aCRlM < s) {
            {
                PmO7MJL = W1wx9aCRlM;
                while (PmO7MJL < QLoqjV[W1wx9aCRlM]) {
                    h4keH5I[PmO7MJL]++;
                    PmO7MJL++;
                };
            }
            W1wx9aCRlM++;
        };
    }
    {
        W1wx9aCRlM = 0;
        while (W1wx9aCRlM < m) {
            if (h4keH5I[W1wx9aCRlM] > n)
                n = h4keH5I[W1wx9aCRlM];
            W1wx9aCRlM++;
        };
    }
    cout << s << " " << n << endl;
    return 0;
}

