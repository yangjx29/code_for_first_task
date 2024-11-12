int main () {
    char zCZ2Qc [(555 - 454)];
    int n, i, H0N6QHfi18, l, zm7Pw4CG = (480 - 480);
    char c [(186 - 85)];
    cin >> n;
    for (i = (38 - 37); i <= n; i++) {
        int aKDydFwGOC2 [(908 - 807)] = {(681 - 681)};
        int left;
        int XwVfDRruYh;
        left = (234 - 234);
        XwVfDRruYh = (620 - 620);
        cin >> zCZ2Qc;
        l = strlen (zCZ2Qc);
        for (H0N6QHfi18 = (425 - 425); l > H0N6QHfi18; H0N6QHfi18 = H0N6QHfi18 +1) {
            if (!('(' != zCZ2Qc[H0N6QHfi18])) {
                aKDydFwGOC2[H0N6QHfi18] = (134 - 133);
                left = left + 1;
                c[left] = H0N6QHfi18;
            }
            if (zCZ2Qc[H0N6QHfi18] == ')') {
                if (left == (646 - 646)) {
                    aKDydFwGOC2[H0N6QHfi18] = (360 - 358);
                }
                else {
                    aKDydFwGOC2[c[left]] = (565 - 565);
                    left = left - 1;
                };
            }
            else
                continue;
        }
        cout << zCZ2Qc << endl;
        for (H0N6QHfi18 = 0; H0N6QHfi18 < l; H0N6QHfi18++) {
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
            if (aKDydFwGOC2[H0N6QHfi18] == (420 - 419))
                cout << "$";
            else {
                if (aKDydFwGOC2[H0N6QHfi18] == (505 - 503))
                    cout << "?";
                else
                    cout << " ";
            };
        }
        cout << endl;
    }
    return 0;
}

