int main () {
    char BCdyJ6xNt7I [33];
    long  xKYD9qlO;
    long  ETn2BLJbOr;
    xKYD9qlO = 0;
    ETn2BLJbOr = 0;
    long  L7vzhcYqG;
    L7vzhcYqG = 0;
    long  Lyeu4CnErS;
    long  sum;
    Lyeu4CnErS = 1;
    sum = 0;
    long  QLTwsVX4B0t3;
    QLTwsVX4B0t3 = 0;
    char FYM7VFOQf;
    FYM7VFOQf = 'A';
    long  oLBScpk;
    long  EduW3jGHYI;
    oLBScpk = 0;
    EduW3jGHYI = 10;
    int iHwTWsU6 [33];
    {
        L7vzhcYqG = 0;
        while (33 > L7vzhcYqG) {
            BCdyJ6xNt7I[L7vzhcYqG] = getchar ();
            if ((!(' ' != BCdyJ6xNt7I[L7vzhcYqG])) && (0 < L7vzhcYqG))
                break;
            L7vzhcYqG = L7vzhcYqG +1;
        };
    }
    L7vzhcYqG = L7vzhcYqG -1;
    cin >> xKYD9qlO;
    {
        L7vzhcYqG;
        while (L7vzhcYqG > 0) {
            if ((58 > BCdyJ6xNt7I[L7vzhcYqG]) && (47 < BCdyJ6xNt7I[L7vzhcYqG])) {
                BCdyJ6xNt7I[L7vzhcYqG] = BCdyJ6xNt7I[L7vzhcYqG] - 48;
            }
            else {
                if ((BCdyJ6xNt7I[L7vzhcYqG] > 64) && (91 > BCdyJ6xNt7I[L7vzhcYqG])) {
                    BCdyJ6xNt7I[L7vzhcYqG] = BCdyJ6xNt7I[L7vzhcYqG] - 55;
                }
                else {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    if (BCdyJ6xNt7I[L7vzhcYqG] > 96) {
                        BCdyJ6xNt7I[L7vzhcYqG] = BCdyJ6xNt7I[L7vzhcYqG] - 87;
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
                        };
                    };
                };
            }
            sum = sum + BCdyJ6xNt7I[L7vzhcYqG] * Lyeu4CnErS;
            Lyeu4CnErS = Lyeu4CnErS *xKYD9qlO;
            L7vzhcYqG--;
        };
    }
    cin >> ETn2BLJbOr;
    do {
        QLTwsVX4B0t3 = sum % ETn2BLJbOr;
        sum = sum / ETn2BLJbOr;
        iHwTWsU6[oLBScpk] = QLTwsVX4B0t3;
        oLBScpk++;
    }
    while (sum > 0);
    oLBScpk = oLBScpk - 1;
    for (oLBScpk;
    oLBScpk >= 0; oLBScpk = oLBScpk - 1) {
        if (iHwTWsU6[oLBScpk] <= 9) {
            cout << iHwTWsU6[oLBScpk];
        }
        else {
            {
                EduW3jGHYI = 10;
                while (EduW3jGHYI <= 36) {
                    if (iHwTWsU6[oLBScpk] == EduW3jGHYI) {
                        cout << FYM7VFOQf;
                        break;
                    }
                    EduW3jGHYI++;
                    FYM7VFOQf = FYM7VFOQf +1;
                };
            }
            FYM7VFOQf = 'A';
        };
    }
    return 0;
}

