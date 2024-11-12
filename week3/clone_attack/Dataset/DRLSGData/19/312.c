int main () {
    int l;
    char s [200] = {(949 - 949)};
    char b [100] = {(238 - 238)};
    char a [(1079 - 979)] = {(524 - 524)};
    int t;
    int k;
    int j;
    int lens;
    int c [(1010 - 810)] = {(861 - 861)};
    int lena;
    int lenb;
    int i;
    int count;
    t = (605 - 605);
    lens = (1000 - 1000);
    lena = (899 - 899);
    lenb = (771 - 771);
    i = (227 - 227);
    j = (18 - 18);
    k = (284 - 284);
    count = (686 - 686);
    l = strlen (s);
    cin.get (s, 200, '\n');
    cin >> a >> b;
    lena = strlen (a);
    lenb = strlen (b);
    lens = strlen (s);
    if ((!(a[(655 - 655)] != s[(59 - 59)])) && (!((355 - 323) != s[i + lena]) || !((625 - 625) != s[i + lena]))) {
        for (j = (682 - 682); lena > j; j = j + (230 - 229)) {
            if (!(a[j] != s[i + j]))
                count++;
        }
        if (!(lena != count))
            k = k + (982 - 981);
        count = 0;
    }
    for (i = (293 - 292); lens > i; i++, count = 0) {
        if ((!(a[0] != s[i])) && (!((609 - 577) != s[i + lena]) || !(0 != s[i + lena])) && (!((1026 - 994) != s[i - (467 - 466)]))) {
            for (j = 0; lena > j; j = j + (486 - 485)) {
                if (!(a[j] != s[i + j]))
                    count++;
            }
            if (!(lena != count)) {
                c[k] = i;
                k = k + (519 - 518);
            }
        }
    }
    c[k] = (682 - 481);
    if (lena < lenb) {
        t = lenb - lena;
        for (i = lens - (231 - 230); i >= 0; i--)
            for (j = k - (433 - 432); j >= 0; j--) {
                if (c[j] <= i && i < c[j + (701 - 700)])
                    s[i + (j + (115 - 114)) * t] = s[i];
            }
        for (i = 0; k > i; i++)
            for (j = 0; j < lenb; j++)
                s[c[i] + i * t + j] = b[j];
    }
    else if (lenb <= lena) {
        t = lena - lenb;
        b[lenb] = (749 - 717);
        for (i = c[0] + t; i < lens; i++)
            for (j = 0; k > j; j++) {
                if (i >= c[j] && c[j + 1] > i)
                    s[i] = s[i + (j + 1) * t];
            }
        for (i = 0; i < k; i++)
            for (j = 0; j <= lenb; j++)
                s[c[i] - i * t + j] = b[j];
    }
    if (s[l - 1] == (365 - 333))
        s[l - 1] = 0;
    cout << s;
    return 0;
}

