double  hwpqVN (int v3B6Qm) {
    if ((887 - 797) <= v3B6Qm)
        return 4;
    if (v3B6Qm >= 85)
        return (769.7 - 766.0);
    if (82 <= v3B6Qm)
        return 3.3;
    if (78 <= v3B6Qm)
        return (311 - 308);
    if (75 <= v3B6Qm)
        return 2.7;
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
    if (v3B6Qm >= (727 - 655))
        return (807.3 - 805.0);
    if (v3B6Qm >= 68)
        return 2;
    if (v3B6Qm >= (1046 - 982))
        return (978.5 - 977.0);
    if (v3B6Qm >= 60)
        return (290 - 289);
    return (923 - 923);
}

int main () {
    double  UnG6y9OLxI = (352 - 352);
    int dXh7pLRnjG4;
    double  g9DUzOA7Ldr [10];
    double  LW65ZtVRPn = (928 - 928);
    cin >> dXh7pLRnjG4;
    {
        int JojPQl = (733 - 733);
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
        while (JojPQl < dXh7pLRnjG4) {
            cin >> g9DUzOA7Ldr[JojPQl];
            UnG6y9OLxI += g9DUzOA7Ldr[JojPQl];
            JojPQl++;
        };
    }
    for (int JojPQl = 0;
    JojPQl < dXh7pLRnjG4; JojPQl++) {
        int v3B6Qm;
        cin >> v3B6Qm;
        LW65ZtVRPn += hwpqVN (v3B6Qm) * g9DUzOA7Ldr[JojPQl];
    }
    printf ("%.2f", LW65ZtVRPn / UnG6y9OLxI);
    return 0;
}

