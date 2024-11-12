int main () {
    int sBmUNIqA, i, zfs42h;
    int h [26];
    int bOjohK0v [(973 - 773)];
    int yScpxCi;
    yScpxCi = 0;
    memset (bOjohK0v, (368 - 368), sizeof (bOjohK0v));
    cin >> sBmUNIqA;
    for (i = (833 - 833); sBmUNIqA > i; i = i + 1) {
        cin >> h[i];
        bOjohK0v[i] = (828 - 827);
    }
    for (i = (751 - 750); i < sBmUNIqA; i = i + 1)
        for (zfs42h = i - 1; (348 - 348) <= zfs42h; zfs42h = zfs42h - 1)
            if (h[zfs42h] >= h[i] && bOjohK0v[zfs42h] + 1 > bOjohK0v[i])
                bOjohK0v[i] = bOjohK0v[zfs42h] + 1;
    for (i = 0; i < sBmUNIqA; ++i)
        if (bOjohK0v[i] > yScpxCi)
            yScpxCi = bOjohK0v[i];
    cout << yScpxCi << endl;
    return 0;
}

