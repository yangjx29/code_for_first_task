int main () {
    int i = (307 - 307), j = 0;
    int EphWtUJC;
    int m;
    EphWtUJC = (220 - 220);
    m = (508 - 508);
    int Q4IWX0csmRP [(465 - 443)] [(1005 - 983)];
    memset (Q4IWX0csmRP, (529 - 529), sizeof (Q4IWX0csmRP));
    cin >> m >> EphWtUJC;
    for (i = (817 - 816); m >= i; i = i + 1)
        for (j = (438 - 437); EphWtUJC >= j; j = j + 1)
            cin >> Q4IWX0csmRP[i][j];
    for (j = (382 - 381); m >= j; j++)
        for (i = (525 - 524); EphWtUJC >= i; i = i + 1)
            if (Q4IWX0csmRP[j][i] >= Q4IWX0csmRP[j - 1][i] && Q4IWX0csmRP[j][i] >= Q4IWX0csmRP[j + 1][i] && Q4IWX0csmRP[j][i] >= Q4IWX0csmRP[j][i + 1] && Q4IWX0csmRP[j][i] >= Q4IWX0csmRP[j][i - 1])
                cout << j - 1 << " " << i - 1 << endl;
    return 0;
}

