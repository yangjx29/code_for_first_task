int main () {
    char jL93dQ2fFsYl [110];
    char b [110];
    int GgV3NAFO;
    int SeTyJX3;
    int n;
    int m;
    int iukrnPhFfpYi;
    GgV3NAFO = (556 - 556);
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
    SeTyJX3 = (754 - 754);
    cin >> n;
    cin >> jL93dQ2fFsYl;
    for (iukrnPhFfpYi = (154 - 154); strlen (jL93dQ2fFsYl) > iukrnPhFfpYi; iukrnPhFfpYi++) {
        if ('0' <= jL93dQ2fFsYl[iukrnPhFfpYi] && '9' >= jL93dQ2fFsYl[iukrnPhFfpYi])
            GgV3NAFO = jL93dQ2fFsYl[iukrnPhFfpYi] - '0';
        if (jL93dQ2fFsYl[iukrnPhFfpYi] >= 'A' && 'Z' >= jL93dQ2fFsYl[iukrnPhFfpYi])
            GgV3NAFO = (880 - 870) + jL93dQ2fFsYl[iukrnPhFfpYi] - 'A';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (jL93dQ2fFsYl[iukrnPhFfpYi] >= 'a' && jL93dQ2fFsYl[iukrnPhFfpYi] <= 'z')
            GgV3NAFO = (372 - 362) + jL93dQ2fFsYl[iukrnPhFfpYi] - 'a';
        SeTyJX3 = SeTyJX3 *n + GgV3NAFO;
    }
    iukrnPhFfpYi = 0;
    cin >> m;
    do {
        b[iukrnPhFfpYi] = SeTyJX3 % m;
        if (b[iukrnPhFfpYi] >= 10)
            b[iukrnPhFfpYi] = b[iukrnPhFfpYi] - 10 + 'A';
        else
            b[iukrnPhFfpYi] = b[iukrnPhFfpYi] + '0';
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
        iukrnPhFfpYi++;
        SeTyJX3 = SeTyJX3 / m;
    }
    while (SeTyJX3 > 0);
    for (int cQy0jU7xJ = iukrnPhFfpYi - 1;
    cQy0jU7xJ >= 0; cQy0jU7xJ = cQy0jU7xJ - 1)
        cout << b[cQy0jU7xJ];
    return 0;
}

