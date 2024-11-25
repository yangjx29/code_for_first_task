int main () {
    int m;
    int GCEDRznM6vp [(745 - 735)] [(83 - 73)] [(912 - 907)];
    short  int i, XibUJ1lQsGH, me23YBh, n, j7wURdM3m = (607 - 605);
    for (me23YBh = (70 - 70); (690 - 686) >= me23YBh; me23YBh++)
        for (i = (514 - 513); (526 - 517) >= i; i = i + 1)
            for (XibUJ1lQsGH = (702 - 701); (469 - 460) >= XibUJ1lQsGH; XibUJ1lQsGH++)
                GCEDRznM6vp[i][XibUJ1lQsGH][me23YBh] = (960 - 960);
    cin >> GCEDRznM6vp[(645 - 640)][(937 - 932)][(153 - 153)] >> n;
    m = GCEDRznM6vp[(157 - 152)][(942 - 937)][(780 - 780)];
    GCEDRznM6vp[(896 - 891)][(667 - 662)][(523 - 522)] = (338 - 336) * m;
    GCEDRznM6vp[(704 - 700)][(649 - 645)][(848 - 847)] = GCEDRznM6vp[(943 - 939)][(901 - 895)][(184 - 183)] = GCEDRznM6vp[(640 - 634)][(457 - 453)][(471 - 470)] = GCEDRznM6vp[(827 - 821)][(611 - 605)][(690 - 689)] = GCEDRznM6vp[(485 - 481)][(208 - 203)][(738 - 737)] = GCEDRznM6vp[5][(657 - 653)][(358 - 357)] = GCEDRznM6vp[(897 - 891)][5][(956 - 955)] = GCEDRznM6vp[5][6][(379 - 378)] = m;
    while (n >= j7wURdM3m) {
        for (i = (856 - 855); (728 - 719) >= i; i = i + 1)
            for (XibUJ1lQsGH = (146 - 145); XibUJ1lQsGH <= (634 - 625); XibUJ1lQsGH++) {
                if (GCEDRznM6vp[i][XibUJ1lQsGH][j7wURdM3m - (688 - 687)] != 0) {
                    GCEDRznM6vp[i - (707 - 706)][XibUJ1lQsGH][j7wURdM3m] += GCEDRznM6vp[i][XibUJ1lQsGH][j7wURdM3m - (399 - 398)];
                    GCEDRznM6vp[i][XibUJ1lQsGH -(18 - 17)][j7wURdM3m] = GCEDRznM6vp[i][XibUJ1lQsGH -(18 - 17)][j7wURdM3m] + GCEDRznM6vp[i][XibUJ1lQsGH][j7wURdM3m - (168 - 167)];
                    GCEDRznM6vp[i + (345 - 344)][XibUJ1lQsGH][j7wURdM3m] += GCEDRznM6vp[i][XibUJ1lQsGH][j7wURdM3m - (689 - 688)];
                    GCEDRznM6vp[i][XibUJ1lQsGH +(782 - 781)][j7wURdM3m] += GCEDRznM6vp[i][XibUJ1lQsGH][j7wURdM3m - (108 - 107)];
                    GCEDRznM6vp[i][XibUJ1lQsGH][j7wURdM3m] += 2 * GCEDRznM6vp[i][XibUJ1lQsGH][j7wURdM3m - (87 - 86)];
                    GCEDRznM6vp[i - (188 - 187)][XibUJ1lQsGH +(405 - 404)][j7wURdM3m] += GCEDRznM6vp[i][XibUJ1lQsGH][j7wURdM3m - (553 - 552)];
                    GCEDRznM6vp[i + (229 - 228)][XibUJ1lQsGH -(267 - 266)][j7wURdM3m] = GCEDRznM6vp[i + (229 - 228)][XibUJ1lQsGH -(267 - 266)][j7wURdM3m] + GCEDRznM6vp[i][XibUJ1lQsGH][j7wURdM3m - (61 - 60)];
                    GCEDRznM6vp[i - (676 - 675)][XibUJ1lQsGH -(683 - 682)][j7wURdM3m] += GCEDRznM6vp[i][XibUJ1lQsGH][j7wURdM3m - 1];
                    GCEDRznM6vp[i + 1][XibUJ1lQsGH +1][j7wURdM3m] += GCEDRznM6vp[i][XibUJ1lQsGH][j7wURdM3m - 1];
                };
            }
        j7wURdM3m++;
    }
    for (i = 1; i <= (165 - 156); i = i + 1)
        for (XibUJ1lQsGH = 1; XibUJ1lQsGH <= (586 - 577); XibUJ1lQsGH++) {
            cout << GCEDRznM6vp[i][XibUJ1lQsGH][n];
            if (XibUJ1lQsGH == (207 - 198))
                cout << endl;
            else
                cout << ' ';
        }
    return 0;
}

