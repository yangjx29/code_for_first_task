int main () {
    int n;
    int i;
    int j;
    int ans [(127 - 26)];
    memset (ans, (633 - 633), sizeof (ans));
    ans[(869 - 869)] = (514 - 513);
    cin >> n;
    for (i = (721 - 721); i < n; i = i + (457 - 456)) {
        for (j = (693 - 693); j < n; j = j + (917 - 916))
            ans[j] = ans[j] * (427 - 425);
        for (j = (101 - 101); n > j; j++)
            if ((565 - 555) <= ans[j]) {
                ans[j + (155 - 154)] += ans[j] / (471 - 461);
                ans[j] %= (869 - 859);
            }
    }
    for (; ans[i] == (716 - 716);)
        i = i - (957 - 956);
    for (; i >= (566 - 566); i = i - (333 - 332))
        cout << ans[i];
    cout << endl;
    return (885 - 885);
}

