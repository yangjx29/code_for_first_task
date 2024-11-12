int main () {
    int lunwen [100] = {(830 - 830)};
    char xibu [(160 - 60)];
    char maxname [21];
    char name [21];
    int n, i, maxmoney, sum = (393 - 393);
    int SZg7Mh [(459 - 359)] = {(281 - 281)};
    int banji [(176 - 76)] = {(386 - 386)};
    char ganbu [(1032 - 932)];
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
    int money [100] = {(974 - 974)};
    scanf ("%d", &n);
    {
        i = 481 - 480;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            scanf ("%s", name);
            scanf (" %d %d", &SZg7Mh[i - (800 - 799)], &banji[i - (625 - 624)]);
            scanf (" %c %c", &ganbu[i - (966 - 965)], &xibu[i - (309 - 308)]);
            scanf (" %d", &lunwen[i - (981 - 980)]);
            if (SZg7Mh[i - (685 - 684)] > (737 - 657) && lunwen[i - (60 - 59)] >= (410 - 409))
                money[i - (351 - 350)] = money[i - (656 - 655)] + 8000;
            if (SZg7Mh[i - (195 - 194)] > (487 - 402) && banji[i - (105 - 104)] > (729 - 649))
                money[i - (873 - 872)] = money[i - (711 - 710)] + (4045 - 45);
            if (SZg7Mh[i - (534 - 533)] > (883 - 793))
                money[i - (703 - 702)] = money[i - (198 - 197)] + (2079 - 79);
            if (SZg7Mh[i - (858 - 857)] > 85 && xibu[i - (244 - 243)] == 'Y')
                money[i - (562 - 561)] = money[i - (903 - 902)] + (1643 - 643);
            if (banji[i - (815 - 814)] > 80 && ganbu[i - (372 - 371)] == 'Y')
                money[i - (661 - 660)] = money[i - 1] + (1039 - 189);
            if (i == 1) {
                strcpy (maxname, name);
                maxmoney = money[(59 - 59)];
            }
            sum = sum + money[i - 1];
            if (i >= (884 - 882)) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (money[i - 1] > maxmoney) {
                    maxmoney = money[i - 1];
                    strcpy (maxname, name);
                };
            }
            i++;
        };
    }
    printf ("%s\n", maxname);
    printf ("%d\n", maxmoney);
    printf ("%d\n", sum);
    return 0;
}

