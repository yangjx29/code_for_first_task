main () {
    float wgYWsXiy7 [1000], F1kzxvm6gTl, eDv6hPcI, sl2veW9VfZ, kix0W9QZY5j3;
    int QYfqMtpc, HhLoA0;
    scanf ("%d", &QYfqMtpc);
    for (HhLoA0 = 0; HhLoA0 < QYfqMtpc; HhLoA0++) {
        scanf ("%f%f%f", &wgYWsXiy7[3 * HhLoA0], &wgYWsXiy7[3 * HhLoA0 +1], &wgYWsXiy7[3 * HhLoA0 +2]);
    }
    {
        HhLoA0 = 0;
        while (HhLoA0 < QYfqMtpc) {
            eDv6hPcI = wgYWsXiy7[3 * HhLoA0 +1] * wgYWsXiy7[3 * HhLoA0 +1] - 4 * wgYWsXiy7[3 * HhLoA0] * wgYWsXiy7[3 * HhLoA0 +2];
            if (fabs (eDv6hPcI) <= 0.00001)
                printf ("x1=x2=%.5f\n", -wgYWsXiy7[3 * HhLoA0 +1] / (2 * wgYWsXiy7[3 * HhLoA0]));
            F1kzxvm6gTl = sqrt (fabs (eDv6hPcI));
            sl2veW9VfZ = -wgYWsXiy7[3 * HhLoA0 +1] / (2 * wgYWsXiy7[3 * HhLoA0]), kix0W9QZY5j3 = F1kzxvm6gTl / (2 * wgYWsXiy7[3 * HhLoA0]);
            HhLoA0 = HhLoA0 +1;
            if (fabs (sl2veW9VfZ) <= 0.000001)
                sl2veW9VfZ = 0.00000;
            if (eDv6hPcI > 0.00001)
                printf ("x1=%.5f;x2=%.5f\n", sl2veW9VfZ + kix0W9QZY5j3, sl2veW9VfZ - kix0W9QZY5j3);
            if (eDv6hPcI < -0.00001)
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", sl2veW9VfZ, kix0W9QZY5j3, sl2veW9VfZ, kix0W9QZY5j3);
        };
    };
}

