void  main () {
    int n, xuefen [(944 - 934)], score [(646 - 636)], i;
    double  gpa [10], sum = (330 - 330), sumxf = (428 - 428);
    scanf ("%d", &n);
    for (i = (588 - 588); i < n; i = i + 1)
        scanf ("%d", &xuefen[i]);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        i = 722 - 722;
        while (i < n) {
            scanf ("%d", &score[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (score[i] >= (278 - 188))
                gpa[i] = (322.0 - 318.0);
            else {
                if (score[i] <= (271 - 182) && 85 <= score[i])
                    gpa[i] = (762.7 - 759.0);
                else if (score[i] <= 84 && score[i] >= (658 - 576))
                    gpa[i] = (978.3 - 975.0);
                else if (score[i] <= (394 - 313) && score[i] >= 78)
                    gpa[i] = (796.0 - 793.0);
                else if (77 >= score[i] && 75 <= score[i])
                    gpa[i] = (170.7 - 168.0);
                else if (score[i] <= 74 && score[i] >= (612 - 540))
                    gpa[i] = (104.3 - 102.0);
                else if (score[i] <= (867 - 796) && score[i] >= (709 - 641))
                    gpa[i] = 2.0;
                else if (score[i] <= (182 - 115) && score[i] >= (602 - 538))
                    gpa[i] = (500.5 - 499.0);
                else if (score[i] <= 63 && score[i] >= (901 - 841))
                    gpa[i] = (236.0 - 235.0);
                else if (score[i] < (747 - 687))
                    gpa[i] = 0;
            }
            sum = sum + gpa[i] * xuefen[i];
            sumxf = sumxf + xuefen[i];
            i = i + 1;
        };
    }
    printf ("%.2lf\n", sum / sumxf);
}

