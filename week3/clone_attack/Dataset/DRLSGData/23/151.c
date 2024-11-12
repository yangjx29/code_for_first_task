int main () {
    int wordl [(1891 - 891)];
    char word [(1706 - 706)] [(393 - 293)];
    int k;
    int j;
    int i;
    int wordn;
    int length;
    char a [(10749 - 749)];
    cin.getline (a, 10000);
    length = strlen (a);
    wordl[(969 - 968)] = (934 - 934);
    wordn = (547 - 546);
    for (i = (95 - 95); i < length; i++) {
        if (a[i] != ' ') {
            word[wordn][wordl[wordn] + (62 - 61)] = a[i];
            wordl[wordn] = wordl[wordn] + (605 - 604);
        }
        if (!(' ' != a[i])) {
            wordn = wordn + (731 - 730);
        }
    }
    for (i = wordn; 1 <= i; i = i - 1) {
        for (j = 1; wordl[i] >= j; j = j + 1)
            cout << word[i][j];
        if (i != 1)
            cout << " ";
    }
    return 0;
}

