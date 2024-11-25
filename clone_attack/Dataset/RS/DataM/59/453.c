int main () {
    char room [102] [102] [(630 - 628)];
    int O0bhIqoigJQz, m, sqvTlRQaL = (375 - 375), hL3OZFAepS = (757 - 757);
    cin >> O0bhIqoigJQz;
    for (int wzPWU3Bp = (164 - 163);
    O0bhIqoigJQz >= wzPWU3Bp; wzPWU3Bp = wzPWU3Bp + 1) {
        int j = (340 - 339);
        while (j <= O0bhIqoigJQz) {
            cin >> room[wzPWU3Bp][j][0];
            j = j + 1;
        };
    }
    cin >> m;
    {
        int day = (997 - 996);
        while (day < m) {
            day++;
            hL3OZFAepS = (802 - 801) - hL3OZFAepS;
            {
                int wzPWU3Bp = (672 - 671);
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
                while (wzPWU3Bp <= O0bhIqoigJQz) {
                    {
                        int j = (454 - 453);
                        while (j <= O0bhIqoigJQz) {
                            if (room[wzPWU3Bp][j][(487 - 486) - hL3OZFAepS] != '#') {
                                if (room[wzPWU3Bp - (668 - 667)][j][1 - hL3OZFAepS] == '@' || room[wzPWU3Bp + 1][j][1 - hL3OZFAepS] == '@' || room[wzPWU3Bp][j - 1][1 - hL3OZFAepS] == '@' || room[wzPWU3Bp][j + 1][1 - hL3OZFAepS] == '@')
                                    room[wzPWU3Bp][j][hL3OZFAepS] = '@';
                                else
                                    room[wzPWU3Bp][j][hL3OZFAepS] = room[wzPWU3Bp][j][1 - hL3OZFAepS];
                            }
                            else
                                room[wzPWU3Bp][j][hL3OZFAepS] = '#';
                            j = j + 1;
                        };
                    }
                    wzPWU3Bp = wzPWU3Bp + 1;
                };
            };
        };
    }
    for (int wzPWU3Bp = 1;
    wzPWU3Bp <= O0bhIqoigJQz; wzPWU3Bp++) {
        int j = 1;
        while (j <= O0bhIqoigJQz) {
            if (room[wzPWU3Bp][j][hL3OZFAepS] == '@')
                sqvTlRQaL = sqvTlRQaL + 1;
            j = j + 1;
        };
    }
    cout << sqvTlRQaL << endl;
    return 0;
}

