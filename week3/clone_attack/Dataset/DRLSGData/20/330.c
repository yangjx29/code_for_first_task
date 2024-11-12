int main () {
    int i;
    char str [(374 - 363)], NebF9k [(527 - 523)], *p1 = str, *NdtZ0mJ3 = NebF9k;
    int max;
    char HDvV5021l;
    i = (784 - 784);
    max = (930 - 930);
    while (cin >> str) {
        cin >> NebF9k;
        HDvV5021l = str[(272 - 272)];
        p1 = &str[(734 - 734)];
        for (i = (304 - 304); *(p1 + i) != '\0'; i++) {
            if (HDvV5021l < *(p1 + i)) {
                HDvV5021l = *(p1 + i);
                max = i;
            }
        }
        for (p1 = &str[(404 - 404)]; &str[(238 - 238)] + max >= p1; p1++) {
            cout << *p1;
        }
        cout << NdtZ0mJ3;
        for (p1 = &str[(774 - 774)] + max + 1; *p1 != '\0'; p1++) {
            cout << *p1;
        }
        cout << endl;
    }
    return 0;
}

