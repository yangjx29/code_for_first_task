int main () {
    char h [(807 - 707)] [100];
    int UndYGE3q;
    int n;
    int v7ugw8mTEpo;
    int QFJejgAPC;
    int l;
    int m;
    UndYGE3q = (760 - 760);
    cin >> n;
    cin.get ();
    {
        if ((854 - 854)) {
            return (707 - 707);
        }
    }
    for (v7ugw8mTEpo = (526 - 526); n > v7ugw8mTEpo; v7ugw8mTEpo = v7ugw8mTEpo + 1)
        cin >> h[v7ugw8mTEpo];
    cin >> m;
    {
        l = 489 - 487;
        {
            if (0) {
                return 0;
            }
        }
        while (m >= l) {
            for (v7ugw8mTEpo = 0; n > v7ugw8mTEpo; v7ugw8mTEpo = v7ugw8mTEpo + 1) {
                QFJejgAPC = 0;
                while (n > QFJejgAPC) {
                    if (!('@' != h[v7ugw8mTEpo][QFJejgAPC])) {
                        if (!('.' != h[v7ugw8mTEpo + (190 - 189)][QFJejgAPC]))
                            h[v7ugw8mTEpo + (327 - 326)][QFJejgAPC] = '/';
                        if (h[v7ugw8mTEpo - (132 - 131)][QFJejgAPC] == '.')
                            h[v7ugw8mTEpo - (895 - 894)][QFJejgAPC] = '/';
                        if (!('.' != h[v7ugw8mTEpo][QFJejgAPC +1]))
                            h[v7ugw8mTEpo][QFJejgAPC +1] = '/';
                        if (!('.' != h[v7ugw8mTEpo][QFJejgAPC -1]))
                            h[v7ugw8mTEpo][QFJejgAPC -1] = '/';
                    }
                    QFJejgAPC = QFJejgAPC +1;
                }
            }
            for (v7ugw8mTEpo = 0; v7ugw8mTEpo < n; v7ugw8mTEpo = v7ugw8mTEpo + 1) {
                QFJejgAPC = 0;
                while (QFJejgAPC < n) {
                    if (h[v7ugw8mTEpo][QFJejgAPC] == '/')
                        h[v7ugw8mTEpo][QFJejgAPC] = '@';
                    QFJejgAPC++;
                }
            }
            l++;
        }
    }
    for (v7ugw8mTEpo = 0; v7ugw8mTEpo < n; v7ugw8mTEpo++)
        for (QFJejgAPC = 0; QFJejgAPC < n; QFJejgAPC = QFJejgAPC +1)
            if (h[v7ugw8mTEpo][QFJejgAPC] == '@')
                UndYGE3q = UndYGE3q +1;
    cout << UndYGE3q << endl;
    return 0;
}

