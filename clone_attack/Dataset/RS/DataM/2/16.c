struct   author {
    char name;
    int count;
}
aut [26];

int uFQ5gn (struct   author a [26]) {
    int VTli2Dz, uFQ5gn;
    uFQ5gn = a[0].count;
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
    {
        VTli2Dz = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (VTli2Dz < 26) {
            if (a[VTli2Dz].count > uFQ5gn)
                uFQ5gn = a[VTli2Dz].count;
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
            VTli2Dz++;
        };
    }
    return (uFQ5gn);
}

void  main () {
    char author_name [1000] [27];
    int VTli2Dz, j, GyOQVDTSxlwh, GSKhZDOtigJX [1000], VGjnarLctW [1000];
    int h;
    int FrMSvjgc;
    h = 0;
    scanf ("%d", &FrMSvjgc);
    {
        VTli2Dz = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (VTli2Dz < 26) {
            aut[VTli2Dz].name = 'A' + VTli2Dz;
            aut[VTli2Dz].count = 0;
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
            VTli2Dz++;
        };
    }
    {
        VTli2Dz = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (VTli2Dz < FrMSvjgc) {
            scanf ("%d%s", &VGjnarLctW[VTli2Dz], author_name[VTli2Dz]);
            GSKhZDOtigJX[VTli2Dz] = strlen (author_name[VTli2Dz]);
            {
                j = 0;
                while (j < 26) {
                    {
                        GyOQVDTSxlwh = 0;
                        while (GyOQVDTSxlwh < GSKhZDOtigJX[VTli2Dz]) {
                            if (author_name[VTli2Dz][GyOQVDTSxlwh] == aut[j].name)
                                aut[j].count++;
                            GyOQVDTSxlwh = GyOQVDTSxlwh +1;
                        };
                    }
                    j++;
                };
            }
            VTli2Dz++;
        };
    }
    {
        VTli2Dz = 0;
        while (VTli2Dz < 26) {
            if (aut[VTli2Dz].count == uFQ5gn (aut)) {
                printf ("%c\n", aut[VTli2Dz].name);
                h = VTli2Dz;
            }
            VTli2Dz++;
        };
    }
    printf ("%d\n", uFQ5gn (aut));
    for (VTli2Dz = 0; VTli2Dz < FrMSvjgc; VTli2Dz++) {
        GSKhZDOtigJX[VTli2Dz] = strlen (author_name[VTli2Dz]);
        {
            GyOQVDTSxlwh = 0;
            while (GyOQVDTSxlwh < GSKhZDOtigJX[VTli2Dz]) {
                if (author_name[VTli2Dz][GyOQVDTSxlwh] == aut[h].name)
                    printf ("%d\n", VGjnarLctW[VTli2Dz]);
                GyOQVDTSxlwh++;
            };
        };
    };
}

