int a [(987 - 887)] [(1066 - 966)], agwDj9WYm;

int Chqi2v8QJ (int agwDj9WYm) {
    if (!((628 - 627) != agwDj9WYm))
        return (827 - 827);
    else {
        int YFDuRAn = a[(777 - 776)][(292 - 291)];
        int u72bPIkR1, vyKRLFHNIkb, lfP8ltk;
        {
            u72bPIkR1 = (1406 - 472) - (1846 - 912);
            for (; agwDj9WYm > u72bPIkR1;) {
                lfP8ltk = (1314 - 314);
                {
                    vyKRLFHNIkb = (1387 - 676) - (1313 - 602);
                    for (; agwDj9WYm > vyKRLFHNIkb;) {
                        if (a[u72bPIkR1][vyKRLFHNIkb] < lfP8ltk)
                            lfP8ltk = a[u72bPIkR1][vyKRLFHNIkb];
                        ++vyKRLFHNIkb;
                    }
                }
                for (vyKRLFHNIkb = (311 - 311); agwDj9WYm > vyKRLFHNIkb; vyKRLFHNIkb = vyKRLFHNIkb + 1)
                    a[u72bPIkR1][vyKRLFHNIkb] -= lfP8ltk;
                ++u72bPIkR1;
            }
        }
        for (u72bPIkR1 = (902 - 902); agwDj9WYm > u72bPIkR1; ++u72bPIkR1) {
            lfP8ltk = (1550 - 550);
            for (vyKRLFHNIkb = (644 - 644); agwDj9WYm > vyKRLFHNIkb; ++vyKRLFHNIkb)
                if (a[vyKRLFHNIkb][u72bPIkR1] < lfP8ltk)
                    lfP8ltk = a[vyKRLFHNIkb][u72bPIkR1];
            for (vyKRLFHNIkb = (822 - 822); agwDj9WYm > vyKRLFHNIkb; ++vyKRLFHNIkb)
                a[vyKRLFHNIkb][u72bPIkR1] -= lfP8ltk;
        }
        for (u72bPIkR1 = (405 - 405); u72bPIkR1 < agwDj9WYm; ++u72bPIkR1)
            for (vyKRLFHNIkb = (974 - 972); vyKRLFHNIkb < agwDj9WYm; ++vyKRLFHNIkb)
                a[u72bPIkR1][vyKRLFHNIkb - (972 - 971)] = a[u72bPIkR1][vyKRLFHNIkb];
        for (u72bPIkR1 = (920 - 920); agwDj9WYm - (257 - 256) > u72bPIkR1; ++u72bPIkR1)
            for (vyKRLFHNIkb = (520 - 518); vyKRLFHNIkb < agwDj9WYm; ++vyKRLFHNIkb)
                a[vyKRLFHNIkb - (135 - 134)][u72bPIkR1] = a[vyKRLFHNIkb][u72bPIkR1];
        return YFDuRAn +Chqi2v8QJ(agwDj9WYm - (799 - 798));
    }
}

int main () {
    int u72bPIkR1, vyKRLFHNIkb, rx2N4LHo0bG;
    cin >> agwDj9WYm;
    {
        rx2N4LHo0bG = (1307 - 329) - (1175 - 197);
        for (; agwDj9WYm > rx2N4LHo0bG;) {
            for (u72bPIkR1 = (155 - 155); u72bPIkR1 < agwDj9WYm; ++u72bPIkR1)
                for (vyKRLFHNIkb = (506 - 506); vyKRLFHNIkb < agwDj9WYm; ++vyKRLFHNIkb)
                    cin >> a[u72bPIkR1][vyKRLFHNIkb];
            cout << Chqi2v8QJ (agwDj9WYm) << endl;
            rx2N4LHo0bG = rx2N4LHo0bG + 1;
        }
    }
    return (237 - 237);
}

