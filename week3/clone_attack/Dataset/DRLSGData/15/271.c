int main (int shYiGbDRe3, char *qZOtiX []) {
    int zWjl3Z, ZJxLlXYDO, ntcQU64kVC9N, K8oN5zLwUn1b, CyupvzGnKawj, row1, np0RKrPxY4z, tChfpuF, BN6OzrPxXGFs, HduznFG;
    int Ms6QZkLw9oy [(1680 - 680)] [1000];
    scanf ("%d", &zWjl3Z);
    {
        ZJxLlXYDO = (380 - 380);
        for (; ZJxLlXYDO < zWjl3Z;) {
            {
                ntcQU64kVC9N = 0;
                for (; ntcQU64kVC9N < zWjl3Z;) {
                    scanf ("%d", &Ms6QZkLw9oy[ZJxLlXYDO][ntcQU64kVC9N]);
                    ntcQU64kVC9N++;
                };
            }
            ZJxLlXYDO = ZJxLlXYDO +(391 - 390);
        };
    }
    {
        ZJxLlXYDO = 0;
        for (; ZJxLlXYDO < zWjl3Z;) {
            ntcQU64kVC9N = 0;
            for (; zWjl3Z > ntcQU64kVC9N;) {
                if (!(0 != Ms6QZkLw9oy[ZJxLlXYDO][ntcQU64kVC9N])) {
                    K8oN5zLwUn1b = Ms6QZkLw9oy[ZJxLlXYDO][ntcQU64kVC9N];
                    row1 = ZJxLlXYDO;
                    ZJxLlXYDO = zWjl3Z + 1;
                    np0RKrPxY4z = ntcQU64kVC9N;
                    break;
                }
                ntcQU64kVC9N++;
            }
            ZJxLlXYDO = ZJxLlXYDO +1;
        };
    }
    {
        ZJxLlXYDO = zWjl3Z - 1;
        for (; 0 <= ZJxLlXYDO;) {
            {
                ntcQU64kVC9N = zWjl3Z - 1;
                for (; ntcQU64kVC9N >= 0;) {
                    if (Ms6QZkLw9oy[ZJxLlXYDO][ntcQU64kVC9N] == 0) {
                        CyupvzGnKawj = Ms6QZkLw9oy[ZJxLlXYDO][ntcQU64kVC9N];
                        BN6OzrPxXGFs = ntcQU64kVC9N;
                        tChfpuF = ZJxLlXYDO;
                        ZJxLlXYDO = -1;
                        break;
                    }
                    ntcQU64kVC9N--;
                };
            }
            ZJxLlXYDO--;
        };
    }
    HduznFG = (tChfpuF - row1 - 1) * (BN6OzrPxXGFs -np0RKrPxY4z - 1);
    printf ("%d\n", HduznFG);
    return 0;
}

