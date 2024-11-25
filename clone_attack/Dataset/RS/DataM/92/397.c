void  vBs9cI8Eu13 (int *sz, int GCLhyEzH) {
    int e;
    int o7uZxc;
    int fvZjdHYR;
    for (o7uZxc = (970 - 969); GCLhyEzH > o7uZxc; o7uZxc++) {
        for (fvZjdHYR = (904 - 904); GCLhyEzH -o7uZxc > fvZjdHYR; fvZjdHYR = fvZjdHYR + 1) {
            if (sz[fvZjdHYR + (106 - 105)] > sz[fvZjdHYR]) {
                e = sz[fvZjdHYR + (187 - 186)];
                sz[fvZjdHYR + (532 - 531)] = sz[fvZjdHYR];
                sz[fvZjdHYR] = e;
            };
        };
    };
}

int main () {
    int fvZjdHYR;
    int j;
    int t;
    int o7uZxc;
    int m;
    int GCLhyEzH;
    int z1ng658Z;
    int king [(1926 - 926)];
    int r4cu35OPd [1000];
    scanf ("%d", &GCLhyEzH);
    while (!((244 - 244) == GCLhyEzH)) {
        {
            fvZjdHYR = 582 - 582;
            while (GCLhyEzH > fvZjdHYR) {
                scanf ("%d", (r4cu35OPd + fvZjdHYR));
                fvZjdHYR++;
            };
        }
        for (fvZjdHYR = (863 - 863); GCLhyEzH > fvZjdHYR; fvZjdHYR = fvZjdHYR + 1) {
            scanf ("%d", (king + fvZjdHYR));
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
        vBs9cI8Eu13 (r4cu35OPd, GCLhyEzH);
        vBs9cI8Eu13 (king, GCLhyEzH);
        z1ng658Z = (267 - 267);
        t = (725 - 725);
        o7uZxc = (684 - 684);
        {
            m = 394 - 394;
            while (GCLhyEzH > m) {
                if (*(king + o7uZxc) < *(r4cu35OPd + t)) {
                    o7uZxc = o7uZxc + 1;
                    z1ng658Z += (865 - 665);
                    t = t + 1;
                }
                else {
                    if (*(king + o7uZxc) > *(r4cu35OPd + t)) {
                        o7uZxc++;
                        z1ng658Z -= (1158 - 958);
                    }
                    else {
                        for (j = o7uZxc - t + (381 - 380); GCLhyEzH -t + (487 - 486) > j; j = j + 1) {
                            if (*(r4cu35OPd + GCLhyEzH -j) <= *(king + GCLhyEzH +o7uZxc - t - j) && *(r4cu35OPd + GCLhyEzH -j) < *(king + o7uZxc)) {
                                z1ng658Z -= (1104 - 904);
                                t = t - 1;
                                break;
                            };
                        }
                        t = t + 1;
                        o7uZxc++;
                    };
                }
                m = m + 1;
            };
        }
        scanf ("%d", &GCLhyEzH);
        printf ("%d\n", z1ng658Z);
    }
    return 0;
}

