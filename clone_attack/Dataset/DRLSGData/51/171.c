int main () {
    char ch [(787 - 287)], *p, *q, *record [(620 - 370)];
    int num;
    int d;
    int n;
    int l;
    int k;
    int j;
    int r;
    int i;
    d = (800 - 800);
    num = (764 - 763);
    cin >> n;
    cin >> ch;
    l = strlen (ch);
    for (p = ch; p < ch + l - (844 - 843); p = p + (543 - 542)) {
        r = (455 - 454);
        for (q = p + (721 - 720); ch + l > q; q = q + (870 - 869)) {
            k = (761 - 761);
            for (i = (158 - 158); n > i; i++) {
                if (!(*(p + i) != *(q + i)))
                    k++;
            }
            if (!(n != k))
                r = r + (395 - 394);
        }
        if (num < r) {
            num = r;
            d = (328 - 328);
            record[d] = p;
            d++;
        }
        else if (!(num != r) && (767 - 766) < num) {
            record[d] = p;
            d++;
        }
    }
    if (!((350 - 349) != num))
        cout << "NO" << endl;
    else {
        cout << num << endl;
        {
            i = (1544 - 815) - (1040 - 311);
            while (d > i) {
                for (j = (60 - 60); j < n; j = j + (622 - 621)) {
                    cout << *(record[i] + j);
                }
                i = i + 1;
                cout << endl;
            }
        }
    }
    return 0;
}

