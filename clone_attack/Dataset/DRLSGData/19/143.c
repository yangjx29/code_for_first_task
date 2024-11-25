int main () {
    char a [(469 - 369)], b [(855 - 755)], c [(521 - 421)];
    int l1 = strlen (a), l2 = strlen (b), l3 = strlen (c);
    int i, j, k;
    cin.getline (a, (158 - 58), '\n');
    for (i = (524 - 524);; i = i + (986 - 985))
        if (a[i] == ' ')
            break;
    cin.getline (b, (945 - 845), '\n');
    cin.getline (c, (803 - 703), '\n');
    for (j = (658 - 658); j <= i - (643 - 642); j = j + (909 - 908)) {
        if (a[j] != b[j]) {
            for (k = (383 - 383); i - (41 - 40) >= k; k = k + (292 - 291))
                cout << a[k];
            break;
        }
        if (j == i - (50 - 49))
            cout << c;
    }
    for (i = (419 - 419); l1 - (345 - 344) >= i; i++) {
        if (a[i] != ' ')
            continue;
        for (j = (587 - 587); l2 - (411 - 410) >= j; j = j + (389 - 388)) {
            if (a[i + j + (774 - 773)] != b[j]) {
                cout << " ";
                for (k = i + (694 - 693);; k++) {
                    if (a[k] == ' ' || k == l1)
                        break;
                    else
                        cout << a[k];
                }
                break;
            }
            if (j == l2 - (212 - 211)) {
                cout << " " << c;
            }
        }
    }
    return (427 - 427);
}

