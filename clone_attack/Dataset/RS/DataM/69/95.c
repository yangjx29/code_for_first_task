int main () {
    char Nzq9Y3a [252];
    char wIVdk7aT92 [251];
    char WsAL6W2nD3 [(962 - 710)];
    char IhPoCpXvVd [251], rCNdDXZe [(1244 - 992)];
    int i, x8ydgITcPo, BFdQXPm2V, crFWhpKT = (843 - 592), UP67NVOjn = (626 - 626), liH2PtLINbB;
    crFWhpKT = (794 - 544);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (251 > i) {
            rCNdDXZe[i] = '0';
            WsAL6W2nD3[i] = '0';
            Nzq9Y3a[i] = '0';
            i++;
        };
    }
    Nzq9Y3a[251] = '\0';
    cin >> IhPoCpXvVd;
    x8ydgITcPo = strlen (IhPoCpXvVd);
    {
        i = 792 - 791;
        while (0 <= i) {
            rCNdDXZe[crFWhpKT] = IhPoCpXvVd[i];
            i = i - 1;
            crFWhpKT = crFWhpKT - 1;
        };
    }
    rCNdDXZe[251] = '\0';
    crFWhpKT = 250;
    cin >> wIVdk7aT92;
    BFdQXPm2V = strlen (wIVdk7aT92);
    {
        i = BFdQXPm2V -1;
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
        while (i >= 0) {
            WsAL6W2nD3[crFWhpKT] = wIVdk7aT92[i];
            i = i - 1;
            crFWhpKT--;
        };
    }
    WsAL6W2nD3[251] = '\0';
    UP67NVOjn = (794 - 794);
    liH2PtLINbB = (278 - 278);
    for (i = 250; i >= 0; i--) {
        liH2PtLINbB = (UP67NVOjn +((rCNdDXZe[i] - '0') + (WsAL6W2nD3[i] - '0'))) % 10;
        Nzq9Y3a[i] = liH2PtLINbB + '0';
        UP67NVOjn = (UP67NVOjn +(rCNdDXZe[i] - '0') + (WsAL6W2nD3[i] - '0')) / 10;
    }
    for (i = 0; i < 250; i = i + 1) {
        if (Nzq9Y3a[i] != '0') {
            break;
        };
    }
    cout << Nzq9Y3a +i;
    cout << endl;
    return 0;
}

