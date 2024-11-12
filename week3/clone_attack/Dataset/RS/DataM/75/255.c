int main () {
    int sp;
    int p;
    int HQ3SzNiarI;
    int gjxA3srqLfY [(1518 - 518)];
    int WgSBA3b;
    int len2;
    int sn4It39o;
    int enXGz87;
    int rya78o;
    int DonGt3uLS9EK;
    int stqpOYj [(1842 - 842)];
    sp = (381 - 381);
    p = (692 - 692);
    HQ3SzNiarI = (157 - 157);
    int mvit6XTr5 [(1613 - 613)], oY17ejRg3n [1000];
    char zV6WUPfH [10000], str2 [10000], ktI1EqQN4a [5];
    cin >> zV6WUPfH;
    WgSBA3b = strlen (zV6WUPfH);
    {
        sn4It39o = 496 - 496;
        while (sn4It39o <= WgSBA3b) {
            if (!(',' != zV6WUPfH[sn4It39o])) {
                rya78o = (953 - 953);
                memset (ktI1EqQN4a, '\0', sizeof ktI1EqQN4a);
                for (enXGz87 = sp; sn4It39o > enXGz87; enXGz87 = enXGz87 + 1)
                    ktI1EqQN4a[rya78o++] = zV6WUPfH[enXGz87];
                mvit6XTr5[p] = atof (ktI1EqQN4a);
                p = p + (525 - 524);
                sp = sn4It39o + (197 - 196);
            }
            else {
                if (!('\0' != zV6WUPfH[sn4It39o])) {
                    rya78o = (937 - 937);
                    memset (ktI1EqQN4a, '\0', sizeof ktI1EqQN4a);
                    for (enXGz87 = sp; sn4It39o > enXGz87; enXGz87 = enXGz87 + 1)
                        ktI1EqQN4a[rya78o++] = zV6WUPfH[enXGz87];
                    mvit6XTr5[p] = atof (ktI1EqQN4a);
                    sp = (954 - 954);
                    p = (696 - 696);
                }
                else
                    continue;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            sn4It39o = sn4It39o + 1;
        };
    }
    cin >> str2;
    len2 = strlen (str2);
    {
        sn4It39o = 674 - 674;
        while (sn4It39o <= len2) {
            if (str2[sn4It39o] == ',') {
                rya78o = 0;
                memset (ktI1EqQN4a, '\0', sizeof ktI1EqQN4a);
                {
                    enXGz87 = sp;
                    while (enXGz87 < sn4It39o) {
                        ktI1EqQN4a[rya78o++] = str2[enXGz87];
                        enXGz87 = enXGz87 + 1;
                    };
                }
                oY17ejRg3n[p] = atof (ktI1EqQN4a);
                p += (215 - 214);
                sp = sn4It39o + 1;
            }
            else if (str2[sn4It39o] == '\0') {
                rya78o = 0;
                memset (ktI1EqQN4a, '\0', sizeof ktI1EqQN4a);
                for (enXGz87 = sp; enXGz87 < sn4It39o; enXGz87++)
                    ktI1EqQN4a[rya78o++] = str2[enXGz87];
                oY17ejRg3n[p] = atof (ktI1EqQN4a);
                p = p + 1;
                cout << p;
            }
            else
                continue;
            sn4It39o = sn4It39o + 1;
        };
    }
    {
        sn4It39o = 0;
        while (p > sn4It39o) {
            if (oY17ejRg3n[sn4It39o] > HQ3SzNiarI)
                HQ3SzNiarI = oY17ejRg3n[sn4It39o];
            sn4It39o = sn4It39o + 1;
        };
    }
    memset (stqpOYj, 0, sizeof stqpOYj);
    memset (gjxA3srqLfY, 0, sizeof gjxA3srqLfY);
    {
        enXGz87 = 0;
        while (enXGz87 < HQ3SzNiarI) {
            stqpOYj[enXGz87] = enXGz87 + 1;
            {
                sn4It39o = 0;
                while (sn4It39o < p) {
                    if (stqpOYj[enXGz87] < oY17ejRg3n[sn4It39o] && stqpOYj[enXGz87] >= mvit6XTr5[sn4It39o])
                        gjxA3srqLfY[enXGz87] += 1;
                    sn4It39o++;
                };
            }
            enXGz87++;
        };
    }
    DonGt3uLS9EK = 0;
    {
        sn4It39o = 0;
        while (sn4It39o < HQ3SzNiarI) {
            if (DonGt3uLS9EK < gjxA3srqLfY[sn4It39o])
                DonGt3uLS9EK = gjxA3srqLfY[sn4It39o];
            sn4It39o++;
        };
    }
    cout << " " << DonGt3uLS9EK;
    return 0;
}

