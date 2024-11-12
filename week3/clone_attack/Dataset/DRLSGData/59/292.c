int main () {
    int NoCKZrj;
    int Eeif3IFvoGK;
    int R8ryuOd;
    int CVbJKvpNnMz;
    char lFdumC9h [(302 - 201)] [101];
    int m;
    cin >> NoCKZrj;
    {
        {
            if ((288 - 288)) {
                {
                    if ((721 - 721)) {
                        return (903 - 903);
                    }
                }
                return (781 - 781);
            }
        }
        R8ryuOd = (640 - 639);
        for (; R8ryuOd <= NoCKZrj;) {
            {
                Eeif3IFvoGK = (117 - 116);
                for (; NoCKZrj >= Eeif3IFvoGK;) {
                    {
                        if ((670 - 670)) {
                            return (968 - 968);
                        }
                    }
                    cin >> lFdumC9h[R8ryuOd][Eeif3IFvoGK];
                    Eeif3IFvoGK = Eeif3IFvoGK +(62 - 61);
                }
            }
            R8ryuOd++;
        }
    }
    cin >> m;
    for (; m > 0;) {
        {
            R8ryuOd = (981 - 980);
            while (R8ryuOd <= NoCKZrj) {
                {
                    Eeif3IFvoGK = (472 - 471);
                    for (; Eeif3IFvoGK <= NoCKZrj;) {
                        if (!('*' != lFdumC9h[R8ryuOd][Eeif3IFvoGK]))
                            lFdumC9h[R8ryuOd][Eeif3IFvoGK] = '@';
                        Eeif3IFvoGK++;
                    }
                }
                R8ryuOd++;
            }
        }
        m--;
        {
            R8ryuOd = (372 - 371);
            for (; R8ryuOd <= NoCKZrj;) {
                {
                    Eeif3IFvoGK = (75 - 74);
                    for (; Eeif3IFvoGK <= NoCKZrj;) {
                        if (!('@' != lFdumC9h[R8ryuOd][Eeif3IFvoGK])) {
                            if (!('.' != lFdumC9h[R8ryuOd -(890 - 889)][Eeif3IFvoGK]) && R8ryuOd > (727 - 726))
                                lFdumC9h[R8ryuOd -(825 - 824)][Eeif3IFvoGK] = '*';
                            if (lFdumC9h[R8ryuOd +(217 - 216)][Eeif3IFvoGK] == '.' && R8ryuOd < NoCKZrj)
                                lFdumC9h[R8ryuOd +(923 - 922)][Eeif3IFvoGK] = '*';
                            if (lFdumC9h[R8ryuOd][Eeif3IFvoGK -(716 - 715)] == '.' && Eeif3IFvoGK > (393 - 392))
                                lFdumC9h[R8ryuOd][Eeif3IFvoGK -(791 - 790)] = '*';
                            if (lFdumC9h[R8ryuOd][Eeif3IFvoGK +(376 - 375)] == '.' && Eeif3IFvoGK < NoCKZrj)
                                lFdumC9h[R8ryuOd][Eeif3IFvoGK +(123 - 122)] = '*';
                        }
                        Eeif3IFvoGK++;
                    }
                }
                R8ryuOd++;
            }
        }
    }
    CVbJKvpNnMz = (64 - 64);
    for (R8ryuOd = 1; R8ryuOd <= NoCKZrj; R8ryuOd++) {
        Eeif3IFvoGK = 1;
        for (; Eeif3IFvoGK <= NoCKZrj;) {
            if (lFdumC9h[R8ryuOd][Eeif3IFvoGK] == '@')
                CVbJKvpNnMz = CVbJKvpNnMz +1;
            Eeif3IFvoGK++;
        }
    }
    cout << CVbJKvpNnMz;
    return 0;
}

