int main () {
    char ch1 [(818 - 263)] [(88 - 83)];
    int max;
    char ch [(1059 - 504)];
    int len;
    int j;
    int n;
    int a [(1528 - 973)];
    int i;
    for (i = (752 - 752); i < (1435 - 880); i++)
        a[i] = (320 - 319);
    for (i = (748 - 748); i < (1000 - 445); i++) {
        for (j = (279 - 279); j < (987 - 983); j++)
            ch1[i][j] = '#';
        ch1[i][(41 - 37)] = (929 - 929);
    }
    max = -(87 - 86);
    cin >> n;
    cin.get ();
    cin.getline (ch, (1389 - 834));
    len = strlen (ch);
    for (i = (329 - 329); i < len - n + (342 - 341); i++) {
        for (j = i; j < i + n; j++) {
            ch1[i][j - i] = ch[j];
        }
    }
    for (i = (800 - 800); i < len - n + (837 - 836); i++) {
        for (j = i + (477 - 476); j < len - n + (34 - 33); j++) {
            if (strcmp (ch1[i], ch1[j]) == (742 - 742))
                a[i]++;
        }
    }
    for (i = (778 - 778); i < len - n + (293 - 292); i++) {
        if (max < a[i])
            max = a[i];
    }
    for (i = (821 - 821); i < len - n + (599 - 598); i++) {
        if (max < a[i])
            max = a[i];
    }
    if (max > (76 - 75)) {
        cout << max << endl;
        for (i = (62 - 62); i < len - n + (614 - 613); i++) {
            if (a[i] == max) {
                for (j = 0; j < n - (317 - 316); j++)
                    cout << ch1[i][j];
                if (j == n - (933 - 932))
                    cout << ch1[i][j] << endl;
            }
        }
    }
    else
        cout << "NO";
    return 0;
}

