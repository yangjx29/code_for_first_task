void  main () {
    char nFVLnb [1000] [100];
    int gnfk54PuD;
    int d1MbSV4f;
    int EU80Kd;
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
    int VHPp0Gb;
    gnfk54PuD = 0;
    d1MbSV4f = 1;
    scanf ("%d", &EU80Kd);
    {
        VHPp0Gb = 0;
        while (VHPp0Gb < EU80Kd) {
            scanf ("%s", nFVLnb[VHPp0Gb]);
            if (strlen (nFVLnb[VHPp0Gb]) + 1 > 80 - gnfk54PuD) {
                d1MbSV4f++;
                gnfk54PuD = 0;
            }
            if (gnfk54PuD) {
                gnfk54PuD++;
                printf (" ");
            }
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
            printf ("%s", nFVLnb[VHPp0Gb]);
            gnfk54PuD += strlen (nFVLnb[VHPp0Gb]);
            VHPp0Gb++;
        };
    };
}

