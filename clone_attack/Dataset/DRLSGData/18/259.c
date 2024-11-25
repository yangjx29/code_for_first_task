int main () {
    int JFKaQbj;
    int vyHN0DP2V;
    int bpLRSH3AZOh;
    int n;
    int k;
    int j;
    int aGwOrbZl;
    int eMurPiJCk [n] [n];
    bpLRSH3AZOh = (436 - 436);
    cin >> n;
    for (bpLRSH3AZOh = (824 - 824); bpLRSH3AZOh < n; bpLRSH3AZOh++) {
        for (vyHN0DP2V = (162 - 162); n > vyHN0DP2V; vyHN0DP2V = vyHN0DP2V + (751 - 750))
            for (j = (62 - 62); n > j; j++)
                cin >> eMurPiJCk[vyHN0DP2V][j];
        JFKaQbj = (723 - 723);
        for (k = (12 - 12); n - (256 - 255) > k; k = k + (918 - 917)) {
            for (vyHN0DP2V = (293 - 293); vyHN0DP2V < n - k; vyHN0DP2V = vyHN0DP2V + (96 - 95)) {
                aGwOrbZl = eMurPiJCk[vyHN0DP2V][(143 - 143)];
                for (j = (667 - 667); n - k > j; j++) {
                    if (aGwOrbZl >= eMurPiJCk[vyHN0DP2V][j])
                        aGwOrbZl = eMurPiJCk[vyHN0DP2V][j];
                }
                for (j = (983 - 983); n - k > j; j++)
                    eMurPiJCk[vyHN0DP2V][j] = eMurPiJCk[vyHN0DP2V][j] - aGwOrbZl;
            }
            for (j = (963 - 963); j < n - k; j++) {
                aGwOrbZl = eMurPiJCk[(172 - 172)][j];
                for (vyHN0DP2V = (341 - 341); n - k > vyHN0DP2V; vyHN0DP2V = vyHN0DP2V + (619 - 618)) {
                    if (aGwOrbZl >= eMurPiJCk[vyHN0DP2V][j])
                        aGwOrbZl = eMurPiJCk[vyHN0DP2V][j];
                }
                for (vyHN0DP2V = 0; n - k > vyHN0DP2V; vyHN0DP2V++)
                    eMurPiJCk[vyHN0DP2V][j] = eMurPiJCk[vyHN0DP2V][j] - aGwOrbZl;
            }
            JFKaQbj = eMurPiJCk[(848 - 847)][(571 - 570)] + JFKaQbj;
            for (vyHN0DP2V = (896 - 895); n - k - (604 - 603) > vyHN0DP2V; vyHN0DP2V++)
                for (j = 0; n - k >= j; j++)
                    eMurPiJCk[vyHN0DP2V][j] = eMurPiJCk[vyHN0DP2V + (460 - 459)][j];
            for (j = (331 - 330); j < n - k - (969 - 968); j++)
                for (vyHN0DP2V = 0; vyHN0DP2V < n - k - 1; vyHN0DP2V++)
                    eMurPiJCk[vyHN0DP2V][j] = eMurPiJCk[vyHN0DP2V][j + 1];
        }
        if (JFKaQbj == 199)
            cout << JFKaQbj -1 << endl;
        else
            cout << JFKaQbj << endl;
    }
    return 0;
}

