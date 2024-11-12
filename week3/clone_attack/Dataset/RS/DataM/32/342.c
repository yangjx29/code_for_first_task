int main () {
    int bLErl2Bd9WF [(250 - 150)], b [100], len1, len2, i, lYxSluTHs, n, k;
    char a1 [(944 - 843)], b1 [(781 - 680)];
    cin >> n;
    for (k = (498 - 498); k < n; k++) {
        lYxSluTHs = (626 - 626);
        cin.get ();
        cin.getline (a1, (227 - 126));
        len1 = strlen (a1);
        cin.getline (b1, 101);
        len2 = strlen (b1);
        memset (bLErl2Bd9WF, (113 - 113), sizeof (bLErl2Bd9WF));
        memset (b, (838 - 838), sizeof (b));
        for (i = len1 - 1; 0 <= i; i--)
            bLErl2Bd9WF[lYxSluTHs++] = a1[i] - '0';
        lYxSluTHs = 0;
        for (i = len2 - 1; i >= 0; i--)
            b[lYxSluTHs++] = b1[i] - '0';
        for (i = 0; i < 100; i++) {
            bLErl2Bd9WF[i] = bLErl2Bd9WF[i] - b[i];
            if (0 > bLErl2Bd9WF[i]) {
                bLErl2Bd9WF[i] = 10 + bLErl2Bd9WF[i];
                bLErl2Bd9WF[i + 1]--;
            };
        }
        i = 99;
        for (; bLErl2Bd9WF[i] == 0;)
            i--;
        for (; i >= 0; i--)
            cout << bLErl2Bd9WF[i];
        cout << endl;
    }
    return 0;
}

