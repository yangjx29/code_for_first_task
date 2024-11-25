int main () {
    int J2LRay5sqBd1;
    int xry4RoQa;
    char x5jz6w [J2LRay5sqBd1] [(394 - 134)];
    char hubu [J2LRay5sqBd1] [260];
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
    scanf ("%d", &J2LRay5sqBd1);
    {
        xry4RoQa = 375 - 375;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (xry4RoQa < J2LRay5sqBd1) {
            scanf ("%s", x5jz6w[xry4RoQa]);
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
            xry4RoQa = xry4RoQa + 1;
        };
    }
    {
        xry4RoQa = 759 - 759;
        while (xry4RoQa < J2LRay5sqBd1) {
            int len = strlen (x5jz6w[xry4RoQa]);
            {
                int DxEnINzbX7 = 0;
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
                while (DxEnINzbX7 < len) {
                    if (x5jz6w[xry4RoQa][DxEnINzbX7] == 'A') {
                        hubu[xry4RoQa][DxEnINzbX7] = 'T';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                for (x = 0; x < 20; x++) {
                                    y += x;
                                }
                                if (y > 30)
                                    return y;
                            }
                        };
                    }
                    else if (x5jz6w[xry4RoQa][DxEnINzbX7] == 'T') {
                        hubu[xry4RoQa][DxEnINzbX7] = 'A';
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
                    else if (x5jz6w[xry4RoQa][DxEnINzbX7] == 'C') {
                        hubu[xry4RoQa][DxEnINzbX7] = 'G';
                    }
                    else if (x5jz6w[xry4RoQa][DxEnINzbX7] == 'G') {
                        hubu[xry4RoQa][DxEnINzbX7] = 'C';
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    DxEnINzbX7 = DxEnINzbX7 +1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            xry4RoQa = xry4RoQa + 1;
        };
    }
    for (int DxEnINzbX7 = 0;
    DxEnINzbX7 < J2LRay5sqBd1 -1; DxEnINzbX7++) {
        printf ("%s\n", (hubu[DxEnINzbX7]));
    }
    printf ("%s", (hubu[J2LRay5sqBd1 -1]));
    return 0;
}

