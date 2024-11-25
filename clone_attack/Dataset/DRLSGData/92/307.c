int BgBbXDVQr (const  void  *hYqPZx, const  void  *d7xRzHNOJ) {
    return *(int*) d7xRzHNOJ - *(int*) hYqPZx;
}

int main () {
    int twLY7VXKOGBh [1001];
    int tnSMtGyQzd3 [1001];
    int SG4oWpNH, Vd8jOc5, zZy7dl0eo9;
    for (; cin >> SG4oWpNH;) {
        zZy7dl0eo9 = 0;
        if (!(0 != SG4oWpNH))
            break;
        {
            Vd8jOc5 = 0;
            for (; SG4oWpNH > Vd8jOc5;) {
                scanf ("%d", &tnSMtGyQzd3[Vd8jOc5]);
                Vd8jOc5 = Vd8jOc5 +1;
            }
        }
        {
            Vd8jOc5 = 0;
            for (; SG4oWpNH > Vd8jOc5;) {
                scanf ("%d", &twLY7VXKOGBh[Vd8jOc5]);
                Vd8jOc5 = Vd8jOc5 +1;
            }
        }
        qsort (twLY7VXKOGBh, SG4oWpNH, sizeof (int), BgBbXDVQr);
        qsort (tnSMtGyQzd3, SG4oWpNH, sizeof (int), BgBbXDVQr);
        int z7YkPiqF = 0, QBT4CX8AF = SG4oWpNH -1, hRECaN2 = 0, ddSgyJ1CN = SG4oWpNH -1;
        for (; QBT4CX8AF >= z7YkPiqF;) {
            if (tnSMtGyQzd3[hRECaN2] > twLY7VXKOGBh[z7YkPiqF]) {
                z7YkPiqF = z7YkPiqF + 1;
                hRECaN2++;
                zZy7dl0eo9 = zZy7dl0eo9 + 200;
            }
            else {
                if (twLY7VXKOGBh[QBT4CX8AF] < tnSMtGyQzd3[ddSgyJ1CN]) {
                    QBT4CX8AF = QBT4CX8AF -1;
                    ddSgyJ1CN = ddSgyJ1CN - 1;
                    zZy7dl0eo9 += 200;
                }
                else {
                    if (twLY7VXKOGBh[z7YkPiqF] > tnSMtGyQzd3[ddSgyJ1CN])
                        zZy7dl0eo9 -= 200;
                    z7YkPiqF = z7YkPiqF + 1;
                    ddSgyJ1CN = ddSgyJ1CN - 1;
                }
            }
        }
        cout << zZy7dl0eo9 << endl;
    }
    return 0;
}

