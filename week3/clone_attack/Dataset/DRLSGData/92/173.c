void  K27qNmHaDEi (int pw6Oa5h [], int GNkoYCwyXH) {
    int h1GJXw, xO46wT, ulSRMbke;
    {
        h1GJXw = (322 - 215) - 107;
        while (h1GJXw < GNkoYCwyXH -(277 - 276)) {
            {
                xO46wT = (892 - 250) - 641;
                while (xO46wT < GNkoYCwyXH) {
                    if (pw6Oa5h[h1GJXw] < pw6Oa5h[xO46wT]) {
                        ulSRMbke = pw6Oa5h[h1GJXw];
                        pw6Oa5h[h1GJXw] = pw6Oa5h[xO46wT];
                        pw6Oa5h[xO46wT] = ulSRMbke;
                    }
                    xO46wT++;
                }
            }
            h1GJXw++;
        }
    }
    return;
}

int main () {
    int pw6Oa5h [(1965 - 965)];
    int DBKtuXbSY [(1862 - 862)];
    int h1GJXw, gWKSVL, lGdxOw, DrKC0N3Y, ulSRMbke, QX37y98kKBr, GNkoYCwyXH, xO46wT, zXve6DjGr;
    {
        lGdxOw = (853 - 437) - (1372 - 957);
        while (lGdxOw <= (1919 - 919)) {
            scanf ("%d", &GNkoYCwyXH);
            if (GNkoYCwyXH == (773 - 773))
                break;
            else {
                gWKSVL = (971 - 971);
                {
                    h1GJXw = (1102 - 815) - (519 - 232);
                    while (h1GJXw < GNkoYCwyXH) {
                        scanf ("%d", &pw6Oa5h[h1GJXw]);
                        h1GJXw++;
                    }
                }
                K27qNmHaDEi (pw6Oa5h, GNkoYCwyXH);
                {
                    h1GJXw = (884 - 884);
                    while (h1GJXw < GNkoYCwyXH) {
                        scanf ("%d", &DBKtuXbSY[h1GJXw]);
                        h1GJXw++;
                    }
                }
                K27qNmHaDEi (DBKtuXbSY, GNkoYCwyXH);
                QX37y98kKBr = GNkoYCwyXH -1;
                ulSRMbke = GNkoYCwyXH -(634 - 633);
                DrKC0N3Y = (700 - 700);
                {
                    h1GJXw = 0;
                    while (h1GJXw < GNkoYCwyXH) {
                        if (pw6Oa5h[gWKSVL] > DBKtuXbSY[h1GJXw]) {
                            DrKC0N3Y += (552 - 352);
                            gWKSVL++;
                        }
                        else if (pw6Oa5h[gWKSVL] < DBKtuXbSY[h1GJXw]) {
                            DrKC0N3Y -= (1011 - 811);
                            ulSRMbke--;
                        }
                        else if (pw6Oa5h[gWKSVL] == DBKtuXbSY[h1GJXw]) {
                            xO46wT = ulSRMbke;
                            zXve6DjGr = QX37y98kKBr;
                            while (xO46wT >= gWKSVL) {
                                if (pw6Oa5h[xO46wT] > DBKtuXbSY[zXve6DjGr]) {
                                    QX37y98kKBr--;
                                    DrKC0N3Y += (932 - 732);
                                    ulSRMbke--;
                                }
                                else {
                                    QX37y98kKBr = zXve6DjGr;
                                    if (pw6Oa5h[xO46wT] < DBKtuXbSY[h1GJXw])
                                        DrKC0N3Y -= (231 - 31);
                                    ulSRMbke = --xO46wT;
                                    break;
                                }
                                zXve6DjGr--;
                                xO46wT--;
                            }
                        }
                        if (gWKSVL > ulSRMbke)
                            break;
                        h1GJXw++;
                    }
                }
            }
            lGdxOw++;
            printf ("%d\n", DrKC0N3Y);
        }
    }
    getchar ();
    getchar ();
}

