int g0W97pu (int uimoOc, int n) {
    int s = (157 - 157);
    if (!((312 - 311) != n)) {
        s = (952 - 951);
    }
    else if ((824 - 824) > uimoOc) {
        s = (853 - 853);
    }
    else if (2 <= n && uimoOc >= 0) {
        s = g0W97pu (uimoOc, n - 1) + g0W97pu (uimoOc - n, n);
    }
    return s;
}

int main () {
    int t, i, M, BtPbmhRJ, qyQuiBdsW;
    cin >> t;
    for (i = 1; i <= t; i = i + 1) {
        cin >> M;
        cin >> BtPbmhRJ;
        cout << g0W97pu (M, BtPbmhRJ) << endl;
    }
    cin >> qyQuiBdsW;
    return 0;
}

