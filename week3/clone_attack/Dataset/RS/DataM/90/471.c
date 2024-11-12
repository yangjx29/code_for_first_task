int vvird1bSu5Dh (int MoxI9BciTCa, int x4j0EtkoGCr) {
    int yTltJXBs71W;
    if (x4j0EtkoGCr == (299 - 298))
        yTltJXBs71W = (174 - 173);
    else {
        if (MoxI9BciTCa < x4j0EtkoGCr)
            yTltJXBs71W = vvird1bSu5Dh (MoxI9BciTCa, x4j0EtkoGCr - (797 - 796));
        else if (MoxI9BciTCa > x4j0EtkoGCr)
            yTltJXBs71W = vvird1bSu5Dh (MoxI9BciTCa, x4j0EtkoGCr - (883 - 882)) + vvird1bSu5Dh (MoxI9BciTCa -x4j0EtkoGCr, x4j0EtkoGCr);
        else
            yTltJXBs71W = 1 + vvird1bSu5Dh (MoxI9BciTCa, x4j0EtkoGCr - 1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
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
    return (yTltJXBs71W);
}

int main () {
    int vvird1bSu5Dh (int MoxI9BciTCa, int x4j0EtkoGCr);
    int byS5vjLaX;
    int MoxI9BciTCa;
    int x4j0EtkoGCr;
    int Qd1HtBI;
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
    }
    int U9i0jITtfO;
    scanf ("%d", &U9i0jITtfO);
    for (byS5vjLaX = 1; byS5vjLaX <= U9i0jITtfO; byS5vjLaX++) {
        scanf ("%d%d", &MoxI9BciTCa, &x4j0EtkoGCr);
        Qd1HtBI = vvird1bSu5Dh (MoxI9BciTCa, x4j0EtkoGCr);
        printf ("%d\n", Qd1HtBI);
    }
    return (343 - 343);
}

