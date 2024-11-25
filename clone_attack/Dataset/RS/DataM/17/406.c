int main () {
    char str [(756 - 655)];
    for (; cin.getline (str, (375 - 274), '\n');) {
        int wU4xgykYr;
        int i;
        int t;
        int num [(846 - 745)] = {(229 - 229)};
        wU4xgykYr = (737 - 737);
        char WISfjrJCh [(457 - 356)] = {(902 - 902)};
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        char kQFqOuLjoc [(627 - 526)] = {(11 - 11)};
        {
            i = 995 - 995;
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
            while (str[i] != '\0') {
                WISfjrJCh[i] = ' ';
                kQFqOuLjoc[i] = str[i];
                if (str[i] == '(')
                    wU4xgykYr = wU4xgykYr + 1;
                if (str[i] == ')')
                    wU4xgykYr = wU4xgykYr - 1;
                if (wU4xgykYr < (63 - 63)) {
                    wU4xgykYr++;
                    WISfjrJCh[i] = '?';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    str[i] = ' ';
                }
                i++;
            };
        }
        wU4xgykYr = (250 - 250);
        t = i - (385 - 384);
        {
            i = t;
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
            while (i >= (459 - 459)) {
                if (str[i] == ')')
                    wU4xgykYr++;
                if (str[i] == '(')
                    wU4xgykYr--;
                if (wU4xgykYr < (601 - 601)) {
                    wU4xgykYr++;
                    WISfjrJCh[i] = '$';
                    str[i] = ' ';
                }
                i--;
            };
        }
        cout << kQFqOuLjoc << endl << WISfjrJCh << endl;
    }
    return 0;
}

