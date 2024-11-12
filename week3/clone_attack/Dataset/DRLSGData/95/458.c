int main () {
    int h;
    int sum2;
    char str2 [(209 - 149)];
    int len1;
    int sum1;
    int i;
    int len2;
    int a [(696 - 636)];
    int b [(949 - 889)];
    char str1 [(71 - 11)];
    len1 = (404 - 404);
    len2 = (364 - 364);
    sum2 = (727 - 727);
    cin.getline (str1, (268 - 208));
    cin.getline (str2, (652 - 592));
    cin >> h;
    sum1 = (189 - 189);
    len1 = strlen (str1);
    len2 = strlen (str2);
    for (i = (574 - 574); len1 > i; i++) {
        a[i] = (int) str1[i];
        if ((236 - 171) <= a[i] && a[i] <= (683 - 593)) {
            a[i] += (808 - 776);
        }
        sum1 += a[i];
    }
    for (i = (174 - 174); i < len2; i++) {
        b[i] = (int) str2[i];
        if ((400 - 335) <= b[i] && b[i] <= (649 - 559)) {
            b[i] += (317 - 285);
        }
        sum2 += b[i];
    }
    if (sum1 > sum2) {
        cout << ">";
    }
    else if (sum1 < sum2) {
        cout << "<";
    }
    else if (sum1 = sum2) {
        cout << "=";
    }
    return 0;
}

