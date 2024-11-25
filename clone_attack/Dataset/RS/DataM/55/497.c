long  long  D5C6A3ehlj4 (long  long  R3YojQSdPi) {
    if (R3YojQSdPi >= 10) {
        char b;
        b = (char) ('A' - 10 + R3YojQSdPi);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return ((char) (b));
    }
    else {
        char b;
        b = (char) ('1' - 1 + R3YojQSdPi);
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
        return ((char) (b));
    };
}

long  long  FJQX0AG (char i) {
    long  long  j = i;
    if (96 < j) {
        j = j - 'a' + 10;
    }
    else if ((33 < j) && (58 > j)) {
        j = j - '1' + 1;
    }
    else {
        j = j - 'A' + 10;
    }
    return ((long  long ) (j));
}

long  long  ten (long  long  uDloX3VrfsHA) {
    long  long  kcPEZf0DW2, uxPvfM5;
    kcPEZf0DW2 = uDloX3VrfsHA;
    for (long  long  n = 0;
    69 > n; n++) {
        kcPEZf0DW2 = kcPEZf0DW2 / 10;
        if (0 < kcPEZf0DW2) {
            uxPvfM5 = n + 1;
        };
    }
    return (uxPvfM5);
}

long  long  loe (long  long  t, long  long  jONwQ4) {
    long  long  u, w = 0;
    u = t;
    for (long  long  wZjvRkT = 0;
    69 > wZjvRkT; wZjvRkT++) {
        u = u / jONwQ4;
        if (0 < u) {
            w = wZjvRkT + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    return (w);
}

long  long  FDBhvmq3st (char o []) {
    long  long  f = 0;
    for (long  long  g = 0;
    g < 69; g = g + 1) {
        if ((!(0 == o[g])) && (o[g] != 32))
            f = f + 1;
    }
    return ((f));
}

int main () {
    long  long  d, qH26x94Ml1Bv;
    char h [70];
    long  long  p;
    long  long  NrB5NoHna3J = 0;
    long  long  MCjzhK = NrB5NoHna3J, ac = 0;
    long  long  ae [100];
    long  long  y;
    char F1byc2r5uCx7 [70];
    memset (h, 0, sizeof (h));
    memset (F1byc2r5uCx7, 0, sizeof (F1byc2r5uCx7));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    cin >> d >> h >> qH26x94Ml1Bv;
    p = FDBhvmq3st (h);
    ae[0] = 1;
    for (long  long  zKvTsgxB = 1;
    zKvTsgxB < 20; zKvTsgxB++) {
        ae[zKvTsgxB] = ae[zKvTsgxB - 1] * d;
    }
    for (long  long  q = p - 1;
    q >= 0; q--) {
        NrB5NoHna3J = NrB5NoHna3J +(FJQX0AG (h [q]) *ae[p - 1 - q]);
    }
    y = (loe (NrB5NoHna3J, qH26x94Ml1Bv));
    for (long  long  z = 0;
    z < y + 1; z = z + 1) {
        ac = MCjzhK;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        MCjzhK = MCjzhK / qH26x94Ml1Bv;
        if (MCjzhK > 0) {
            F1byc2r5uCx7[z] = D5C6A3ehlj4 (ac % qH26x94Ml1Bv);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        else {
            F1byc2r5uCx7[z] = D5C6A3ehlj4 (ac);
        };
    }
    for (long  long  bPAojNnCdgf = 0;
    bPAojNnCdgf < y + 1; bPAojNnCdgf++) {
        cout << F1byc2r5uCx7[y - bPAojNnCdgf];
    }
    return 0;
}

