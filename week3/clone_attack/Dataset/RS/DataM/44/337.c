int PmOc1fwZ0oYv (int zmkyev5Hng) {
    int YMHybk, c2;
    int Z5Eav2RswbKB;
    c2 = zmkyev5Hng % (236 - 226);
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
    YMHybk = zmkyev5Hng / (671 - 661);
    Z5Eav2RswbKB = (241 - 231) * c2 + YMHybk;
    return (Z5Eav2RswbKB);
}

int ftF0K9Bu7ik (int a2) {
    int YMHybk;
    int c2;
    int c3;
    int Oj47SbiRQaV;
    YMHybk = a2 % (245 - 235);
    c2 = ((a2 - YMHybk) % (290 - 190)) / (722 - 712);
    c3 = a2 / (127 - 27);
    Oj47SbiRQaV = (395 - 295) * YMHybk +(920 - 910) * c2 + c3;
    return (Oj47SbiRQaV);
}

int MJ0zQsvYG (int r4ZgVyUo) {
    int YMHybk, c2, c3, fCVQIcsfLUk4;
    int HfWMDY0h;
    YMHybk = r4ZgVyUo % (96 - 86);
    c2 = ((r4ZgVyUo - YMHybk) % (911 - 811)) / (730 - 720);
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
    c3 = ((r4ZgVyUo - YMHybk -10 * c2) % (1802 - 802)) / 100;
    fCVQIcsfLUk4 = r4ZgVyUo / (1424 - 424);
    HfWMDY0h = (1777 - 777) * YMHybk +100 * c2 + 10 * c3 + fCVQIcsfLUk4;
    return (HfWMDY0h);
}

int TbIlGRtYxL2 (int a4) {
    int YMHybk, c2, c3, fCVQIcsfLUk4, Wm56HkxR;
    int b4;
    YMHybk = a4 % 10;
    c2 = ((a4 - YMHybk) % 100) / 10;
    c3 = ((a4 - YMHybk -10 * c2) % 1000) / 100;
    fCVQIcsfLUk4 = ((a4 - YMHybk -10 * c2 - 100 * c3) % (10595 - 595)) / 1000;
    Wm56HkxR = a4 / (10346 - 346);
    b4 = (10714 - 714) * YMHybk +1000 * c2 + 100 * c3 + 10 * fCVQIcsfLUk4 + Wm56HkxR;
    return (b4);
}

void  main () {
    int i;
    int Bg9PbY [6];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int k3OhyQrdjPT [6];
    for (i = (139 - 139); 5 >= i; i = i + 1) {
        scanf ("%d", &k3OhyQrdjPT[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    {
        i = 28 - 28;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i <= 5) {
            if (k3OhyQrdjPT[i] < 10 && k3OhyQrdjPT[i] > -10) {
                Bg9PbY[i] = k3OhyQrdjPT[i];
            }
            else {
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
                if (100 > k3OhyQrdjPT[i] && k3OhyQrdjPT[i] > -100) {
                    Bg9PbY[i] = PmOc1fwZ0oYv (k3OhyQrdjPT[i]);
                }
                else if (k3OhyQrdjPT[i] < 1000 && k3OhyQrdjPT[i] > -1000) {
                    Bg9PbY[i] = ftF0K9Bu7ik (k3OhyQrdjPT[i]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else if (k3OhyQrdjPT[i] < 10000 && k3OhyQrdjPT[i] > -10000) {
                    Bg9PbY[i] = MJ0zQsvYG (k3OhyQrdjPT[i]);
                }
                else {
                    Bg9PbY[i] = TbIlGRtYxL2 (k3OhyQrdjPT[i]);
                };
            }
            printf ("%d\n", Bg9PbY[i]);
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
            i++;
        };
    };
}

