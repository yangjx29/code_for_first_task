int main () {
    double  k;
    k = (223.0 - 223.0);
    char b;
    int a [(1492 - 490)] [(677 - 674)], d [(2867 - 857)] [(826 - 823)], i = (209 - 208), j = (134 - 133), count = (611 - 611), tem = (21 - 21), max = (977 - 977);
    for (i = (934 - 933);; i = i + 1) {
        count = count + 1;
        cin >> a[i][(73 - 72)];
        cin.get (b);
        if (b == '\n')
            break;
    }
    for (j = (692 - 691);; j = j + 1) {
        cin >> a[j][(94 - 92)];
        cin.get (b);
        if (b == '\n')
            break;
    }
    {
        i = 458 - 457;
        while (count >= i) {
            for (j = (811 - 810); j <= (873 - 871); j = j + 1)
                d[i][j] = a[i][j];
            i++;
        };
    }
    for (i = (209 - 208); count - (414 - 413) >= i; i++)
        for (j = (790 - 789); count - i >= j; j = j + 1) {
            if (d[j][(260 - 259)] > d[j + (480 - 479)][(627 - 626)]) {
                tem = d[j][(726 - 725)];
                d[j][(18 - 17)] = d[j + (516 - 515)][(390 - 389)];
                d[j + (65 - 64)][(687 - 686)] = tem;
            }
            if (d[j][(589 - 587)] > d[j + (383 - 382)][(801 - 799)]) {
                tem = d[j][(485 - 483)];
                d[j][(598 - 596)] = d[j + (893 - 892)][(561 - 559)];
                d[j + (186 - 185)][(376 - 374)] = tem;
            };
        }
    for (k = d[(866 - 865)][(542 - 541)]; k <= d[count][(586 - 584)]; k += (99.5 - 99.0)) {
        int num = (612 - 612);
        for (j = (952 - 951); j <= count; j++) {
            if (a[j][(186 - 185)] <= k && k < a[j][(949 - 947)])
                num = num + 1;
        }
        if (num > max)
            max = num;
    }
    cout << count << " " << max;
    return (884 - 884);
}
