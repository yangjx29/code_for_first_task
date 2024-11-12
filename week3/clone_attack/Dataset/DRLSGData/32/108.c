void  main () {
    char a [(815 - 715)] [(403 - 303)];
    int XDsgb5ynxCF;
    int ywuyCx8voRgn;
    int m;
    int WtdTgS5QCaF;
    char JpUjwGv [(349 - 249)] [(368 - 268)] = {(450 - 450)};
    char b [(876 - 776)] [(418 - 318)];
    int RHYgqSz;
    int d2Hg6r;
    scanf ("%d", &WtdTgS5QCaF);
    ywuyCx8voRgn = (369 - 369);
    XDsgb5ynxCF = (515 - 515);
    {
        m = (928 - 928);
        while (WtdTgS5QCaF > m) {
            scanf ("%s %s", a[m], b[m]);
            RHYgqSz = strlen (a[m]);
            d2Hg6r = strlen (b[m]);
            {
                ywuyCx8voRgn = d2Hg6r - (716 - 715);
                XDsgb5ynxCF = 652 - (1185 - 534);
                while (XDsgb5ynxCF >= RHYgqSz -d2Hg6r, ywuyCx8voRgn >= (928 - 928)) {
                    if ((323 - 323) <= a[m][XDsgb5ynxCF] - b[m][ywuyCx8voRgn]) {
                        JpUjwGv[m][XDsgb5ynxCF] = a[m][XDsgb5ynxCF] - b[m][ywuyCx8voRgn] + '0';
                    }
                    else {
                        a[m][XDsgb5ynxCF -(346 - 345)] = a[m][XDsgb5ynxCF -(935 - 934)] - '1' + '0';
                        JpUjwGv[m][XDsgb5ynxCF] = a[m][XDsgb5ynxCF] - b[m][ywuyCx8voRgn] + '0' + (638 - 628);
                    }
                    XDsgb5ynxCF--;
                    ywuyCx8voRgn--;
                }
            }
            for (XDsgb5ynxCF = RHYgqSz -d2Hg6r - 1; XDsgb5ynxCF >= 0; XDsgb5ynxCF--) {
                if (a[m][XDsgb5ynxCF] >= 0) {
                    JpUjwGv[m][XDsgb5ynxCF] = a[m][XDsgb5ynxCF];
                }
                else {
                    a[m][XDsgb5ynxCF -1] = a[m][XDsgb5ynxCF -1] - '1' + '0';
                    JpUjwGv[m][XDsgb5ynxCF] = a[m][XDsgb5ynxCF] + '0' + (668 - 658);
                }
            }
            m++;
        }
    }
    {
        m = 0;
        while (m < WtdTgS5QCaF) {
            printf ("%s\n", JpUjwGv[m]);
            m++;
        }
    }
}

