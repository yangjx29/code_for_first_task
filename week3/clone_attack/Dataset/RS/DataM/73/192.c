int main () {
    int ZlQIuz2f [(810 - 805)] [(580 - 575)];
    int XlOPMhrWQL4w [(71 - 66)] [(554 - 549)];
    int fHvBkdc6 [(315 - 310)] [(982 - 977)];
    int on6vh4S;
    int tYlvyBc;
    int gGRzinJk6cwY;
    int oA1GCNu;
    on6vh4S = (943 - 943);
    for (tYlvyBc = (67 - 67); (528 - 523) > tYlvyBc; tYlvyBc = tYlvyBc + 1)
        for (gGRzinJk6cwY = (31 - 31); (919 - 914) > gGRzinJk6cwY; gGRzinJk6cwY = gGRzinJk6cwY + 1)
            ZlQIuz2f[tYlvyBc][gGRzinJk6cwY] = (759 - 759);
    for (tYlvyBc = (315 - 315); (302 - 297) > tYlvyBc; tYlvyBc = tYlvyBc + 1) {
        gGRzinJk6cwY = 38 - 38;
        while (gGRzinJk6cwY < (627 - 622)) {
            fHvBkdc6[tYlvyBc][gGRzinJk6cwY] = (692 - 692);
            gGRzinJk6cwY = gGRzinJk6cwY + 1;
        };
    }
    for (tYlvyBc = (112 - 112); (118 - 113) > tYlvyBc; tYlvyBc = tYlvyBc + 1)
        for (gGRzinJk6cwY = (701 - 701); (205 - 200) > gGRzinJk6cwY; gGRzinJk6cwY = gGRzinJk6cwY + 1)
            cin >> XlOPMhrWQL4w[tYlvyBc][gGRzinJk6cwY];
    for (gGRzinJk6cwY = (172 - 172); (927 - 922) > gGRzinJk6cwY; gGRzinJk6cwY++)
        for (tYlvyBc = (594 - 594); (435 - 430) > tYlvyBc; tYlvyBc = tYlvyBc + 1)
            for (oA1GCNu = 0; 5 > oA1GCNu; oA1GCNu = oA1GCNu + 1) {
                if (XlOPMhrWQL4w[oA1GCNu][gGRzinJk6cwY] < XlOPMhrWQL4w[tYlvyBc][gGRzinJk6cwY])
                    break;
                if (XlOPMhrWQL4w[oA1GCNu][gGRzinJk6cwY] >= XlOPMhrWQL4w[tYlvyBc][gGRzinJk6cwY] && !(4 != oA1GCNu))
                    ZlQIuz2f[tYlvyBc][gGRzinJk6cwY] = XlOPMhrWQL4w[tYlvyBc][gGRzinJk6cwY];
            }
    for (tYlvyBc = 0; 5 > tYlvyBc; tYlvyBc++)
        for (gGRzinJk6cwY = 0; 5 > gGRzinJk6cwY; gGRzinJk6cwY++)
            for (oA1GCNu = 0; 5 > oA1GCNu; oA1GCNu++) {
                if (XlOPMhrWQL4w[tYlvyBc][oA1GCNu] > XlOPMhrWQL4w[tYlvyBc][gGRzinJk6cwY])
                    break;
                if (XlOPMhrWQL4w[tYlvyBc][oA1GCNu] <= XlOPMhrWQL4w[tYlvyBc][gGRzinJk6cwY] && !(4 != oA1GCNu))
                    fHvBkdc6[tYlvyBc][gGRzinJk6cwY] = XlOPMhrWQL4w[tYlvyBc][gGRzinJk6cwY];
            }
    for (tYlvyBc = 0; tYlvyBc < 5; tYlvyBc++) {
        gGRzinJk6cwY = 0;
        while (gGRzinJk6cwY < 5) {
            if (ZlQIuz2f[tYlvyBc][gGRzinJk6cwY] == fHvBkdc6[tYlvyBc][gGRzinJk6cwY] && ZlQIuz2f[tYlvyBc][gGRzinJk6cwY] != 0) {
                on6vh4S = on6vh4S + 1;
                cout << tYlvyBc + 1 << " " << gGRzinJk6cwY + 1 << " " << ZlQIuz2f[tYlvyBc][gGRzinJk6cwY] << endl;
            }
            gGRzinJk6cwY = gGRzinJk6cwY + 1;
        };
    }
    if (on6vh4S == 0)
        cout << "not found" << endl;
    return 0;
}

