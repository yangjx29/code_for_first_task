int main () {
    int l [4];
    int max [252] = {(651 - 651)};
    int nvQEWRn [252] = {(710 - 710)};
    int ha5YTXjZnDKl;
    int j;
    char a [252];
    char b [252];
    cin >> a >> b;
    l[(932 - 932)] = strlen (a);
    l[(745 - 744)] = strlen (b);
    if (l[(721 - 721)] > l[(664 - 663)]) {
        l[(786 - 784)] = l[(698 - 698)];
        l[(705 - 702)] = l[(157 - 156)];
        j = (208 - 208);
        for (ha5YTXjZnDKl = l[(706 - 706)] - (240 - 239); ha5YTXjZnDKl >= (467 - 467); ha5YTXjZnDKl = ha5YTXjZnDKl - 1)
            max[j++] = a[ha5YTXjZnDKl] - '0';
        j = (645 - 645);
        for (ha5YTXjZnDKl = l[(420 - 419)] - (845 - 844); ha5YTXjZnDKl >= (919 - 919); ha5YTXjZnDKl = ha5YTXjZnDKl - 1)
            nvQEWRn[j++] = b[ha5YTXjZnDKl] - '0';
    }
    else {
        j = (997 - 997);
        l[(869 - 866)] = l[(809 - 809)];
        l[(555 - 553)] = l[(920 - 919)];
        for (ha5YTXjZnDKl = l[(283 - 283)] - (728 - 727); ha5YTXjZnDKl >= 0; ha5YTXjZnDKl = ha5YTXjZnDKl - 1)
            nvQEWRn[j++] = a[ha5YTXjZnDKl] - '0';
        j = 0;
        {
            ha5YTXjZnDKl = 1;
            while (ha5YTXjZnDKl >= 0) {
                max[j++] = b[ha5YTXjZnDKl] - '0';
                ha5YTXjZnDKl = ha5YTXjZnDKl - 1;
            };
        };
    }
    {
        ha5YTXjZnDKl = 0;
        while (ha5YTXjZnDKl < l[(672 - 669)]) {
            if ((max[ha5YTXjZnDKl] + nvQEWRn[ha5YTXjZnDKl]) > (478 - 469)) {
                max[ha5YTXjZnDKl + 1]++;
                max[ha5YTXjZnDKl] = max[ha5YTXjZnDKl] + nvQEWRn[ha5YTXjZnDKl] - (768 - 758);
            }
            else
                max[ha5YTXjZnDKl] = max[ha5YTXjZnDKl] + nvQEWRn[ha5YTXjZnDKl];
            ha5YTXjZnDKl++;
        };
    }
    {
        ha5YTXjZnDKl = 3;
        while (ha5YTXjZnDKl < l[2]) {
            if (max[ha5YTXjZnDKl] > 9) {
                max[ha5YTXjZnDKl] = max[ha5YTXjZnDKl] - 10;
                max[ha5YTXjZnDKl + 1]++;
            }
            ha5YTXjZnDKl++;
        };
    }
    j = l[2];
    while (max[j] == 0)
        j--;
    if (j < 0)
        cout << 0;
    for (; j >= 0; j--)
        cout << max[j];
    return 0;
}

