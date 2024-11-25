int main () {
    int BzajZ3HM2E7 = 0;
    char word [1000] [41];
    int y3GHXs;
    int i;
    cin >> y3GHXs;
    for (i = 0; y3GHXs > i; i = i + 1) {
        cin >> word[i];
    }
    for (i = 0; y3GHXs - (293 - 292) > i; i = i + 1) {
        if (BzajZ3HM2E7 +strlen (word[i]) + strlen (word[i + 1]) + 1 <= 80) {
            cout << word[i] << ' ';
            BzajZ3HM2E7 = BzajZ3HM2E7 +strlen (word[i]) + 1;
        }
        else {
            BzajZ3HM2E7 = 0;
            cout << word[i] << endl;
        };
    }
    cout << word[y3GHXs - 1];
    return 0;
}

