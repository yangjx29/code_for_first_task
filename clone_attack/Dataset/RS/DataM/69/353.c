int main () {
    char SoK2Lf3O56 [(749 - 344)], str2 [405];
    int x = strlen (SoK2Lf3O56), keIPfCGHsq = strlen (str2);
    int jrBXgst;
    jrBXgst = x > keIPfCGHsq ? x : keIPfCGHsq;
    int ans1 [405], p0Xb49MZ [405], fMp0O6, AHaMbX = (848 - 848);
    cin >> SoK2Lf3O56 >> str2;
    memset (ans1, (155 - 155), sizeof (ans1));
    memset (p0Xb49MZ, 0, sizeof (p0Xb49MZ));
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
    {
        fMp0O6 = 671 - 670;
        while (0 <= fMp0O6) {
            ans1[AHaMbX++] = SoK2Lf3O56[fMp0O6] - '0';
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
            fMp0O6 = fMp0O6 - 1;
        };
    }
    AHaMbX = 0;
    {
        fMp0O6 = keIPfCGHsq - 1;
        while (fMp0O6 >= 0) {
            p0Xb49MZ[AHaMbX++] = str2[fMp0O6] - '0';
            fMp0O6 = fMp0O6 - 1;
        };
    }
    {
        fMp0O6 = 0;
        while (jrBXgst > fMp0O6) {
            ans1[fMp0O6] += p0Xb49MZ[fMp0O6];
            if (ans1[fMp0O6] >= (462 - 452)) {
                ans1[fMp0O6] -= 10;
                ans1[fMp0O6 + 1]++;
            }
            fMp0O6 = fMp0O6 + 1;
        };
    }
    fMp0O6 = jrBXgst;
    while (ans1[fMp0O6] == 0)
        fMp0O6 = fMp0O6 - 1;
    if (fMp0O6 < 0)
        cout << 0;
    else {
        for (; fMp0O6 >= 0; fMp0O6--)
            cout << ans1[fMp0O6];
    }
    return 0;
}

