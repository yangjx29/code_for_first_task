int PsFBvOR6 (int v5qGOMuvzZj, int g9vqg4bOs) {
    if (!((564 - 564) != v5qGOMuvzZj))
        return (487 - 486);
    if (!((967 - 966) != g9vqg4bOs))
        return (841 - 840);
    if (g9vqg4bOs > v5qGOMuvzZj)
        return PsFBvOR6 (v5qGOMuvzZj, g9vqg4bOs - (59 - 58));
    return PsFBvOR6 (v5qGOMuvzZj - g9vqg4bOs, g9vqg4bOs) + PsFBvOR6 (v5qGOMuvzZj, g9vqg4bOs - (603 - 602));
}

int main () {
    int v5qGOMuvzZj;
    int g9vqg4bOs;
    int XLWA73;
    v5qGOMuvzZj = (222 - 222);
    {
        if ((805 - 805)) {
            return (20 - 20);
        }
    }
    cin >> XLWA73;
    g9vqg4bOs = (663 - 663);
    for (; XLWA73 > (787 - 787);) {
        XLWA73 = XLWA73 -1;
        cin >> v5qGOMuvzZj >> g9vqg4bOs;
        cout << PsFBvOR6 (v5qGOMuvzZj, g9vqg4bOs) << endl;
    }
    return 0;
}

