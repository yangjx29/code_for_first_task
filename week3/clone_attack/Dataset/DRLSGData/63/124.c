main () {
    int beIcBAj27n;
    int kYWk13T;
    int k;
    int Uk4rwuoPURz;
    int dN3wiWnk0;
    int twB2XTemCi;
    int LkuZmHoL1M;
    int YlPt5JR;
    int sFSXZ2dT [(556 - 456)] [100];
    int af78ro6u [100] [100];
    int GabET9Go1 [100] [100] = {{(111 - 111)}};
    scanf ("%d %d", &Uk4rwuoPURz, &dN3wiWnk0);
    {
        beIcBAj27n = 0;
        while (beIcBAj27n < Uk4rwuoPURz) {
            {
                kYWk13T = 0;
                while (kYWk13T < dN3wiWnk0) {
                    scanf ("%d", &sFSXZ2dT[beIcBAj27n][kYWk13T]);
                    kYWk13T = kYWk13T + (338 - 337);
                }
            }
            beIcBAj27n = beIcBAj27n + 1;
        }
    }
    scanf ("%d %d", &twB2XTemCi, &LkuZmHoL1M);
    {
        beIcBAj27n = 0;
        while (beIcBAj27n < twB2XTemCi) {
            {
                kYWk13T = 0;
                while (LkuZmHoL1M > kYWk13T) {
                    scanf ("%d", &af78ro6u[beIcBAj27n][kYWk13T]);
                    kYWk13T = kYWk13T + 1;
                }
            }
            beIcBAj27n = beIcBAj27n + 1;
        }
    }
    {
        beIcBAj27n = 0;
        while (Uk4rwuoPURz > beIcBAj27n) {
            {
                kYWk13T = 0;
                while (LkuZmHoL1M > kYWk13T) {
                    {
                        k = 0;
                        while (twB2XTemCi > k) {
                            GabET9Go1[beIcBAj27n][kYWk13T] = GabET9Go1[beIcBAj27n][kYWk13T] + sFSXZ2dT[beIcBAj27n][k] * af78ro6u[k][kYWk13T];
                            k = k + 1;
                        }
                    }
                    kYWk13T++;
                }
            }
            beIcBAj27n = beIcBAj27n + 1;
        }
    }
    {
        beIcBAj27n = 0;
        while (Uk4rwuoPURz > beIcBAj27n) {
            YlPt5JR = 0;
            for (kYWk13T = 0; kYWk13T < LkuZmHoL1M; kYWk13T = kYWk13T + 1) {
                if (YlPt5JR == 0) {
                    printf ("%d", GabET9Go1[beIcBAj27n][kYWk13T]);
                    YlPt5JR = YlPt5JR +1;
                }
                else
                    printf (" %d", GabET9Go1[beIcBAj27n][kYWk13T]);
            }
            printf ("\n");
            beIcBAj27n = beIcBAj27n + 1;
        }
    }
}

