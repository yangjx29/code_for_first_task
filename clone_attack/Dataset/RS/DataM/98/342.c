int main () {
    int bO6rPEARS;
    int ZzqKOJ;
    char aEzL2CAd [bO6rPEARS] [81], Eoaty9Pe;
    int qWapLon;
    qWapLon = strlen (aEzL2CAd[0]);
    cin >> bO6rPEARS;
    {
        ZzqKOJ = 965 - 965;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (bO6rPEARS > ZzqKOJ) {
            cin >> aEzL2CAd[ZzqKOJ];
            ZzqKOJ++;
        };
    }
    cout << aEzL2CAd[0];
    for (ZzqKOJ = 1; bO6rPEARS > ZzqKOJ; ZzqKOJ++) {
        if (80 >= qWapLon + strlen (aEzL2CAd[ZzqKOJ]) + 1) {
            if (qWapLon != -1)
                cout << ' ';
            cout << aEzL2CAd[ZzqKOJ];
            qWapLon = qWapLon + strlen (aEzL2CAd[ZzqKOJ]) + 1;
        }
        else {
            qWapLon = -1;
            cout << endl;
            ZzqKOJ--;
        };
    }
    return 0;
}

