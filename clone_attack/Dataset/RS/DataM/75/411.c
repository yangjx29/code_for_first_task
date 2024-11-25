int main () {
    int RpouTeij;
    int WZzmyBI7CoL [(1999 - 998)];
    int tpnGK0r [1001];
    int duhUfk;
    int A6hXEZTz;
    int mruY6WhFR4GZ [1001] = {(202 - 202)};
    int z2tZrF;
    int oT582Hn96Sb;
    RpouTeij = (220 - 219);
    char c;
    c = ',';
    for (;;) {
        cin >> WZzmyBI7CoL[RpouTeij];
        c = getchar ();
        if (!('\n' != c))
            break;
        RpouTeij = RpouTeij +1;
    }
    RpouTeij = (376 - 375);
    for (;;) {
        c = getchar ();
        cin >> tpnGK0r[RpouTeij];
        if (c == '\n')
            break;
        RpouTeij++;
    }
    oT582Hn96Sb = (82 - 82);
    for (duhUfk = 1; duhUfk <= RpouTeij; duhUfk++)
        if (tpnGK0r[duhUfk] > oT582Hn96Sb)
            oT582Hn96Sb = tpnGK0r[duhUfk];
    z2tZrF = (276 - 276);
    {
        A6hXEZTz = 0;
        while (A6hXEZTz <= oT582Hn96Sb) {
            {
                duhUfk = 1;
                while (duhUfk <= RpouTeij) {
                    if ((WZzmyBI7CoL[duhUfk] <= A6hXEZTz) && (A6hXEZTz < tpnGK0r[duhUfk]))
                        mruY6WhFR4GZ[A6hXEZTz]++;
                    duhUfk++;
                };
            }
            if (z2tZrF < mruY6WhFR4GZ[A6hXEZTz])
                z2tZrF = mruY6WhFR4GZ[A6hXEZTz];
            A6hXEZTz++;
        };
    }
    cout << RpouTeij << ' ' << z2tZrF;
    return 0;
}

