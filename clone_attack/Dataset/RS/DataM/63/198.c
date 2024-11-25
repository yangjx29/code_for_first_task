int main () {
    int DRngcPBx8 [(794 - 693)] [101];
    int hau5EoZQh [101] [101];
    int mSphXx6 [101] [101] = {(857 - 857)};
    int dwHJCD;
    int MJAC8uG30P;
    int KADsWRju;
    int KS4Rpd3Lrmzk;
    int T3pz4NvJQoT6;
    int CDyaYxdCI;
    int dpMIac8;
    scanf ("%d %d", &KS4Rpd3Lrmzk, &T3pz4NvJQoT6);
    {
        dwHJCD = 0;
        while (dwHJCD < KS4Rpd3Lrmzk) {
            {
                MJAC8uG30P = 0;
                while (T3pz4NvJQoT6 > MJAC8uG30P) {
                    scanf ("%d", &DRngcPBx8[dwHJCD][MJAC8uG30P]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    MJAC8uG30P++;
                };
            }
            dwHJCD++;
        };
    }
    scanf ("%d %d", &CDyaYxdCI, &dpMIac8);
    for (dwHJCD = 0; CDyaYxdCI > dwHJCD; dwHJCD = dwHJCD + 1) {
        for (MJAC8uG30P = 0; dpMIac8 > MJAC8uG30P; MJAC8uG30P = MJAC8uG30P +1)
            scanf ("%d", &hau5EoZQh[dwHJCD][MJAC8uG30P]);
    }
    for (dwHJCD = 0; dwHJCD < KS4Rpd3Lrmzk; dwHJCD++) {
        {
            MJAC8uG30P = 0;
            while (dpMIac8 - 1 > MJAC8uG30P) {
                for (KADsWRju = 0; T3pz4NvJQoT6 > KADsWRju; KADsWRju++)
                    mSphXx6[dwHJCD][MJAC8uG30P] = mSphXx6[dwHJCD][MJAC8uG30P] + DRngcPBx8[dwHJCD][KADsWRju] * hau5EoZQh[KADsWRju][MJAC8uG30P];
                printf ("%d ", mSphXx6[dwHJCD][MJAC8uG30P]);
                MJAC8uG30P++;
            };
        }
        {
            KADsWRju = 0;
            while (KADsWRju < T3pz4NvJQoT6) {
                mSphXx6[dwHJCD][dpMIac8 - 1] = mSphXx6[dwHJCD][dpMIac8 - 1] + DRngcPBx8[dwHJCD][KADsWRju] * hau5EoZQh[KADsWRju][dpMIac8 - 1];
                KADsWRju = KADsWRju +1;
            };
        }
        printf ("%d\n", mSphXx6[dwHJCD][dpMIac8 - 1]);
    }
    return 0;
}

