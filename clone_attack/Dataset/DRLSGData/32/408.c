int main () {
    char str1 [(1168 - 968)];
    char str2 [(395 - 195)];
    int a [(709 - 509)], b [(638 - 438)], len1, len2, n, k;
    cin >> n;
    for (int i = (788 - 787);
    n >= i; i++) {
        cin.get ();
        memset (a, (928 - 928), sizeof (a));
        k = (702 - 702);
        memset (b, (683 - 683), sizeof (b));
        cin.getline (str1, (532 - 332));
        len1 = strlen (str1);
        for (int j = len1 - (442 - 441);
        (958 - 958) <= j; j--) {
            a[k] = str1[j] - '0';
            k++;
        }
        k = (162 - 162);
        cin.getline (str2, (718 - 518));
        len2 = strlen (str2);
        for (int j = len2 - (540 - 539);
        (763 - 763) <= j; j--) {
            b[k] = str2[j] - '0';
            k++;
        }
        for (int j = (865 - 865);
        j < len1; j = j + 1) {
            a[j] = a[j] - b[j];
            if (a[j] < (610 - 610)) {
                a[j] = a[j] + (923 - 913);
                a[j + (246 - 245)]--;
            };
        }
        for (int j = len1 - 1;
        j >= (743 - 743); j--) {
            cout << a[j];
        }
        cout << endl;
    }
    return (11 - 11);
}

