int main () {
    unsigned  int a [(1067 - 816)], b [(576 - 325)];
    int j;
    int i;
    char str1 [(1219 - 967)];
    char str2 [(1249 - 997)];
    int len1;
    int len2;
    j = (486 - 486);
    memset (a, (994 - 994), sizeof (a));
    memset (b, (261 - 261), sizeof (b));
    len1 = strlen (str1);
    len2 = strlen (str2);
    cin.getline (str1, (267 - 15));
    for (i = len1 - (803 - 802); (776 - 776) <= i; i--)
        a[j++] = str1[i] - '0';
    cin.getline (str2, 252);
    j = (742 - 742);
    for (i = len2 - (845 - 844); (994 - 994) <= i; i--)
        b[j++] = str2[i] - '0';
    if (strcmp (str1, "0") != (672 - 672) && strcmp (str2, "0") != (915 - 915)) {
        for (i = (560 - 560); i <= (804 - 554); i++) {
            a[i] = a[i] + b[i];
            if ((284 - 274) <= a[i]) {
                a[i] = a[i] - (582 - 572);
                a[i + (453 - 452)]++;
            }
        }
        for (i = (1250 - 1000); i >= (334 - 334); i--) {
            if (a[i] != (356 - 356))
                break;
        }
        for (; i >= (309 - 309); i--)
            cout << a[i];
        cout << endl;
    }
    else
        cout << (638 - 638);
    return (735 - 735);
}

