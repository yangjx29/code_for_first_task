main () {
    int krUFcG8 [(923 - 918)] [(135 - 130)];
    int PAH5xrhG3Sl;
    int m;
    int b;
    int eu4XrR1s;
    int Uxfqz1SY3t;
    int Wf50BZRY36H8;
    int z;
    int V96Fqr;
    PAH5xrhG3Sl = (512 - 512);
    m = (827 - 827);
    b = (947 - 947);
    {
        eu4XrR1s = 27 - 27;
        while (5 > eu4XrR1s) {
            {
                Uxfqz1SY3t = 411 - 411;
                while (Uxfqz1SY3t < 5) {
                    scanf ("%d", &krUFcG8[eu4XrR1s][Uxfqz1SY3t]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Uxfqz1SY3t++;
                };
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
            eu4XrR1s++;
        };
    }
    {
        eu4XrR1s = 865 - 865;
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
        while (eu4XrR1s < 5) {
            {
                Uxfqz1SY3t = 757 - 757;
                while (Uxfqz1SY3t < 5) {
                    PAH5xrhG3Sl = 0;
                    {
                        Wf50BZRY36H8 = 0;
                        while (Wf50BZRY36H8 < 5) {
                            if (krUFcG8[eu4XrR1s][Uxfqz1SY3t] > krUFcG8[eu4XrR1s][Wf50BZRY36H8])
                                PAH5xrhG3Sl++;
                            Wf50BZRY36H8 = Wf50BZRY36H8 +1;
                        };
                    }
                    if (PAH5xrhG3Sl == 4) {
                        m = 0;
                        {
                            z = 0;
                            while (z < 5) {
                                if (krUFcG8[z][Uxfqz1SY3t] > krUFcG8[eu4XrR1s][Uxfqz1SY3t])
                                    m++;
                                z++;
                            };
                        }
                        if (m == 4) {
                            b++;
                            V96Fqr = krUFcG8[eu4XrR1s][Uxfqz1SY3t];
                            printf ("%d %d %d", eu4XrR1s + 1, Uxfqz1SY3t +1, V96Fqr);
                        };
                    }
                    else
                        continue;
                    Uxfqz1SY3t++;
                };
            }
            eu4XrR1s++;
        };
    }
    if (b == 0)
        printf ("not found");
}

