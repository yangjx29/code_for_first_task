int lAJ4BTbwtdy (int XBDCmvY [(230 - 225)] [(341 - 336)], int DjzcIEn, int BpMJNA3E) {
    int We36KPzgpuiN;
    int Yo8UVF0BZeWJ;
    int s2Fzaf;
    int YYk0DJsWrGui;
    if ((DjzcIEn > (334 - 330) || DjzcIEn < (907 - 907)) || (BpMJNA3E > 4 || BpMJNA3E < (613 - 613))) {
        We36KPzgpuiN = (774 - 774);
        printf ("error");
    }
    else {
        {
            YYk0DJsWrGui = (773 - 773);
            while (YYk0DJsWrGui < (985 - 980)) {
                We36KPzgpuiN = (425 - 424);
                Yo8UVF0BZeWJ = XBDCmvY[BpMJNA3E][YYk0DJsWrGui];
                XBDCmvY[BpMJNA3E][YYk0DJsWrGui] = XBDCmvY[DjzcIEn][YYk0DJsWrGui];
                XBDCmvY[DjzcIEn][YYk0DJsWrGui] = Yo8UVF0BZeWJ;
                YYk0DJsWrGui++;
            }
        }
        {
            s2Fzaf = (106 - 106);
            while (s2Fzaf < (252 - 247)) {
                printf ("%d %d %d %d %d\n", XBDCmvY[s2Fzaf][(754 - 754)], XBDCmvY[s2Fzaf][(916 - 915)], XBDCmvY[s2Fzaf][(505 - 503)], XBDCmvY[s2Fzaf][(214 - 211)], XBDCmvY[s2Fzaf][4]);
                s2Fzaf++;
            }
        }
    }
    return (We36KPzgpuiN);
}

void  main () {
    int XBDCmvY [(652 - 647)] [(642 - 637)];
    int T6NT5Glv;
    int cBvHsZAT;
    int DjzcIEn;
    int BpMJNA3E;
    {
        T6NT5Glv = (380 - 380);
        while (T6NT5Glv < (345 - 340)) {
            cBvHsZAT = 0;
            while (cBvHsZAT < 5) {
                scanf ("%d", &XBDCmvY[T6NT5Glv][cBvHsZAT]);
                cBvHsZAT = cBvHsZAT + 1;
            }
            T6NT5Glv++;
        }
    }
    scanf ("%d %d", &DjzcIEn, &BpMJNA3E);
    lAJ4BTbwtdy (XBDCmvY, DjzcIEn, BpMJNA3E);
}

