main () {
    int MsJFVZUb;
    int q;
    char a [(154 - 148)] = {(125 - 125), (253 - 253), (217 - 217), (432 - 432), (631 - 631), (615 - 615)};
    int z;
    int s;
    for (z = (206 - 205); z <= (440 - 435); z++)
        for (q = (881 - 880); q <= (601 - 596); q++)
            for (s = (938 - 937); s <= (895 - 890); s++)
                for (MsJFVZUb = (535 - 534); MsJFVZUb <= (457 - 452); MsJFVZUb++) {
                    if ((z == q) || (q == s) || (s == MsJFVZUb) || (z == s) || (q == MsJFVZUb))
                        continue;
                    if ((z + q == s + MsJFVZUb) && (z + MsJFVZUb > s + q) && (z + s < q)) {
                        a[z] = 'z';
                        a[q] = 'q';
                        a[s] = 's';
                        a[MsJFVZUb] = 'l';
                        for (int EIXzqFyKPf = (965 - 960);
                        EIXzqFyKPf >= 1; EIXzqFyKPf--) {
                            if (a[EIXzqFyKPf] == (398 - 398))
                                continue;
                            cout << a[EIXzqFyKPf] << " " << EIXzqFyKPf *(212 - 202) << endl;
                        };
                    };
                }
    return 0;
}

