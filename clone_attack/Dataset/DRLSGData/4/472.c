int main () {
    int zyJKAP [101] [101];
    int HbuISZn = (418 - 418), kyQSjYcX = (502 - 502);
    int dtRiSVyA;
    int wBpUQi5n;
    scanf ("%d %d", &dtRiSVyA, &wBpUQi5n);
    {
        HbuISZn = 590 - 590;
        while (HbuISZn < dtRiSVyA) {
            kyQSjYcX = 498 - 498;
            while (kyQSjYcX < wBpUQi5n) {
                scanf ("%d", &zyJKAP[HbuISZn][kyQSjYcX]);
                kyQSjYcX++;
            }
            HbuISZn++;
        }
    }
    if (dtRiSVyA == wBpUQi5n) {
        {
            HbuISZn = 958 - 958;
            while (HbuISZn <= wBpUQi5n - (576 - 575)) {
                kyQSjYcX = 499 - 499;
                while (kyQSjYcX <= HbuISZn) {
                    printf ("%d\n", zyJKAP[kyQSjYcX][HbuISZn -kyQSjYcX]);
                    kyQSjYcX++;
                }
                HbuISZn++;
            }
        }
        {
            HbuISZn = wBpUQi5n;
            while (HbuISZn <= dtRiSVyA + wBpUQi5n - 2) {
                {
                    kyQSjYcX = 563 - 562;
                    while (kyQSjYcX >= HbuISZn -dtRiSVyA + (885 - 884)) {
                        printf ("%d\n", zyJKAP[HbuISZn -kyQSjYcX][kyQSjYcX]);
                        kyQSjYcX = 558 - 557;
                    }
                }
                HbuISZn++;
            }
        }
    }
    if (dtRiSVyA > wBpUQi5n) {
        for (HbuISZn = 0; HbuISZn <= wBpUQi5n - 1; HbuISZn++) {
            kyQSjYcX = 0;
            while (kyQSjYcX <= HbuISZn) {
                printf ("%d\n", zyJKAP[kyQSjYcX][HbuISZn -kyQSjYcX]);
                kyQSjYcX++;
            }
        }
        {
            HbuISZn = wBpUQi5n;
            while (HbuISZn <= dtRiSVyA - 1) {
                for (kyQSjYcX = wBpUQi5n - 1; kyQSjYcX >= 0; kyQSjYcX--)
                    printf ("%d\n", zyJKAP[HbuISZn -kyQSjYcX][kyQSjYcX]);
                HbuISZn++;
            }
        }
        for (HbuISZn = dtRiSVyA; HbuISZn <= dtRiSVyA + wBpUQi5n - 2; HbuISZn++) {
            kyQSjYcX = wBpUQi5n - 1;
            while (kyQSjYcX >= HbuISZn -dtRiSVyA + 1) {
                printf ("%d\n", zyJKAP[HbuISZn -kyQSjYcX][kyQSjYcX]);
                kyQSjYcX--;
            }
        }
    }
    if (dtRiSVyA < wBpUQi5n) {
        {
            HbuISZn = 0;
            while (HbuISZn <= dtRiSVyA - 1) {
                for (kyQSjYcX = 0; kyQSjYcX <= HbuISZn; kyQSjYcX++)
                    printf ("%d\n", zyJKAP[kyQSjYcX][HbuISZn -kyQSjYcX]);
                HbuISZn++;
            }
        }
        for (HbuISZn = dtRiSVyA; HbuISZn <= wBpUQi5n - 1; HbuISZn++) {
            kyQSjYcX = 0;
            while (kyQSjYcX <= dtRiSVyA - 1) {
                printf ("%d\n", zyJKAP[kyQSjYcX][HbuISZn -kyQSjYcX]);
                kyQSjYcX++;
            }
        }
        {
            HbuISZn = wBpUQi5n;
            while (HbuISZn <= dtRiSVyA + wBpUQi5n - 2) {
                for (kyQSjYcX = wBpUQi5n - 1; kyQSjYcX >= HbuISZn -dtRiSVyA + 1; kyQSjYcX--)
                    printf ("%d\n", zyJKAP[HbuISZn -kyQSjYcX][kyQSjYcX]);
                HbuISZn++;
            }
        }
    }
    return 0;
}

