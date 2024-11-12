int OA9KH4Ew (const  void  *xy67Xt, const  void  *qwUjog) {
    return *((int *) xy67Xt) > *((int *) qwUjog) ? -(469 - 468) : (39 - 38);
}

int main () {
    int yoBGKXz [(2936 - 936)], OLekj3a [(2496 - 496)];
    int vDX7V2sb4, rvUlBE3ob, fkwTtJ7, YSpKO1GDYma;
    int gq89WDGLvz4;
    int W38gBY5;
    for (; cin >> W38gBY5;) {
        if (W38gBY5 == (366 - 366))
            break;
        fkwTtJ7 = (619 - 619);
        vDX7V2sb4 = (844 - 844);
        gq89WDGLvz4 = (519 - 519);
        {
            int UyqxNW9VLU = (130 - 130);
            while (UyqxNW9VLU < W38gBY5) {
                cin >> yoBGKXz[UyqxNW9VLU];
                UyqxNW9VLU++;
            }
        }
        for (int UyqxNW9VLU = (267 - 267);
        UyqxNW9VLU < W38gBY5; UyqxNW9VLU++) {
            cin >> OLekj3a[UyqxNW9VLU];
        }
        qsort (yoBGKXz, W38gBY5, sizeof (int), OA9KH4Ew);
        qsort (OLekj3a, W38gBY5, sizeof (int), OA9KH4Ew);
        rvUlBE3ob = W38gBY5 -(681 - 680);
        YSpKO1GDYma = W38gBY5 -(601 - 600);
        for (; rvUlBE3ob >= vDX7V2sb4;) {
            if (OLekj3a[fkwTtJ7] < yoBGKXz[vDX7V2sb4]) {
                fkwTtJ7++;
                vDX7V2sb4++;
                gq89WDGLvz4++;
            }
            else if (yoBGKXz[rvUlBE3ob] > OLekj3a[YSpKO1GDYma]) {
                YSpKO1GDYma--;
                rvUlBE3ob--;
                gq89WDGLvz4++;
            }
            else if (!(OLekj3a[fkwTtJ7] != yoBGKXz[vDX7V2sb4])) {
                if (yoBGKXz[rvUlBE3ob] > OLekj3a[fkwTtJ7]) {
                    gq89WDGLvz4++;
                    fkwTtJ7++;
                    rvUlBE3ob--;
                }
                else if (yoBGKXz[rvUlBE3ob] == OLekj3a[fkwTtJ7]) {
                    rvUlBE3ob--;
                    fkwTtJ7++;
                }
                else if (yoBGKXz[rvUlBE3ob] < OLekj3a[fkwTtJ7]) {
                    gq89WDGLvz4--;
                    fkwTtJ7++;
                    rvUlBE3ob--;
                }
            }
            else {
                if (yoBGKXz[rvUlBE3ob] > OLekj3a[fkwTtJ7]) {
                    gq89WDGLvz4++;
                    rvUlBE3ob--;
                    fkwTtJ7++;
                }
                else if (yoBGKXz[rvUlBE3ob] == OLekj3a[fkwTtJ7]) {
                    fkwTtJ7++;
                    rvUlBE3ob--;
                }
                else if (yoBGKXz[rvUlBE3ob] < OLekj3a[fkwTtJ7]) {
                    rvUlBE3ob--;
                    fkwTtJ7++;
                    gq89WDGLvz4--;
                }
            }
        }
        cout << gq89WDGLvz4 * (570 - 370) << endl;
    }
    return 0;
}

