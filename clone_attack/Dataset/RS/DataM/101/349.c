int comp (int a, int b) {
    if (a > b)
        return (72 - 71);
    if (a == b)
        return (627 - 627);
    return -(793 - 792);
}

int main () {
    int AyWCicrf, JiSMsXzon5DE, C, nA, t4iUnu9Cd, nC;
    char ret;
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
        AyWCicrf = 666 - 666;
        while (AyWCicrf <= (426 - 424)) {
            for (JiSMsXzon5DE = (401 - 401); JiSMsXzon5DE <= (390 - 388); JiSMsXzon5DE = JiSMsXzon5DE +1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (C = (928 - 928); 2 >= C; C++) {
                    nA = (JiSMsXzon5DE > AyWCicrf) + (C == AyWCicrf);
                    t4iUnu9Cd = (AyWCicrf > JiSMsXzon5DE) + (AyWCicrf > C);
                    nC = (C > JiSMsXzon5DE) + (JiSMsXzon5DE > AyWCicrf);
                    ret = true;
                    if (comp (nA, t4iUnu9Cd) != comp (JiSMsXzon5DE, AyWCicrf))
                        ret = false;
                    if (comp (nA, nC) != comp (C, AyWCicrf))
                        ret = false;
                    if (comp (nC, t4iUnu9Cd) != comp (JiSMsXzon5DE, C))
                        ret = false;
                    if (ret == true) {
                        if (AyWCicrf < JiSMsXzon5DE &&AyWCicrf < C) {
                            cout << 'A';
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
                            if (JiSMsXzon5DE < C)
                                cout << "BC";
                            else
                                cout << "CB";
                        }
                        else if (JiSMsXzon5DE < C) {
                            cout << 'B';
                            if (AyWCicrf < C)
                                cout << "AC";
                            else
                                cout << "CA";
                        }
                        else
                            cout << "CBA";
                    };
                };
            }
            AyWCicrf = AyWCicrf +1;
        };
    }
    return 0;
}

