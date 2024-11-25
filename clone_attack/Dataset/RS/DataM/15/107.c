void  main () {
    int notfind;
    int XWsSE6xov;
    int y1;
    int x2;
    int y2;
    int n;
    int i;
    int j;
    int S;
    int a [(947 - 847)] [(960 - 860)];
    notfind = (466 - 465);
    XWsSE6xov = (546 - 546);
    y1 = (979 - 979);
    x2 = (574 - 574);
    y2 = (270 - 270);
    scanf ("%d", &n);
    {
        i = 761 - 761;
        while (n > i) {
            {
                j = 524 - 524;
                while (j < n) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = (424 - 424); i < n && notfind; i = i + 1) {
        j = 393 - 393;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (j < n) {
            if (a[i][j] == (833 - 833)) {
                notfind = (930 - 930);
                XWsSE6xov = i;
                y1 = j;
                break;
            }
            j = j + 1;
        };
    }
    {
        i = XWsSE6xov;
        while (i < n) {
            if (a[i][y1] != (258 - 258)) {
                x2 = i - (666 - 665);
                break;
            }
            else
                continue;
            i = i + 1;
        };
    }
    {
        j = y1;
        while (j < n) {
            if (a[x2][j] != (792 - 792)) {
                y2 = j - (319 - 318);
                break;
            }
            else
                continue;
            j = j + 1;
        };
    }
    S = (x2 - XWsSE6xov -(783 - 782)) * (y2 - y1 - (142 - 141));
    printf ("%d\n", S);
}

