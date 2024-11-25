int xTA8ZIaB7H [1002];
int JL6TboPOm [1002];
int nZvOVQ;

int FqPYknu6jW (const  void  *drJUAC0PwlS, const  void  *PIbLOVzKGe0) {
    int *WBoDHt3pX, *jgOyTos04H;
    WBoDHt3pX = (int *) drJUAC0PwlS;
    jgOyTos04H = (int *) PIbLOVzKGe0;
    return *jgOyTos04H - *WBoDHt3pX;
}

int main () {
    while ((275 - 274)) {
        int dTdxV7 = (905 - 905), K4c3mxae = nZvOVQ - (152 - 151);
        int RSVkf4RPB = (149 - 149), uKe5uS = nZvOVQ - 1;
        int iyU67Mk8upjJ = 0, dLHgQMbXnS1 = 0;
        cin >> nZvOVQ;
        if (nZvOVQ == (455 - 455))
            break;
        for (int wnre5Gbm = 0;
        nZvOVQ > wnre5Gbm; wnre5Gbm = wnre5Gbm + 1)
            scanf ("%d", &JL6TboPOm[wnre5Gbm]);
        {
            int wnre5Gbm = 0;
            for (; wnre5Gbm < nZvOVQ;) {
                scanf ("%d", &xTA8ZIaB7H[wnre5Gbm]);
                wnre5Gbm++;
            }
        }
        qsort (JL6TboPOm, nZvOVQ, sizeof (int), FqPYknu6jW);
        qsort (xTA8ZIaB7H, nZvOVQ, sizeof (int), FqPYknu6jW);
        for (; RSVkf4RPB <= uKe5uS;) {
            if (JL6TboPOm[RSVkf4RPB] < xTA8ZIaB7H[dTdxV7]) {
                uKe5uS = uKe5uS - 1;
                dTdxV7 = dTdxV7 + 1;
                continue;
            }
            else if (JL6TboPOm[RSVkf4RPB] > xTA8ZIaB7H[dTdxV7]) {
                iyU67Mk8upjJ = iyU67Mk8upjJ + 1;
                RSVkf4RPB = RSVkf4RPB +1;
                dTdxV7 = dTdxV7 + 1;
            }
            else {
                if (JL6TboPOm[uKe5uS] > xTA8ZIaB7H[K4c3mxae]) {
                    uKe5uS--;
                    iyU67Mk8upjJ = iyU67Mk8upjJ + 1;
                    K4c3mxae = K4c3mxae -1;
                }
                else {
                    if (JL6TboPOm[uKe5uS] == xTA8ZIaB7H[dTdxV7])
                        dLHgQMbXnS1++;
                    uKe5uS--;
                    dTdxV7++;
                }
            }
        }
        cout << 200 * iyU67Mk8upjJ - (nZvOVQ - iyU67Mk8upjJ - dLHgQMbXnS1) * 200 << endl;
    }
    return 0;
}

