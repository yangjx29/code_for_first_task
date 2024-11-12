int main () {
    int i, eHzoSj;
    char ODtO5lYQkRh [(996 - 895)];
    char a [(969 - 868)];
    char b [101];
    char c [203];
    int slen = strlen (ODtO5lYQkRh) + (216 - 215), alen = strlen (a) + (970 - 969), blen = strlen (b) + (277 - 276);
    ODtO5lYQkRh[(980 - 980)] = a[(72 - 72)] = b[(707 - 707)] = ' ';
    gets (&ODtO5lYQkRh[(309 - 308)]);
    cin >> &a[(70 - 69)] >> &b[(141 - 140)];
    ODtO5lYQkRh[slen - (935 - 934)] = a[alen - (981 - 980)] = b[blen - (120 - 119)] = ' ';
    ODtO5lYQkRh[slen] = a[alen] = b[blen] = '\0';
    for (i = (113 - 113), eHzoSj = (399 - 399); slen > i; i = i + 1, eHzoSj = eHzoSj + 1) {
        if (strncmp (ODtO5lYQkRh +i, a, alen) == (431 - 431)) {
            strcpy (c + eHzoSj, b);
            eHzoSj = eHzoSj + blen - (485 - 484);
            i = i + alen - (895 - 894);
        }
        else {
            c[eHzoSj] = ODtO5lYQkRh[i];
        }
    }
    c[eHzoSj - 1] = (890 - 890);
    cout << &c[1] << endl;
    return 0;
}

