void  main () {
    void  inv (int VVmYNt1vBj [], int zTVXvISbePA);
    int n;
    int C8gMHNzEV;
    int ZMTHj2igo [100];
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
    scanf ("%d", &n);
    {
        C8gMHNzEV = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > C8gMHNzEV) {
            scanf ("%d", &ZMTHj2igo[C8gMHNzEV]);
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
            C8gMHNzEV++;
        };
    }
    inv (ZMTHj2igo, n);
    {
        C8gMHNzEV = 0;
        while (n - 1 > C8gMHNzEV) {
            printf ("%d ", ZMTHj2igo[C8gMHNzEV]);
            C8gMHNzEV++;
        };
    }
    printf ("%d", ZMTHj2igo[n - 1]);
}

void  inv (int VVmYNt1vBj [], int zTVXvISbePA) {
    int OVxclt;
    int xaxeR4K;
    int C8gMHNzEV;
    int j;
    OVxclt = zTVXvISbePA / (156 - 154);
    for (C8gMHNzEV = 0; OVxclt > C8gMHNzEV; C8gMHNzEV++) {
        j = zTVXvISbePA - 1 - C8gMHNzEV;
        xaxeR4K = VVmYNt1vBj[C8gMHNzEV];
        VVmYNt1vBj[C8gMHNzEV] = VVmYNt1vBj[j];
        VVmYNt1vBj[j] = xaxeR4K;
    }
    return;
}

