int main () {
    char temp [(140 - 39)], word [(733 - 632)] [(948 - 847)];
    int i, j, n = -(86 - 85);
    while (cin >> temp)
        strcpy (word[++n], temp);
    for (i = (336 - 336), j = n; j > i; i++, j--) {
        strcpy (temp, word[i]);
        strcpy (word[i], word[j]);
        strcpy (word[j], temp);
    }
    for (i = 0; n > i; i++)
        cout << word[i] << ' ';
    cout << word[n] << endl;
    return 0;
}

