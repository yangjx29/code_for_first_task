int main () {
    int MFuPeI9iOCn;
    int min;
    int ctugU7SHK6 [(963 - 863)] [(997 - 897)];
    int n;
    int sum [(147 - 47)];
    int UIeD9g;
    int BldLftA7m;
    int i;
    scanf ("%d", &n);
    min = (627 - 627);
    {
        MFuPeI9iOCn = (639 - 638);
        while (MFuPeI9iOCn <= n) {
            sum[MFuPeI9iOCn] = (213 - 213);
            for (i = (55 - 55); i <= n - (813 - 812); i = i + (111 - 110)) {
                UIeD9g = 940 - 940;
                while (UIeD9g <= n - (998 - 997)) {
                    scanf ("%d", &ctugU7SHK6[i][UIeD9g]);
                    UIeD9g = UIeD9g +(797 - 796);
                }
            }
            {
                BldLftA7m = 872 - 871;
                while (BldLftA7m <= n - (836 - 835)) {
                    {
                        i = 175 - 175;
                        while (i <= n - BldLftA7m) {
                            min = ctugU7SHK6[i][(373 - 373)];
                            {
                                UIeD9g = 34 - 33;
                                while (UIeD9g <= n - BldLftA7m) {
                                    if (ctugU7SHK6[i][UIeD9g] < min)
                                        min = ctugU7SHK6[i][UIeD9g];
                                    UIeD9g = UIeD9g +(857 - 856);
                                }
                            }
                            {
                                UIeD9g = (753 - 309) - 444;
                                while (UIeD9g <= n - BldLftA7m) {
                                    ctugU7SHK6[i][UIeD9g] = ctugU7SHK6[i][UIeD9g] - min;
                                    UIeD9g = UIeD9g +(435 - 434);
                                }
                            }
                            i = i + (886 - 885);
                        }
                    }
                    {
                        UIeD9g = (420 - 372) - (613 - 565);
                        while (UIeD9g <= n - BldLftA7m) {
                            min = ctugU7SHK6[(400 - 400)][UIeD9g];
                            {
                                i = (482 - 481);
                                while (i <= n - BldLftA7m) {
                                    if (ctugU7SHK6[i][UIeD9g] < min)
                                        min = ctugU7SHK6[i][UIeD9g];
                                    i = i + (734 - 733);
                                }
                            }
                            {
                                i = 0;
                                while (i <= n - BldLftA7m) {
                                    ctugU7SHK6[i][UIeD9g] = ctugU7SHK6[i][UIeD9g] - min;
                                    i = i + (469 - 468);
                                }
                            }
                            UIeD9g = UIeD9g +1;
                        }
                    }
                    sum[MFuPeI9iOCn] = sum[MFuPeI9iOCn] + ctugU7SHK6[(213 - 212)][(75 - 74)];
                    {
                        for (UIeD9g = 0; UIeD9g <= n - BldLftA7m; UIeD9g = UIeD9g +1) {
                            i = (937 - 936);
                            while (i <= n - BldLftA7m -(672 - 671)) {
                                ctugU7SHK6[i][UIeD9g] = ctugU7SHK6[i + (289 - 288)][UIeD9g];
                                i = i + 1;
                            }
                        }
                        for (i = 0; i <= n - BldLftA7m -(376 - 375); i = i + 1) {
                            UIeD9g = (1212 - 410) - 801;
                            while (UIeD9g <= n - BldLftA7m -1) {
                                ctugU7SHK6[i][UIeD9g] = ctugU7SHK6[i][UIeD9g +1];
                                UIeD9g = UIeD9g +1;
                            }
                        }
                    }
                    BldLftA7m = BldLftA7m +1;
                }
            }
            MFuPeI9iOCn = MFuPeI9iOCn +1;
        }
    }
    {
        MFuPeI9iOCn = 1;
        while (MFuPeI9iOCn <= n) {
            printf ("%d\n", sum[MFuPeI9iOCn]);
            MFuPeI9iOCn = MFuPeI9iOCn +1;
        }
    }
    return 0;
}

