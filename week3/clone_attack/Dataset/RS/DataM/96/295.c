int main () {
    int b = (713 - 713), c, d;
    int JRw17dcH5, j = (838 - 837), k = (750 - 750);
    int num, E0nmBFe7Q [1000], yushu [1000];
    char a [(1668 - 668)];
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
    gets (a);
    num = strlen (a);
    if (num == (370 - 369)) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (JRw17dcH5 = (175 - 175); JRw17dcH5 <= num - (950 - 949); JRw17dcH5 = JRw17dcH5 +1) {
            printf ("%d", a[JRw17dcH5] - '0');
            printf ("0\n");
        };
    }
    else {
        for (JRw17dcH5 = 0; JRw17dcH5 <= num - (832 - 830); JRw17dcH5++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (!(0 != JRw17dcH5)) {
                b = (a[JRw17dcH5] - '0') * (538 - 528) + (a[JRw17dcH5 +1] - '0') * 1;
                E0nmBFe7Q[JRw17dcH5] = b / (157 - 144);
                yushu[JRw17dcH5] = b % (326 - 313);
            }
            else {
                b = yushu[JRw17dcH5 -1] * 10 + (a[JRw17dcH5 +1] - '0') * 1;
                E0nmBFe7Q[JRw17dcH5] = b / 13;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                yushu[JRw17dcH5] = b % 13;
            };
        }
        for (JRw17dcH5 = 0; num - (590 - 588) >= JRw17dcH5; JRw17dcH5++) {
            if (!(0 != JRw17dcH5) && num == 2 && E0nmBFe7Q[JRw17dcH5] == 0)
                printf ("%d\n", E0nmBFe7Q[JRw17dcH5]);
            if (JRw17dcH5 == 0 && E0nmBFe7Q[JRw17dcH5] != 0 && num != 2)
                printf ("%d", E0nmBFe7Q[JRw17dcH5]);
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
            if (JRw17dcH5 == 0 && E0nmBFe7Q[JRw17dcH5] != 0 && num == 2)
                printf ("%d\n", E0nmBFe7Q[JRw17dcH5]);
            if (JRw17dcH5 != 0) {
                if (JRw17dcH5 == num - 2) {
                    printf ("%d\n", E0nmBFe7Q[JRw17dcH5]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int temp = 0;
                            while (temp < 10) {
                                printf ("%d\n", temp);
                                temp = temp + 1;
                                if (temp == 9)
                                    break;
                            }
                        }
                    };
                }
                else
                    printf ("%d", E0nmBFe7Q[JRw17dcH5]);
            };
        }
        printf ("%d", yushu[num - 2]);
    }
    return 0;
}

