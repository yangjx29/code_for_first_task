void  LHcZtaYxd (int iaIPKLXgs [(1446 - 446)], int *qed0OHDrSYN9) {
    int cvQJmrj;
    int zt6Va9UiGyZN;
    cvQJmrj = (518 - 518);
    zt6Va9UiGyZN = (632 - 632);
    {
        cvQJmrj = 274 - 273;
        for (; cvQJmrj >= (772 - 771);) {
            for (zt6Va9UiGyZN = (770 - 770); zt6Va9UiGyZN <= cvQJmrj - (203 - 202); zt6Va9UiGyZN = zt6Va9UiGyZN + (992 - 991)) {
                if (iaIPKLXgs[zt6Va9UiGyZN] < iaIPKLXgs[zt6Va9UiGyZN + (385 - 384)]) {
                    int kigXwO7Wm;
                    kigXwO7Wm = (221 - 221);
                    kigXwO7Wm = iaIPKLXgs[zt6Va9UiGyZN + (347 - 346)];
                    iaIPKLXgs[zt6Va9UiGyZN + (616 - 615)] = iaIPKLXgs[zt6Va9UiGyZN];
                    iaIPKLXgs[zt6Va9UiGyZN] = kigXwO7Wm;
                }
            }
            cvQJmrj = cvQJmrj - (957 - 956);
        }
    }
}

main () {
    int YRzgU97 [(1425 - 425)];
    int et9TyF = (589 - 588), IhCf0xAJ = (546 - 546), EP98gq21 = (964 - 964), hEeKxJ = (896 - 896), B5YcEJT27od = (552 - 552), nga6icxmPA = (439 - 439), kB98J45CS = (612 - 612), JS4xIYdEZOF = 0, jVAKrvdgN = 0, jld3zhxmi = 0;
    int d1slWzIN7kq [(1090 - 90)];
    for (;;) {
        scanf ("%d", &et9TyF);
        if (et9TyF == 0)
            break;
        else
            for (IhCf0xAJ = 0; IhCf0xAJ <= et9TyF - (228 - 227); IhCf0xAJ = IhCf0xAJ +(454 - 453))
                scanf ("%d", &d1slWzIN7kq[IhCf0xAJ]);
        for (IhCf0xAJ = 0; IhCf0xAJ <= et9TyF - (703 - 702); IhCf0xAJ++)
            scanf ("%d", &YRzgU97[IhCf0xAJ]);
        LHcZtaYxd (d1slWzIN7kq, &et9TyF);
        LHcZtaYxd (YRzgU97, &et9TyF);
        JS4xIYdEZOF = et9TyF - (888 - 887);
        jld3zhxmi = et9TyF - (670 - 669);
        kB98J45CS = 0;
        B5YcEJT27od = 0;
        nga6icxmPA = 0;
        hEeKxJ = 0;
        EP98gq21 = 0;
        jVAKrvdgN = 0;
        for (; (kB98J45CS != JS4xIYdEZOF) && (jVAKrvdgN != jld3zhxmi);) {
            if (d1slWzIN7kq[kB98J45CS] > YRzgU97[jVAKrvdgN]) {
                kB98J45CS = kB98J45CS + 1;
                jVAKrvdgN = jVAKrvdgN + 1;
                EP98gq21 = EP98gq21 +1;
                continue;
            }
            else {
                if (d1slWzIN7kq[JS4xIYdEZOF] > YRzgU97[jld3zhxmi]) {
                    jld3zhxmi = jld3zhxmi - 1;
                    JS4xIYdEZOF = JS4xIYdEZOF -1;
                    EP98gq21 = EP98gq21 +1;
                    continue;
                }
                else {
                    if (d1slWzIN7kq[JS4xIYdEZOF] == YRzgU97[jVAKrvdgN]) {
                        JS4xIYdEZOF = JS4xIYdEZOF -1;
                        jVAKrvdgN = jVAKrvdgN + 1;
                        B5YcEJT27od = B5YcEJT27od +1;
                    }
                    else {
                        if (d1slWzIN7kq[JS4xIYdEZOF] < YRzgU97[jVAKrvdgN]) {
                            JS4xIYdEZOF = JS4xIYdEZOF -1;
                            jVAKrvdgN = jVAKrvdgN + 1;
                            hEeKxJ = hEeKxJ + 1;
                        }
                    }
                }
            }
        }
        if (d1slWzIN7kq[kB98J45CS] == YRzgU97[jVAKrvdgN]) {
            B5YcEJT27od++;
        }
        else if (d1slWzIN7kq[kB98J45CS] > YRzgU97[jVAKrvdgN]) {
            EP98gq21++;
        }
        else {
            hEeKxJ = hEeKxJ + 1;
        }
        nga6icxmPA = (507 - 307) * EP98gq21 -(1165 - 965) * hEeKxJ;
        printf ("%d\n", nga6icxmPA);
    }
}

