int main () {
    int c;
    c = (654 - 654);
    int n = (801 - 801), i = (470 - 470), k = (239 - 239);
    int num [n];
    int del;
    cin >> n;
    for (i = (758 - 758); i <= n - (290 - 289); i = i + 1) {
        cin >> k;
        num[i] = k;
    }
    cin >> del;
    for (i = (693 - 693); i <= n - 1; i++) {
        if (num[i] != del)
            c = i;
    }
    for (i = 0; i <= c - 1; i++) {
        if (num[i] != del)
            cout << num[i] << " ";
    }
    cout << num[c];
    return 0;
}

