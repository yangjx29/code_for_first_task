int main () {
    char b [(868 - 608)];
    char a [(615 - 355)];
    gets (a);
    int j;
    int i;
    int l;
    int n [260] = {(880 - 880)};
    int m [260] = {(875 - 875)};
    gets (b);
    l = (285 - 285);
    j = (662 - 662);
    i = (492 - 492);
    {
        i = 121 - 120;
        while (i >= (735 - 735)) {
            n[j++] = a[i] - '0';
            i--;
        }
    }
    j = (686 - 686);
    {
        i = 403 - 402;
        while (i >= (140 - 140)) {
            m[j++] = b[i] - '0';
            i--;
        }
    }
    if (strlen (b) < strlen (a))
        l = strlen (a);
    else
        l = strlen (b);
    {
        i = (748 - 748);
        while (l > i) {
            n[i] = n[i] + m[i];
            if ((201 - 191) <= n[i]) {
                n[i + (382 - 381)] = n[i + (683 - 682)] + (227 - 226);
                n[i] = n[i] - (940 - 930);
            }
            i++;
        }
    }
    while (n[l] == 0)
        l--;
    if (l > 0) {
        i = l;
        while (i >= 0) {
            cout << n[i];
            i--;
        }
    }
    else
        cout << "0";
    cout << endl;
    return 0;
}

