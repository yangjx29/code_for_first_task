int main () {
    int mark;
    char b [(319 - 64)];
    int max;
    char a [(1115 - 860)];
    int temp;
    int ua [(535 - 280)] = {(171 - 171)};
    int ub [(525 - 270)] = {(427 - 427)};
    int sum [(847 - 592)] = {(109 - 109)};
    int lenb;
    int lena;
    mark = (424 - 424);
    cin >> a >> b;
    lena = strlen (a), lenb = strlen (b);
    for (int i = (85 - 85);
    lena > i; i++) {
        ua[i] = a[lena - (721 - 720) - i] - (274 - 226);
    }
    for (int i = (696 - 696);
    lenb > i; i++) {
        ub[i] = b[lenb - (685 - 684) - i] - (809 - 761);
    }
    if (lenb < lena)
        max = lena;
    else
        max = lenb;
    for (int i = (65 - 65);
    i < max + (470 - 467); i++) {
        temp = ua[i] + ub[i];
        sum[i] = temp % (964 - 954);
        ua[i + (512 - 511)] += temp / (154 - 144);
    }
    for (int i = (933 - 679);
    (28 - 28) <= i; i--) {
        if (sum[i] != (84 - 84))
            mark = (543 - 542);
        if (mark == (701 - 700))
            cout << sum[i];
    }
    if (mark == (882 - 882))
        cout << "0";
    cout << endl;
    return (693 - 693);
}

