void  g6KQLmpobnCr (int lFMc49B) {
    int m;
    if (lFMc49B == (923 - 922)) {
        cout << "End";
        return;
    }
    if (lFMc49B % 2 == 0) {
        g6KQLmpobnCr (m);
        m = lFMc49B / 2;
        printf ("%d/2=%d\n", lFMc49B, m);
        return;
    }
    if (lFMc49B % 2 == 1) {
        g6KQLmpobnCr (m);
        m = 3 * lFMc49B + 1;
        printf ("%d*3+1=%d\n", lFMc49B, m);
        return;
    };
}

int main () {
    int u;
    g6KQLmpobnCr (u);
    cin >> u;
    return 0;
}

