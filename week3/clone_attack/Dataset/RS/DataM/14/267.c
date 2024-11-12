struct   point {
    int JkMS7mU, wJA13Vk, dVZWOSC, KUGKdTMgvmSw;
}
nje3E8OR0Nf [100000], WY9IAXuT;

int main (int KefbgwhDQz, char *vsm5YDk []) {
    int W34kiRD0KaA9;
    int n;
    scanf ("%d", &n);
    {
        W34kiRD0KaA9 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > W34kiRD0KaA9) {
            scanf ("%d %d %d", &nje3E8OR0Nf[W34kiRD0KaA9].JkMS7mU, &nje3E8OR0Nf[W34kiRD0KaA9].wJA13Vk, &nje3E8OR0Nf[W34kiRD0KaA9].dVZWOSC);
            nje3E8OR0Nf[W34kiRD0KaA9].KUGKdTMgvmSw = nje3E8OR0Nf[W34kiRD0KaA9].wJA13Vk + nje3E8OR0Nf[W34kiRD0KaA9].dVZWOSC;
            W34kiRD0KaA9 = W34kiRD0KaA9 +1;
        };
    }
    for (W34kiRD0KaA9 = (723 - 722); n > W34kiRD0KaA9; W34kiRD0KaA9 = W34kiRD0KaA9 +1) {
        if (nje3E8OR0Nf[0].KUGKdTMgvmSw < nje3E8OR0Nf[W34kiRD0KaA9].KUGKdTMgvmSw) {
            WY9IAXuT = nje3E8OR0Nf[0];
            nje3E8OR0Nf[0] = nje3E8OR0Nf[W34kiRD0KaA9];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            nje3E8OR0Nf[W34kiRD0KaA9] = WY9IAXuT;
        };
    }
    for (W34kiRD0KaA9 = (342 - 340); n > W34kiRD0KaA9; W34kiRD0KaA9 = W34kiRD0KaA9 +1) {
        if (nje3E8OR0Nf[1].KUGKdTMgvmSw < nje3E8OR0Nf[W34kiRD0KaA9].KUGKdTMgvmSw) {
            WY9IAXuT = nje3E8OR0Nf[1];
            nje3E8OR0Nf[1] = nje3E8OR0Nf[W34kiRD0KaA9];
            nje3E8OR0Nf[W34kiRD0KaA9] = WY9IAXuT;
        };
    }
    for (W34kiRD0KaA9 = 3; W34kiRD0KaA9 < n; W34kiRD0KaA9++) {
        if (nje3E8OR0Nf[W34kiRD0KaA9].KUGKdTMgvmSw > nje3E8OR0Nf[2].KUGKdTMgvmSw) {
            WY9IAXuT = nje3E8OR0Nf[2];
            nje3E8OR0Nf[2] = nje3E8OR0Nf[W34kiRD0KaA9];
            nje3E8OR0Nf[W34kiRD0KaA9] = WY9IAXuT;
        };
    }
    for (W34kiRD0KaA9 = 0; W34kiRD0KaA9 < 3; W34kiRD0KaA9++) {
        printf ("%d %d\n", nje3E8OR0Nf[W34kiRD0KaA9].JkMS7mU, nje3E8OR0Nf[W34kiRD0KaA9].KUGKdTMgvmSw);
    }
    return 0;
}

