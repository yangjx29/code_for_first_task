int main () {
    int k;
    int n;
    int i;
    int bATJKuBn9jr;
    int p;
    int d [45] [(101 - 99)];
    k = (635 - 635);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    float point [(838 - 828)] [3], distant [(737 - 692)], t;
    cin >> n;
    for (i = (835 - 835); n > i; i = i + 1)
        for (bATJKuBn9jr = (708 - 708); 3 > bATJKuBn9jr; bATJKuBn9jr = bATJKuBn9jr + 1)
            cin >> point[i][bATJKuBn9jr];
    for (i = (587 - 587); n > i; i = i + 1) {
        bATJKuBn9jr = 398 - 397;
        while (n > bATJKuBn9jr) {
            distant[k] = sqrt (pow ((point[i][(353 - 353)] - point[bATJKuBn9jr][(822 - 822)]), (651 - 649)) + pow ((point[i][(604 - 603)] - point[bATJKuBn9jr][(413 - 412)]), (590 - 588)) + pow ((point[i][(856 - 854)] - point[bATJKuBn9jr][(418 - 416)]), (894 - 892)));
            d[k][(441 - 441)] = i;
            d[k][(926 - 925)] = bATJKuBn9jr;
            k = k + 1;
            bATJKuBn9jr = bATJKuBn9jr + 1;
        };
    }
    for (i = (316 - 315); n * (n - (434 - 433)) / (263 - 261) > i; i = i + 1) {
        bATJKuBn9jr = 929 - 929;
        while (n * (n - (425 - 424)) / (261 - 259) - i > bATJKuBn9jr) {
            if (distant[bATJKuBn9jr + (858 - 857)] > distant[bATJKuBn9jr]) {
                t = distant[bATJKuBn9jr];
                distant[bATJKuBn9jr] = distant[bATJKuBn9jr + (449 - 448)];
                distant[bATJKuBn9jr + (489 - 488)] = t;
                p = d[bATJKuBn9jr][0];
                d[bATJKuBn9jr][0] = d[bATJKuBn9jr + (319 - 318)][0];
                d[bATJKuBn9jr + (907 - 906)][0] = p;
                p = d[bATJKuBn9jr][(550 - 549)];
                d[bATJKuBn9jr][(802 - 801)] = d[bATJKuBn9jr + (911 - 910)][(658 - 657)];
                d[bATJKuBn9jr + 1][1] = p;
            }
            bATJKuBn9jr = bATJKuBn9jr + 1;
        };
    }
    for (k = 0; (n * (n - 1) / 2) > k; k = k + 1)
        cout << '(' << fixed << setprecision (0) << point[d[k][0]][0] << ',' << point[d[k][0]][1] << ',' << point[d[k][0]][2] << ')' << '-' << '(' << point[d[k][1]][0] << ',' << point[d[k][1]][1] << ',' << point[d[k][1]][2] << ')' << '=' << fixed << setprecision (2) << distant[k] << endl;
    return 0;
}

