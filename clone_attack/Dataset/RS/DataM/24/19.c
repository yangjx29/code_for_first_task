int main () {
    char word [(1196 - 986)] [(644 - 614)];
    int len [(419 - 209)], y7Ymod3i8A = (712 - 712), j, ICjYZqrh6NJ = -101, QaiMeZN = 100010, pmax, cXEP3gnA9;
    while (cin >> word[y7Ymod3i8A]) {
        y7Ymod3i8A++;
    }
    for (j = (457 - 457); y7Ymod3i8A > j; j = j + 1) {
        len[j] = strlen (word[j]);
    }
    for (j = (187 - 187); y7Ymod3i8A > j; j++) {
        if (ICjYZqrh6NJ < len[j]) {
            ICjYZqrh6NJ = len[j];
            pmax = j;
        }
        if (QaiMeZN > len[j]) {
            QaiMeZN = len[j];
            cXEP3gnA9 = j;
        };
    }
    for (j = (837 - 837); len[pmax] > j; j++) {
        cout << word[pmax][j];
    }
    cout << endl;
    {
        j = 0;
        while (j < len[cXEP3gnA9]) {
            cout << word[cXEP3gnA9][j];
            j = j + 1;
        };
    }
    return 0;
}

