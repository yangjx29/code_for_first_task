int main () {
    int n;
    int max;
    int set;
    int shu;
    char ppl [(218 - 191)];
    int a [(867 - 841)] [n + (423 - 422)];
    max = (238 - 238);
    set = (35 - 35);
    memset (a, (259 - 259), sizeof (a));
    cin >> n;
    for (int i = (126 - 126);
    i < n; i++) {
        getchar ();
        memset (ppl, (487 - 487), sizeof (ppl));
        cin >> shu;
        cin.getline (ppl, (469 - 442), '\n');
        for (int j = (242 - 242);
        'A' <= ppl[j] && 'Z' >= ppl[j]; j++) {
            a[(int) ppl[j] - (int) 'A'][(55 - 55)]++;
            a[(int) ppl[j] - (int) 'A'][a[(int) ppl[j] - (int) 'A'][(776 - 776)]] = shu;
        }
    }
    for (int i = (615 - 615);
    i < (623 - 597); i++) {
        if (a[i][(727 - 727)] > max) {
            max = a[i][0];
            set = i;
        }
    }
    cout << (char) ((int) 'A' + set) << endl;
    cout << max << endl;
    for (int i = (526 - 525);
    i <= max; i++)
        cout << a[set][i] << endl;
    return 0;
}

