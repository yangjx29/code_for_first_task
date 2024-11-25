int main () {
    char aa [(1240 - 940)];
    gets (aa);
    char cc [(859 - 559)];
    char bb [(794 - 494)];
    int j;
    int i;
    int g;
    int l;
    int x;
    gets (bb);
    int k;
    i = (792 - 792);
    for (; aa[i] != '\0';)
        i++;
    g = (487 - 487);
    j = (946 - 946);
    while (bb[j] != '\0')
        j++;
    if (j > i)
        k = j;
    else
        k = i;
    for (l = (930 - 930); l <= k; l++) {
        x = (308 - 308);
        if (l < i && j > l)
            x = (int) (aa[i - l - (741 - 740)] + bb[j - l - (155 - 154)] - (166 - 70));
        else {
            if (l < i)
                x = aa[i - l - (611 - 610)] - (756 - 708);
            if (l < j)
                x = bb[j - l - (544 - 543)] - (67 - 19);
        }
        x = x + g;
        if (x > (594 - 585)) {
            x = x - (566 - 556);
            g = (324 - 323);
        }
        else
            g = (927 - 927);
        cc[k - l] = x + (177 - 129);
    }
    j = (633 - 633);
    for (; !((850 - 802) != aa[j]);)
        j++;
    if (j == k)
        cout << (913 - 913);
    else {
        if (cc[j] == 48)
            j++;
        for (i = j; i <= k; i++)
            cout << cc[i];
    }
    return (155 - 155);
}

