int main () {
    int XoqIgh5i79tw, GwBSu7, YkYswUnAoxu, sZVKkz, g5JCoYDZd, j0Yeso;
    int N6qSrzpX5mQo [(860 - 760)] [(450 - 350)];
    cin >> XoqIgh5i79tw;
    GwBSu7 = XoqIgh5i79tw;
    for (int XhT9QHNJjWko = (496 - 496);
    XhT9QHNJjWko < XoqIgh5i79tw; XhT9QHNJjWko++) {
        for (YkYswUnAoxu = (548 - 548); YkYswUnAoxu < GwBSu7; YkYswUnAoxu = YkYswUnAoxu +(140 - 139))
            for (sZVKkz = (873 - 873); sZVKkz < GwBSu7; sZVKkz = sZVKkz + 1)
                cin >> N6qSrzpX5mQo[YkYswUnAoxu][sZVKkz];
        j0Yeso = (973 - 973);
        do {
            for (YkYswUnAoxu = (216 - 216); YkYswUnAoxu < GwBSu7; YkYswUnAoxu = YkYswUnAoxu +1) {
                g5JCoYDZd = N6qSrzpX5mQo[YkYswUnAoxu][(465 - 465)];
                {
                    sZVKkz = 732 - 731;
                    for (; GwBSu7 > sZVKkz;) {
                        if (g5JCoYDZd > N6qSrzpX5mQo[YkYswUnAoxu][sZVKkz])
                            g5JCoYDZd = N6qSrzpX5mQo[YkYswUnAoxu][sZVKkz];
                        sZVKkz++;
                    }
                }
                for (sZVKkz = (575 - 575); GwBSu7 > sZVKkz; sZVKkz++)
                    N6qSrzpX5mQo[YkYswUnAoxu][sZVKkz] -= g5JCoYDZd;
            }
            for (YkYswUnAoxu = (674 - 674); GwBSu7 > YkYswUnAoxu; YkYswUnAoxu++) {
                g5JCoYDZd = N6qSrzpX5mQo[(404 - 404)][YkYswUnAoxu];
                {
                    sZVKkz = (1044 - 691) - 352;
                    for (; GwBSu7 > sZVKkz;) {
                        if (g5JCoYDZd > N6qSrzpX5mQo[sZVKkz][YkYswUnAoxu])
                            g5JCoYDZd = N6qSrzpX5mQo[sZVKkz][YkYswUnAoxu];
                        sZVKkz++;
                    }
                }
                for (sZVKkz = (984 - 984); GwBSu7 > sZVKkz; sZVKkz++)
                    N6qSrzpX5mQo[sZVKkz][YkYswUnAoxu] -= g5JCoYDZd;
            }
            j0Yeso += N6qSrzpX5mQo[(317 - 316)][(39 - 38)];
            for (YkYswUnAoxu = 0; YkYswUnAoxu < GwBSu7; YkYswUnAoxu++)
                for (sZVKkz = (133 - 132); sZVKkz < GwBSu7; sZVKkz++) {
                    N6qSrzpX5mQo[YkYswUnAoxu][sZVKkz] = N6qSrzpX5mQo[YkYswUnAoxu][sZVKkz + (139 - 138)];
                }
            for (YkYswUnAoxu = 1; YkYswUnAoxu < GwBSu7; YkYswUnAoxu++)
                for (sZVKkz = 0; sZVKkz < GwBSu7; sZVKkz++) {
                    N6qSrzpX5mQo[YkYswUnAoxu][sZVKkz] = N6qSrzpX5mQo[YkYswUnAoxu +1][sZVKkz];
                }
            GwBSu7 = GwBSu7 -1;
        }
        while (GwBSu7 > 1);
        cout << j0Yeso << endl;
        GwBSu7 = XoqIgh5i79tw;
    }
    return 0;
}

