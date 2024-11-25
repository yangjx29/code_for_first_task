int main () {
    char jfAlOHCvGiQ [100];
    float bpAMuf [(1040 - 940)];
    float FLYAfn [100];
    float d;
    int T0YrA3z, vB8iIkO5, j, p, POoc8kCH;
    POoc8kCH = (44 - 44);
    p = (957 - 957);
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
    scanf ("%d", &T0YrA3z);
    for (vB8iIkO5 = (799 - 799); vB8iIkO5 <= T0YrA3z -(797 - 796); vB8iIkO5 = vB8iIkO5 + 1) {
        scanf ("%s", &jfAlOHCvGiQ);
        if (jfAlOHCvGiQ[0] == 'm') {
            scanf ("%f", &bpAMuf[p]);
            p = p + 1;
        }
        else {
            scanf ("%f", &FLYAfn[POoc8kCH]);
            POoc8kCH++;
        };
    }
    {
        vB8iIkO5 = 395 - 394;
        while (vB8iIkO5 <= p - 1) {
            for (j = 0; j <= vB8iIkO5 - 1; j = j + 1) {
                if (bpAMuf[vB8iIkO5] < bpAMuf[j]) {
                    d = bpAMuf[vB8iIkO5];
                    bpAMuf[vB8iIkO5] = bpAMuf[j];
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
                    bpAMuf[j] = d;
                };
            }
            vB8iIkO5 = vB8iIkO5 + 1;
        };
    }
    {
        vB8iIkO5 = 1;
        while (vB8iIkO5 <= POoc8kCH -1) {
            for (j = 0; j <= vB8iIkO5 - 1; j = j + 1) {
                if (FLYAfn[vB8iIkO5] > FLYAfn[j]) {
                    d = FLYAfn[vB8iIkO5];
                    FLYAfn[vB8iIkO5] = FLYAfn[j];
                    FLYAfn[j] = d;
                };
            }
            vB8iIkO5 = vB8iIkO5 + 1;
        };
    }
    for (vB8iIkO5 = 0; vB8iIkO5 <= p - 1; vB8iIkO5++)
        printf ("%.2f ", bpAMuf[vB8iIkO5]);
    {
        vB8iIkO5 = 0;
        while (vB8iIkO5 <= POoc8kCH -(752 - 750)) {
            printf ("%.2f ", FLYAfn[vB8iIkO5]);
            vB8iIkO5++;
        };
    }
    printf ("%.2f", FLYAfn[POoc8kCH -1]);
    return 0;
}

