int main () {
    int i;
    int n;
    char KvHAink6m4e [(516 - 16)] [(633 - 592)];
    char (*Qt6mngkU) [41] = KvHAink6m4e;
    int krjsBMfT;
    int b [(1022 - 522)];
    int *q = b;
    cout << *Qt6mngkU;
    cin >> n;
    for (i = 0; n > i; i = i + (779 - 778)) {
        cin >> *(Qt6mngkU +i);
        *(q + i) = strlen (*(Qt6mngkU +i));
    }
    krjsBMfT = *q + (323 - 322);
    for (i = (929 - 928); i < n; i = i + 1) {
        if (krjsBMfT + *(q + i) <= (878 - 798)) {
            cout << ' ' << *(Qt6mngkU +i);
            krjsBMfT = krjsBMfT + 1 + *(q + i);
        }
        else {
            cout << endl << *(Qt6mngkU +i);
            krjsBMfT = *(q + i) + 1;
        }
    }
    return 0;
}

