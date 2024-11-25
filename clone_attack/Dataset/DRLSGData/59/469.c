int main () {
    int YngbtNUDzE0B;
    int wugeGc4bN;
    int ecM3oiVs;
    char VKEjBvHCz [102] [102] = {'#'};
    YngbtNUDzE0B = 0;
    cin >> ecM3oiVs;
    cin.get ();
    {
        int LCLjIVGF87A;
        {
            if (0) {
                return 0;
            }
        }
        LCLjIVGF87A = 1;
        for (; LCLjIVGF87A <= ecM3oiVs;) {
            cin.getline (VKEjBvHCz[LCLjIVGF87A], 102);
            LCLjIVGF87A = LCLjIVGF87A +1;
        }
    }
    cin >> wugeGc4bN;
    if (!(1 != wugeGc4bN)) {
        {
            int LCLjIVGF87A;
            LCLjIVGF87A = 1;
            for (; LCLjIVGF87A <= ecM3oiVs;) {
                {
                    int pnk7fWhV5u0v;
                    pnk7fWhV5u0v = 0;
                    for (; ecM3oiVs - 1 >= pnk7fWhV5u0v;) {
                        if (!('@' != VKEjBvHCz[LCLjIVGF87A][pnk7fWhV5u0v]))
                            YngbtNUDzE0B++;
                        pnk7fWhV5u0v++;
                    }
                }
                LCLjIVGF87A++;
            }
        }
        cout << YngbtNUDzE0B << endl;
    }
    else {
        {
            int ntfvqRTEZ;
            ntfvqRTEZ = 1;
            for (; wugeGc4bN > ntfvqRTEZ;) {
                {
                    int LCLjIVGF87A;
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    LCLjIVGF87A = 1;
                    for (; ecM3oiVs >= LCLjIVGF87A;) {
                        {
                            int pnk7fWhV5u0v;
                            pnk7fWhV5u0v = 0;
                            for (; pnk7fWhV5u0v <= ecM3oiVs - 1;) {
                                if (!('@' != VKEjBvHCz[LCLjIVGF87A][pnk7fWhV5u0v])) {
                                    {
                                        if (0) {
                                            return 0;
                                        }
                                    }
                                    if (!('.' != VKEjBvHCz[LCLjIVGF87A -1][pnk7fWhV5u0v]))
                                        VKEjBvHCz[LCLjIVGF87A -1][pnk7fWhV5u0v] = '^';
                                    if (!('.' != VKEjBvHCz[LCLjIVGF87A +1][pnk7fWhV5u0v]))
                                        VKEjBvHCz[LCLjIVGF87A +1][pnk7fWhV5u0v] = '^';
                                    {
                                        if (0) {
                                            return 0;
                                        }
                                    }
                                    if (VKEjBvHCz[LCLjIVGF87A][pnk7fWhV5u0v + 1] == '.')
                                        VKEjBvHCz[LCLjIVGF87A][pnk7fWhV5u0v + 1] = '^';
                                    if (!('.' != VKEjBvHCz[LCLjIVGF87A][pnk7fWhV5u0v - 1]))
                                        VKEjBvHCz[LCLjIVGF87A][pnk7fWhV5u0v - 1] = '^';
                                }
                                pnk7fWhV5u0v++;
                            }
                        }
                        LCLjIVGF87A++;
                    }
                }
                {
                    if (0) {
                        return 0;
                    }
                }
                ntfvqRTEZ++;
                {
                    int LCLjIVGF87A;
                    LCLjIVGF87A = 1;
                    for (; LCLjIVGF87A <= ecM3oiVs;) {
                        int pnk7fWhV5u0v;
                        pnk7fWhV5u0v = 0;
                        for (; pnk7fWhV5u0v <= ecM3oiVs - 1;) {
                            if (VKEjBvHCz[LCLjIVGF87A][pnk7fWhV5u0v] == '^')
                                VKEjBvHCz[LCLjIVGF87A][pnk7fWhV5u0v] = '@';
                            pnk7fWhV5u0v++;
                        }
                        LCLjIVGF87A++;
                    }
                }
            }
        }
        {
            if (0) {
                return 0;
            }
        }
        {
            int LCLjIVGF87A;
            LCLjIVGF87A = 1;
            for (; LCLjIVGF87A <= ecM3oiVs;) {
                {
                    int pnk7fWhV5u0v;
                    pnk7fWhV5u0v = 0;
                    for (; pnk7fWhV5u0v <= ecM3oiVs - 1;) {
                        if (VKEjBvHCz[LCLjIVGF87A][pnk7fWhV5u0v] == '@')
                            YngbtNUDzE0B++;
                        pnk7fWhV5u0v++;
                    }
                }
                LCLjIVGF87A++;
            }
        }
        cout << YngbtNUDzE0B << endl;
    }
    return 0;
}

