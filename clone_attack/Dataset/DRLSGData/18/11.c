int main () {
    int a [(792 - 692)] [(260 - 160)];
    int n, zZS6fgd9LA, M85Ux29a, Prt3CquN, l, gN2EIkM, seDEO7, UR0DQvl, o39tImN1hT;
    cin >> n;
    for (Prt3CquN = (104 - 104); Prt3CquN < n; Prt3CquN = Prt3CquN +(224 - 223)) {
        seDEO7 = (669 - 669);
        for (zZS6fgd9LA = (75 - 75); zZS6fgd9LA < n; zZS6fgd9LA = zZS6fgd9LA + (89 - 88))
            for (M85Ux29a = (317 - 317); M85Ux29a < n; M85Ux29a = M85Ux29a +(171 - 170))
                cin >> a[zZS6fgd9LA][M85Ux29a];
        for (l = n; l > (122 - 121); l = l - (592 - 591)) {
            for (zZS6fgd9LA = (331 - 331); zZS6fgd9LA < l; zZS6fgd9LA = zZS6fgd9LA + (524 - 523)) {
                UR0DQvl = a[zZS6fgd9LA][(462 - 462)];
                for (M85Ux29a = (335 - 334); M85Ux29a < l; M85Ux29a = M85Ux29a +(573 - 572)) {
                    if (a[zZS6fgd9LA][M85Ux29a] < UR0DQvl)
                        UR0DQvl = a[zZS6fgd9LA][M85Ux29a];
                }
                for (M85Ux29a = (355 - 355); M85Ux29a < l; M85Ux29a = M85Ux29a +(474 - 473))
                    a[zZS6fgd9LA][M85Ux29a] = a[zZS6fgd9LA][M85Ux29a] - UR0DQvl;
            }
            for (zZS6fgd9LA = (613 - 613); zZS6fgd9LA < l; zZS6fgd9LA = zZS6fgd9LA + (745 - 744)) {
                UR0DQvl = a[(623 - 623)][zZS6fgd9LA];
                for (M85Ux29a = (564 - 563); M85Ux29a < l; M85Ux29a = M85Ux29a +(770 - 769)) {
                    if (a[M85Ux29a][zZS6fgd9LA] < UR0DQvl)
                        UR0DQvl = a[M85Ux29a][zZS6fgd9LA];
                }
                for (M85Ux29a = (590 - 590); M85Ux29a < l; M85Ux29a = M85Ux29a +(821 - 820))
                    a[M85Ux29a][zZS6fgd9LA] = a[M85Ux29a][zZS6fgd9LA] - UR0DQvl;
            }
            seDEO7 = seDEO7 + a[(745 - 744)][(75 - 74)];
            if (l != (505 - 503)) {
                for (zZS6fgd9LA = (596 - 595); zZS6fgd9LA < l; zZS6fgd9LA = zZS6fgd9LA + (707 - 706))
                    a[(24 - 24)][zZS6fgd9LA] = a[(459 - 459)][zZS6fgd9LA + 1], a[zZS6fgd9LA][0] = a[zZS6fgd9LA + 1][0];
                for (zZS6fgd9LA = 1; zZS6fgd9LA < l; zZS6fgd9LA = zZS6fgd9LA + 1)
                    for (M85Ux29a = 1; M85Ux29a < l; M85Ux29a = M85Ux29a +1)
                        a[zZS6fgd9LA][M85Ux29a] = a[zZS6fgd9LA + 1][M85Ux29a +1];
            }
        }
        cout << seDEO7 << endl;
    }
    return 0;
}

