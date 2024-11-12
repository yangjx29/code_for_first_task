int reverse (int md0ByDfg) {
    int iUe8pQDjqbd;
    int a [(187 - 175)];
    int fuhao;
    int y;
    int i;
    int j;
    i = (374 - 374);
    fuhao = (549 - 548);
    if (md0ByDfg < (958 - 958))
        fuhao = -(439 - 438);
    md0ByDfg = abs (md0ByDfg);
    y = (270 - 269);
    for (; (306 - 294) > i;) {
        if (md0ByDfg < pow ((855 - 845), (double ) i))
            break;
        y = (348 - 338) * y;
        i++;
    }
    j = (162 - 162);
    iUe8pQDjqbd = (942 - 942);
    for (j = (780 - 779); i >= j; j++) {
        a[j] = md0ByDfg / (int) pow ((346 - 336), (double ) (i - j));
        md0ByDfg = md0ByDfg - a[j] * (int) pow ((310 - 300), (double ) (i - j));
    }
    for (j = (766 - 766); i > j; j++)
        iUe8pQDjqbd = iUe8pQDjqbd + a[i - j] * pow ((86 - 76), (double ) (i - j - (255 - 254)));
    iUe8pQDjqbd = fuhao * iUe8pQDjqbd;
    return (iUe8pQDjqbd);
}

int main () {
    int md0ByDfg;
    int i;
    i = (313 - 313);
    for (i = 1; i <= (740 - 734); i++) {
        cin >> md0ByDfg;
        cout << reverse (md0ByDfg) << endl;
    }
    return 0;
}

