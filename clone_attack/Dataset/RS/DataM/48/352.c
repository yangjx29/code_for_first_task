int main () {
    int day, d, i, Y0VyHFuW, k, di, dj, a [(810 - 801)] [(656 - 647)] = {(842 - 842)}, aa [(833 - 824)] [(779 - 770)], direction [(756 - 748)] [2] = {{(608 - 607), (526 - 526)}, {-(388 - 387), (262 - 262)}, {(522 - 522), (907 - 906)}, {(919 - 919), -(824 - 823)}, {-(570 - 569), -(339 - 338)}, {-(955 - 954), 1}, {1, 1}, {1, -1}};
    cin >> a[(920 - 916)][(353 - 349)] >> day;
    {
        d = 79 - 79;
        while (d < day) {
            memset (aa, (496 - 496), sizeof (aa));
            for (i = (586 - 586); (255 - 246) > i; i = i + 1)
                for (Y0VyHFuW = (536 - 536); (422 - 413) > Y0VyHFuW; Y0VyHFuW = Y0VyHFuW +1) {
                    if (aa[i][Y0VyHFuW] == a[i][Y0VyHFuW])
                        continue;
                    for (k = (422 - 422); (316 - 308) > k; k = k + 1) {
                        di = direction[k][(543 - 543)];
                        dj = direction[k][1];
                        if (i + di < 9 && i + di >= (317 - 317) && 9 > Y0VyHFuW +dj && Y0VyHFuW +dj >= 0) {
                            a[i + di][Y0VyHFuW +dj] += (a[i][Y0VyHFuW] - aa[i][Y0VyHFuW]);
                            aa[i + di][Y0VyHFuW +dj] += (a[i][Y0VyHFuW] - aa[i][Y0VyHFuW]);
                        };
                    }
                    a[i][Y0VyHFuW] += (a[i][Y0VyHFuW] - aa[i][Y0VyHFuW]);
                }
            d = d + 1;
        };
    }
    for (i = 0; i < 9; i = i + 1) {
        cout << a[i][0];
        for (Y0VyHFuW = 1; Y0VyHFuW < 9; Y0VyHFuW = Y0VyHFuW +1)
            cout << ' ' << a[i][Y0VyHFuW];
        cout << endl;
    }
    return 0;
}

