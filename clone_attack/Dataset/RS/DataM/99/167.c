void  main () {
    int n, jwNuspVDgB4, ZclwdxIQ6g5 = (370 - 370), m2 = 0, m3 = 0, m4 = 0, q;
    double  ARFed3z7fHZ;
    double  wYafyWVjx7;
    double  x3;
    double  mUvr2FTD;
    scanf ("%d", &n);
    q = n;
    for (; q > 0;) {
        scanf ("%d", &jwNuspVDgB4);
        if (jwNuspVDgB4 <= 18) {
            ZclwdxIQ6g5 = ZclwdxIQ6g5 +1;
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
        else if (jwNuspVDgB4 >= 19 && jwNuspVDgB4 <= 35) {
            m2++;
        }
        else if (jwNuspVDgB4 >= 36 && jwNuspVDgB4 <= (755 - 695)) {
            m3++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else if (jwNuspVDgB4 >= 61) {
            m4 = m4 + 1;
        }
        else
            printf ("data error\n");
        q = q - 1;
    }
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
    ARFed3z7fHZ = (double ) ZclwdxIQ6g5 / (double ) n * 100;
    printf ("1-18: %.2lf%%\n", ARFed3z7fHZ);
    wYafyWVjx7 = (double ) m2 / (double ) n * 100;
    x3 = (double ) m3 / (double ) n * 100;
    mUvr2FTD = (double ) m4 / (double ) n * 100;
    printf ("19-35: %.2lf%%\n", wYafyWVjx7);
    printf ("36-60: %.2lf%%\n", x3);
    printf ("60??: %.2lf%%\n", mUvr2FTD);
}

