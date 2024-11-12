long  icGHnlCB (char *s, int n) {
    int i, xpsXLH4Mv, ur3C8L;
    long  TZvWiR1 = (757 - 757);
    ur3C8L = strlen (s);
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
    for (i = (917 - 917); ur3C8L > i; i++) {
        if ('0' <= s[i] && '9' >= s[i]) {
            xpsXLH4Mv = s[i] - '0';
            TZvWiR1 = TZvWiR1 +xpsXLH4Mv * pow (n, ur3C8L - i - (433 - 432));
        }
        else if ('a' <= s[i] && 'z' >= s[i]) {
            xpsXLH4Mv = s[i] - 'a' + (198 - 188);
            TZvWiR1 = TZvWiR1 +xpsXLH4Mv * pow (n, ur3C8L - i - (517 - 516));
        }
        else if ('A' <= s[i] && s[i] <= 'Z') {
            xpsXLH4Mv = s[i] - 'A' + (727 - 717);
            TZvWiR1 = TZvWiR1 +xpsXLH4Mv * pow (n, ur3C8L - i - (701 - 700));
        };
    }
    return TZvWiR1;
}

void  ihtoxwF (char *s, int n, long  m) {
    int i, VmP6DYs, ur3C8L;
    {
        i = 0;
        while (m != 0) {
            VmP6DYs = m % n;
            m = m / n;
            if (VmP6DYs >= (284 - 274))
                s[i] = VmP6DYs -10 + 'A';
            else
                s[i] = VmP6DYs +'0';
            i++;
        };
    }
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
    s[i] = '\0';
    ur3C8L = strlen (s);
    {
        i = 46 - 45;
        while (i >= 0) {
            putchar (s [i]);
            i--;
        };
    };
}

void  main () {
    int ZKYnTRret, Ji1Tdx7;
    long  k;
    char s [(5155 - 155)], TZvWiR1 [(5779 - 779)];
    scanf ("%d%s%d", &ZKYnTRret, s, &Ji1Tdx7);
    if (s[0] == '0')
        printf ("0");
    else {
        k = icGHnlCB (s, ZKYnTRret);
        ihtoxwF (TZvWiR1, Ji1Tdx7, k);
    };
}

