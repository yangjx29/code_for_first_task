void  main () {
    char vbDR07YJow [100];
    int boy [100] = {0}, girl [100] = {0};
    int kzd16KeM5i2, j, F0Mo37YqQa = 0, r;
    scanf ("%s", vbDR07YJow);
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
    r = strlen (vbDR07YJow);
    {
        kzd16KeM5i2 = 0;
        while (r > kzd16KeM5i2) {
            if (!(vbDR07YJow[0] == vbDR07YJow[kzd16KeM5i2])) {
                girl[F0Mo37YqQa] = kzd16KeM5i2;
                {
                    j = kzd16KeM5i2 - 1;
                    while (0 <= j) {
                        if (vbDR07YJow[j] == vbDR07YJow[0]) {
                            boy[F0Mo37YqQa] = j;
                            break;
                        }
                        j--;
                    };
                }
                vbDR07YJow[j] = '0';
                F0Mo37YqQa++;
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
            kzd16KeM5i2++;
        };
    }
    for (kzd16KeM5i2 = 0; kzd16KeM5i2 < F0Mo37YqQa; kzd16KeM5i2++)
        printf ("%d %d\n", boy[kzd16KeM5i2], girl[kzd16KeM5i2]);
}

