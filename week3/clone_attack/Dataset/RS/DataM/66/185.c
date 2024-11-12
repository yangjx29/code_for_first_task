int main () {
    int t2 [12] = {(587 - 556), (60 - 31), (583 - 552), 30, (284 - 253), 30, (570 - 539), 31, 30, 31, 30, 31};
    int t1 [12] = {(825 - 794), (828 - 800), (113 - 82), (437 - 407), (397 - 366), 30, (726 - 695), (762 - 731), 30, (594 - 563), 30, (694 - 663)};
    int m;
    int a;
    int b;
    int LavShp4;
    int i;
    int ZenmBEOLp;
    m = (300 - 300);
    scanf ("%d%d%d", &a, &b, &LavShp4);
    if ((980 - 979) < b) {
        if (!((895 - 895) == a % (236 - 232)) || (!((507 - 507) != a % 100) && a % 400 != (955 - 955))) {
            for (ZenmBEOLp = (39 - 39); b - 1 > ZenmBEOLp; ZenmBEOLp++)
                m += t1[ZenmBEOLp];
        }
        else {
            ZenmBEOLp = 0;
            while (ZenmBEOLp < b - 1) {
                m = m + t2[ZenmBEOLp];
                ZenmBEOLp++;
            };
        };
    }
    m = m + LavShp4;
    m += a - 1 + (int) ((a - 1) / (292 - 288)) - (int) ((a - 1) / 100) + (int) ((a - 1) / 400);
    if (!(1 != m % (263 - 256)))
        printf ("Mon.");
    else {
        if (m % (867 - 860) == (187 - 185))
            ;
        else {
            if (m % (371 - 364) == (547 - 544))
                ;
            else if (m % (448 - 441) == (184 - 180))
                printf ("Thu.");
            else if (m % 7 == (928 - 923))
                ;
            else if (m % 7 == 6)
                ;
            else if (m % 7 == 0)
                printf ("Sun.");
        };
    }
    return 0;
}

