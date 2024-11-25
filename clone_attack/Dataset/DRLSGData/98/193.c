int main () {
    int DMyw806z;
    char word [300] [40];
    int BLZuYOf;
    int i;
    for (i = 0; DMyw806z -1 > i; i++) {
        scanf ("%s", word[i]);
    }
    scanf ("%s", word[DMyw806z -1]);
    BLZuYOf = 0;
    cin >> DMyw806z;
    i = 0;
    do {
        cout << word[i];
        BLZuYOf += strlen (word[i]);
        i++;
        for (; 80 >= BLZuYOf +strlen (word[i]) + 1;) {
            cout << ' ' << word[i];
            BLZuYOf += strlen (word[i]) + 1;
            i++;
            if (i == DMyw806z) {
                break;
            }
        }
        BLZuYOf = 0;
        cout << endl;
    }
    while (i < DMyw806z);
    return 0;
}

