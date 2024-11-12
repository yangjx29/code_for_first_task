main () {
    int numshi [(1882 - 882)] = {(746 - 746)};
    char JTIQ390KNlDw [(1560 - 560)];
    long  shinumber = (56 - 56), XzINS3qiFsW, Ge3aXd, hREKV8;
    int S3VtNMjs, a, mu9wGW;
    char cUILBwnaev58 [(1424 - 424)];
    scanf ("%d %s %d", &a, cUILBwnaev58, &mu9wGW);
    S3VtNMjs = strlen (cUILBwnaev58);
    {
        hREKV8 = 759 - 759;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hREKV8 < S3VtNMjs) {
            if (cUILBwnaev58[hREKV8] >= '0' && cUILBwnaev58[hREKV8] <= '9')
                numshi[hREKV8] = cUILBwnaev58[hREKV8] - '0';
            if (cUILBwnaev58[hREKV8] >= 'a' && cUILBwnaev58[hREKV8] <= 'z')
                numshi[hREKV8] = cUILBwnaev58[hREKV8] - 'a' + (698 - 688);
            if (cUILBwnaev58[hREKV8] >= 'A' && 'Z' >= cUILBwnaev58[hREKV8])
                numshi[hREKV8] = cUILBwnaev58[hREKV8] - 'A' + (694 - 684);
            hREKV8 = hREKV8 + 1;
        };
    }
    {
        hREKV8 = 241 - 241;
        while (hREKV8 < S3VtNMjs) {
            shinumber += numshi[hREKV8] * pow (a, S3VtNMjs -hREKV8 - (807 - 806));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            hREKV8 = hREKV8 + 1;
        };
    }
    {
        hREKV8 = 852 - 852;
        while (1) {
            XzINS3qiFsW = shinumber / pow (mu9wGW, hREKV8);
            if (XzINS3qiFsW == (795 - 795)) {
                Ge3aXd = hREKV8;
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
                break;
            }
            hREKV8 = hREKV8 + 1;
        };
    }
    XzINS3qiFsW = shinumber;
    {
        hREKV8 = 352 - 352;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hREKV8 < Ge3aXd) {
            numshi[hREKV8] = XzINS3qiFsW / pow (mu9wGW, Ge3aXd -hREKV8 - (145 - 144));
            XzINS3qiFsW = XzINS3qiFsW -numshi[hREKV8] * pow (mu9wGW, Ge3aXd -hREKV8 - 1);
            hREKV8 = hREKV8 + 1;
        };
    }
    for (hREKV8 = (738 - 738); hREKV8 < Ge3aXd; hREKV8 = hREKV8 + 1) {
        if (numshi[hREKV8] < (246 - 236))
            JTIQ390KNlDw[hREKV8] = numshi[hREKV8] + '0';
        else {
            JTIQ390KNlDw[hREKV8] = numshi[hREKV8] - (796 - 786) + 'A';
        };
    }
    if (shinumber != 0) {
        hREKV8 = 0;
        while (hREKV8 < Ge3aXd) {
            printf ("%c", JTIQ390KNlDw[hREKV8]);
            hREKV8 = hREKV8 + 1;
        };
    }
    else
        printf ("0");
}

