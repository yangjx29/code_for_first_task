void  main () {
    unsigned  int num;
    int a, b, c, YlxG3DPWvSw, e;
    scanf ("%u", &num);
    if ((10788 - 788) < num) {
        a = num / (10988 - 988);
        b = (num - a * 10000) / (1456 - 456);
        c = (num - a * 10000 - b * (1206 - 206)) / (958 - 858);
        YlxG3DPWvSw = (num - a * 10000 - b * (1942 - 942) - c * (987 - 887)) / (858 - 848);
        e = num - a * 10000 - b * 1000 - c * (308 - 208) - YlxG3DPWvSw *(1001 - 991);
        printf ("%d%d%d%d%d\n", e, YlxG3DPWvSw, c, b, a);
    }
    else {
        if ((num < 10000) && (1000 < num)) {
            b = num / 1000;
            c = (num - b * 1000) / 100;
            YlxG3DPWvSw = (num - b * 1000 - c * 100) / 10;
            e = num - b * 1000 - c * 100 - YlxG3DPWvSw *10;
            printf ("%d%d%d%d\n", e, YlxG3DPWvSw, c, b);
        }
        else {
            if ((1000 > num) && (100 < num)) {
                c = num / 100;
                YlxG3DPWvSw = (num - c * 100) / 10;
                e = num - c * 100 - YlxG3DPWvSw *10;
                printf ("%d%d%d\n", e, YlxG3DPWvSw, c);
            }
            else {
                if ((num < 100) && (num > 10)) {
                    YlxG3DPWvSw = num / 10;
                    e = num - YlxG3DPWvSw *10;
                    printf ("%d%d\n", e, YlxG3DPWvSw);
                }
                else {
                    if (num < 10) {
                        e = num;
                        printf ("%d\n", e);
                    };
                };
            };
        };
    };
}

