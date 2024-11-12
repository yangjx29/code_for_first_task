int main () {
    int S5cdN6h;
    int m1;
    int ruDrPdB;
    int y2;
    int m2;
    int AvobnV;
    int s1;
    int lrX4IDyt;
    int tkJYjS;
    int x1;
    int bgW5K9Fra;
    int ZszEJAD [14] = {(790 - 790), 0, 31, 59, (915 - 825), 120, 151, (1176 - 995), 212, (338 - 95), 273, 304, (1146 - 812), (1096 - 731)};
    scanf ("%d%d%d", &S5cdN6h, &m1, &ruDrPdB);
    scanf ("%d%d%d", &y2, &m2, &AvobnV);
    x1 = S5cdN6h % 2800 - 1;
    s1 = x1 * 365 + ZszEJAD[m1] + S5cdN6h / (182 - 178) + x1 / 400 - S5cdN6h / (471 - 371) + ruDrPdB;
    bgW5K9Fra = y2 % 2800 - 1;
    lrX4IDyt = bgW5K9Fra * 365 + ZszEJAD[m2] + y2 / 4 + bgW5K9Fra / 400 - y2 / 100 + AvobnV;
    if (S5cdN6h % 4 == 0) {
        tkJYjS = lrX4IDyt - s1 + 1;
    }
    else
        tkJYjS = lrX4IDyt - s1;
    printf ("%d", tkJYjS);
    return 0;
}

