void  main () {
    int cE42yL;
    cE42yL = (563 - 563);
    int Bgcma3DqkIU0;
    int Ps2plV;
    int j;
    Bgcma3DqkIU0 = (351 - 351);
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
    Ps2plV = (442 - 442);
    char out [50] [50];
    char nsoi3Zf [50] [50];
    char uHQkJdn9gE [(1035 - 985)] [(651 - 601)];
    for (; !(EOF == scanf ("%s %s", uHQkJdn9gE[Bgcma3DqkIU0], nsoi3Zf[Bgcma3DqkIU0]));) {
        Bgcma3DqkIU0 = Bgcma3DqkIU0 +1;
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
        j = 0;
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
        while (Bgcma3DqkIU0 >= j) {
            cE42yL = 0;
            {
                Ps2plV = 0;
                while (!(0 == uHQkJdn9gE[j][Ps2plV])) {
                    if (uHQkJdn9gE[j][Ps2plV] > uHQkJdn9gE[j][cE42yL])
                        cE42yL = Ps2plV;
                    Ps2plV = Ps2plV +1;
                };
            }
            strcpy (out[j], uHQkJdn9gE[j]);
            {
                Ps2plV = cE42yL + 1;
                while (Ps2plV < cE42yL + 1 + strlen (nsoi3Zf[j])) {
                    out[j][Ps2plV] = nsoi3Zf[j][Ps2plV -cE42yL - 1];
                    Ps2plV = Ps2plV +1;
                };
            }
            do {
                cE42yL = cE42yL + 1;
                out[j][Ps2plV] = uHQkJdn9gE[j][cE42yL];
                Ps2plV++;
            }
            while (uHQkJdn9gE[j][cE42yL] != 0);
            if (j != Bgcma3DqkIU0)
                printf ("%s\n", out[j]);
            else
                printf ("%s", out[j]);
            j = j + 1;
        };
    };
}

