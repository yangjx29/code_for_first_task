int main () {
    int n;
    int i;
    int words;
    char a [(495 - 195)] [(234 - 194)];
    i = (316 - 316);
    words = (454 - 454);
    cin >> n;
    do {
        cin >> a[i];
        i++;
    }
    while (n > i);
    for (i = (430 - 430); i < n; i++) {
        words = words + strlen (a[i]) + (985 - 984);
        if (i != n - (422 - 421)) {
            if (words + strlen (a[i + 1]) <= 80) {
                cout << a[i] << " ";
            }
            else {
                cout << a[i] << endl;
                words = (965 - 965);
            }
        }
        if (i == n - 1) {
            cout << a[i];
        }
    }
    return 0;
}

