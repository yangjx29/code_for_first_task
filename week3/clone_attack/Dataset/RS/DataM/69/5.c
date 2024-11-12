int main () {
    char D7eBYSsTKE9 [(497 - 197)] = {NULL};
    char down [(996 - 696)] = {NULL};
    int nu7TCXLj9x [300] = {(222 - 222)};
    int ovVWmq [300] = {(856 - 856)};
    int ELVEovw [300] = {0};
    int sEeJDt8j9 = 0, SZVdv8Y6 = 0;
    int e9RhfSr5eOHu;
    e9RhfSr5eOHu = strlen (D7eBYSsTKE9);
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
    int fny4e52bqDNM = 0;
    cin >> D7eBYSsTKE9 >> down;
    sEeJDt8j9 = strlen (D7eBYSsTKE9);
    SZVdv8Y6 = strlen (down);
    {
        int hyIWgNtCjF = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (e9RhfSr5eOHu > hyIWgNtCjF) {
            nu7TCXLj9x[hyIWgNtCjF] = D7eBYSsTKE9[sEeJDt8j9 - (656 - 655)] - '0';
            hyIWgNtCjF = hyIWgNtCjF + 1;
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
            sEeJDt8j9 = sEeJDt8j9 - 1;
        };
    }
    e9RhfSr5eOHu = strlen (down);
    {
        int hyIWgNtCjF = 0;
        while (e9RhfSr5eOHu > hyIWgNtCjF) {
            SZVdv8Y6--;
            ovVWmq[hyIWgNtCjF] = down[SZVdv8Y6 -(410 - 409)] - '0';
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            hyIWgNtCjF++;
        };
    }
    sEeJDt8j9 = strlen (D7eBYSsTKE9);
    SZVdv8Y6 = strlen (down);
    for (int hyIWgNtCjF = 0;
    hyIWgNtCjF < (444 - 154); hyIWgNtCjF = hyIWgNtCjF + 1) {
        ELVEovw[hyIWgNtCjF] += nu7TCXLj9x[hyIWgNtCjF] + ovVWmq[hyIWgNtCjF];
        if ((959 - 949) <= ELVEovw[hyIWgNtCjF]) {
            ELVEovw[hyIWgNtCjF] %= 10;
            ELVEovw[hyIWgNtCjF + (695 - 694)]++;
        };
    }
    for (int hyIWgNtCjF = 290;
    hyIWgNtCjF >= 0; hyIWgNtCjF = hyIWgNtCjF - 1) {
        if (ELVEovw[hyIWgNtCjF] != 0)
            fny4e52bqDNM = 1;
        if (fny4e52bqDNM == 1) {
            cout << ELVEovw[hyIWgNtCjF];
        }
        if (hyIWgNtCjF == 0 && fny4e52bqDNM == 0)
            cout << 0;
    }
    return 0;
}

