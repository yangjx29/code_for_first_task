void  main () {
    int JoE2FX6x [101];
    int cp39j6Y0af;
    struct   VpbwAK0 {
        char qBpFMY [(790 - 769)];
        int ta;
        int ca;
        char BiX7fJnrV;
        char JaOtgIpF6BCZ;
        int iXSn5AqElYy9;
        char BqH6BoXO [21];
    }
    VpbwAK0 [101];
    struct   VpbwAK0 {
        char qBpFMY [(790 - 769)];
        int ta;
        int ca;
        char BiX7fJnrV;
        char JaOtgIpF6BCZ;
        int iXSn5AqElYy9;
        char BqH6BoXO [21];
    }
    temp;
    int ODIVpST;
    int u5ikd3R1S7A;
    int j;
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
    scanf ("%d", &ODIVpST);
    {
        u5ikd3R1S7A = 70 - 70;
        while (u5ikd3R1S7A < ODIVpST) {
            scanf ("%s %d %d %c %c %d", &VpbwAK0[u5ikd3R1S7A].qBpFMY, &VpbwAK0[u5ikd3R1S7A].ta, &VpbwAK0[u5ikd3R1S7A].ca, &VpbwAK0[u5ikd3R1S7A].BiX7fJnrV, &VpbwAK0[u5ikd3R1S7A].JaOtgIpF6BCZ, &VpbwAK0[u5ikd3R1S7A].iXSn5AqElYy9);
            u5ikd3R1S7A = u5ikd3R1S7A + 1;
        };
    }
    for (u5ikd3R1S7A = (706 - 706); u5ikd3R1S7A < ODIVpST; u5ikd3R1S7A++)
        JoE2FX6x[u5ikd3R1S7A] = (223 - 223);
    {
        u5ikd3R1S7A = 504 - 504;
        while (u5ikd3R1S7A < ODIVpST) {
            if (VpbwAK0[u5ikd3R1S7A].ta > (386 - 306) && (435 - 434) <= VpbwAK0[u5ikd3R1S7A].iXSn5AqElYy9)
                JoE2FX6x[u5ikd3R1S7A] = JoE2FX6x[u5ikd3R1S7A] + (8519 - 519);
            if (VpbwAK0[u5ikd3R1S7A].ta > (731 - 646) && VpbwAK0[u5ikd3R1S7A].ca > 80)
                JoE2FX6x[u5ikd3R1S7A] = JoE2FX6x[u5ikd3R1S7A] + 4000;
            if (VpbwAK0[u5ikd3R1S7A].ta > (638 - 548))
                JoE2FX6x[u5ikd3R1S7A] = JoE2FX6x[u5ikd3R1S7A] + 2000;
            if (VpbwAK0[u5ikd3R1S7A].ta > (602 - 517) && VpbwAK0[u5ikd3R1S7A].JaOtgIpF6BCZ == 'Y')
                JoE2FX6x[u5ikd3R1S7A] = JoE2FX6x[u5ikd3R1S7A] + 1000;
            if (VpbwAK0[u5ikd3R1S7A].ca > 80 && VpbwAK0[u5ikd3R1S7A].BiX7fJnrV == 'Y')
                JoE2FX6x[u5ikd3R1S7A] = JoE2FX6x[u5ikd3R1S7A] + 850;
            u5ikd3R1S7A = u5ikd3R1S7A + 1;
        };
    }
    {
        u5ikd3R1S7A = 1;
        while (u5ikd3R1S7A < ODIVpST) {
            if (JoE2FX6x[(958 - 958)] < JoE2FX6x[u5ikd3R1S7A]) {
                cp39j6Y0af = JoE2FX6x[u5ikd3R1S7A];
                JoE2FX6x[u5ikd3R1S7A] = JoE2FX6x[0];
                JoE2FX6x[0] = cp39j6Y0af;
                temp = VpbwAK0[u5ikd3R1S7A];
                VpbwAK0[u5ikd3R1S7A] = VpbwAK0[0];
                VpbwAK0[0] = temp;
            }
            u5ikd3R1S7A++;
        };
    }
    for (u5ikd3R1S7A = 0, j = 0; u5ikd3R1S7A < ODIVpST; u5ikd3R1S7A++)
        j = j + JoE2FX6x[u5ikd3R1S7A];
    printf ("%s\n", VpbwAK0[0].qBpFMY);
    printf ("%d\n", JoE2FX6x[0]);
    printf ("%d\n", j);
}

