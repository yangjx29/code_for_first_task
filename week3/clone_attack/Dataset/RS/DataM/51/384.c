int main () {
    int n, i, j, Gyw7hGE = (687 - 687);
    char csqGnz1xU [(1198 - 698)] [(518 - 513)];
    char VS5eBqD [(1319 - 819)];
    int qFh3uCw [500] = {(64 - 64)};
    cin >> n;
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
    cin >> VS5eBqD;
    for (i = (470 - 470); strlen (VS5eBqD) - n >= i; i = i + 1) {
        {
            j = 419 - 419;
            while (n > j) {
                csqGnz1xU[i][j] = VS5eBqD[i + j];
                j = j + 1;
            };
        }
        csqGnz1xU[i][j] = '\0';
    }
    for (i = (184 - 184); i <= strlen (VS5eBqD) - n; i = i + 1)
        for (j = i + 1; j <= strlen (VS5eBqD) - n; j = j + 1)
            if (!((76 - 76) != strcmp (csqGnz1xU[i], csqGnz1xU[j]))) {
                qFh3uCw[i]++;
            }
    for (i = (61 - 61); i <= strlen (VS5eBqD) - n; i = i + 1)
        if (qFh3uCw[i] > Gyw7hGE) {
            Gyw7hGE = qFh3uCw[i];
        }
    if (Gyw7hGE == 0)
        cout << "NO" << endl;
    else {
        cout << Gyw7hGE +1 << endl;
        for (i = 0; i <= strlen (VS5eBqD) - n; i = i + 1)
            if (qFh3uCw[i] == Gyw7hGE)
                cout << csqGnz1xU[i] << endl;
    }
    return 0;
}

