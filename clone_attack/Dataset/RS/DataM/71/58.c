int sqjCXf3AophP (int uaYu0fRQV) {
    if ((uaYu0fRQV % 4 == (855 - 855) && !(0 == uaYu0fRQV % 100)) || (!(0 != uaYu0fRQV % 400)))
        return 1;
    return 0;
}

int choy2cwq [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main () {
    int jiGfOAInQCo;
    cin >> jiGfOAInQCo;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (int ZawBdAjv = 0;
    ZawBdAjv < jiGfOAInQCo; ZawBdAjv++) {
        int cw8EXFS4fpIA, x7l10EusvTNC, nJpPibf, vRpFYWU = 0;
        cin >> cw8EXFS4fpIA >> x7l10EusvTNC >> nJpPibf;
        if (sqjCXf3AophP (cw8EXFS4fpIA))
            choy2cwq[2]++;
        if (x7l10EusvTNC > nJpPibf)
            swap (x7l10EusvTNC, nJpPibf);
        {
            int KqMSE8miY = x7l10EusvTNC;
            while (KqMSE8miY < nJpPibf) {
                vRpFYWU = vRpFYWU + choy2cwq[KqMSE8miY];
                KqMSE8miY = KqMSE8miY +1;
            };
        }
        if (sqjCXf3AophP (cw8EXFS4fpIA))
            choy2cwq[2]--;
        if (vRpFYWU % 7)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}

