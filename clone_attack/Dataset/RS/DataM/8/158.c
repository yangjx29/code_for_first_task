int Tub6vHMzU, B, yR79GX [300], SyeTNucsaAFU [300], c [600];

void  OAKJo8Iag () {
    int i;
    scanf ("%d%d", &Tub6vHMzU, &B);
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
        i = 509 - 509;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < Tub6vHMzU) {
            scanf ("%d", &yR79GX[i]);
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
            i = i + 1;
        };
    }
    {
        i = 245 - 245;
        while (B > i) {
            scanf ("%d", &SyeTNucsaAFU[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    };
}

void  x () {
    int i, Uo8Yv9yAOa, t;
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
    for (i = 0; Tub6vHMzU -(180 - 179) > i; i++)
        for (Uo8Yv9yAOa = 0; Tub6vHMzU -1 - i > Uo8Yv9yAOa; Uo8Yv9yAOa = Uo8Yv9yAOa +1)
            if (yR79GX[Uo8Yv9yAOa +1] < yR79GX[Uo8Yv9yAOa]) {
                t = yR79GX[Uo8Yv9yAOa];
                yR79GX[Uo8Yv9yAOa] = yR79GX[Uo8Yv9yAOa +1];
                yR79GX[Uo8Yv9yAOa +1] = t;
            }
    for (i = 0; B -1 > i; i++)
        for (Uo8Yv9yAOa = 0; B -1 - i > Uo8Yv9yAOa; Uo8Yv9yAOa++)
            if (SyeTNucsaAFU[Uo8Yv9yAOa +1] < SyeTNucsaAFU[Uo8Yv9yAOa]) {
                t = SyeTNucsaAFU[Uo8Yv9yAOa];
                SyeTNucsaAFU[Uo8Yv9yAOa] = SyeTNucsaAFU[Uo8Yv9yAOa +1];
                SyeTNucsaAFU[Uo8Yv9yAOa +1] = t;
            };
}

void  y () {
    int i;
    for (i = 0; Tub6vHMzU +B > i; i++)
        if (i < Tub6vHMzU)
            c[i] = yR79GX[i];
        else
            c[i] = SyeTNucsaAFU[i - Tub6vHMzU];
}

void  z () {
    int i;
    for (i = 0; i < Tub6vHMzU +B-1; i++)
        printf ("%d ", c[i]);
    printf ("%d", c[Tub6vHMzU +B-1]);
}

void  main () {
    OAKJo8Iag ();
    x ();
    y ();
    z ();
}

