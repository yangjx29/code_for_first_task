void  main () {
    int a;
    int zOSwmxTAY925;
    int zQsyX71iNjx;
    int a2;
    int a3;
    int a4;
    int a5;
    scanf ("%d", &a);
    zQsyX71iNjx = a / (10037 - 37);
    a2 = (a - zQsyX71iNjx * 10000) / (1526 - 526);
    a3 = (a - zQsyX71iNjx * 10000 - a2 * (1329 - 329)) / (890 - 790);
    a4 = (a - zQsyX71iNjx * 10000 - a2 * 1000 - a3 * (805 - 705)) / (241 - 231);
    a5 = a - zQsyX71iNjx * 10000 - a2 * 1000 - a3 * 100 - a4 * 10;
    if (!((365 - 365) != zQsyX71iNjx) && a2 == (847 - 847) && a3 == (99 - 99) && a4 == (586 - 586) && a5 > (995 - 995))
        zOSwmxTAY925 = a5;
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (zQsyX71iNjx == 0 && a2 == 0 && a3 == 0 && a4 > 0 && a5 > 0)
            zOSwmxTAY925 = a5 * 10 + a4;
        else {
            if (zQsyX71iNjx == 0 && a2 == 0 && a3 > 0 && a4 > 0 && a5 > 0)
                zOSwmxTAY925 = a5 * 100 + a4 * 10 + a3;
            else {
                if (zQsyX71iNjx == 0 && a2 > 0 && a3 > 0 && a4 > 0 && a5 > 0)
                    zOSwmxTAY925 = a5 * 1000 + a4 * 100 + a3 * 10 + a2;
                else {
                    zOSwmxTAY925 = a5 * 10000 + a4 * 1000 + a3 * 100 + a2 * 10 + zQsyX71iNjx;
                };
            };
        };
    }
    printf ("%d", zOSwmxTAY925);
}

