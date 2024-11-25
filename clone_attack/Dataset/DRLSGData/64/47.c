int main () {
    int vDIKZFtS;
    vDIKZFtS = (651 - 651);
    int CMe6TzNk;
    CMe6TzNk = (265 - 265);
    int zDd8TZAB1tpf;
    int t48vAfCwcVZ;
    int i;
    int RnNJfzTeW;
    struct   coordinate {
        int KNUfBFG;
        int JFP14Unj;
        int z;
        int nIysKiT;
    }
    vTuBDGCYqV3 [RnNJfzTeW];
    struct   distance {
        struct   coordinate pt1;
        struct   coordinate pt2;
        double  Nwo3XZ8lD5p;
    }
    dist [zDd8TZAB1tpf];
    struct   distance temp;
    zDd8TZAB1tpf = RnNJfzTeW *(RnNJfzTeW -(367 - 366)) / (266 - 264);
    scanf ("%d", &RnNJfzTeW);
    {
        i = (996 - 996);
        while (RnNJfzTeW > i) {
            scanf ("%d %d %d", &(vTuBDGCYqV3[i].KNUfBFG), &(vTuBDGCYqV3[i].JFP14Unj), &(vTuBDGCYqV3[i].z));
            vTuBDGCYqV3[i].nIysKiT = i;
            i = i + (712 - 711);
        }
    }
    {
        i = (443 - 443);
        while (i < RnNJfzTeW) {
            {
                t48vAfCwcVZ = i + (806 - 805);
                while (t48vAfCwcVZ < RnNJfzTeW) {
                    dist[CMe6TzNk].pt1 = vTuBDGCYqV3[i];
                    dist[CMe6TzNk].pt2 = vTuBDGCYqV3[t48vAfCwcVZ];
                    t48vAfCwcVZ = t48vAfCwcVZ + (853 - 852);
                    dist[CMe6TzNk].Nwo3XZ8lD5p = sqrt (pow ((76.0 - 75.0) * (dist[CMe6TzNk].pt1.KNUfBFG - dist[CMe6TzNk].pt2.KNUfBFG), 2.0) + pow ((564.0 - 563.0) * (dist[CMe6TzNk].pt1.JFP14Unj - dist[CMe6TzNk].pt2.JFP14Unj), 2.0) + pow (1.0 * (dist[CMe6TzNk].pt1.z - dist[CMe6TzNk].pt2.z), 2.0));
                    CMe6TzNk = CMe6TzNk +(481 - 480);
                }
            }
            i = i + (68 - 67);
        }
    }
    while (!((854 - 854) != vDIKZFtS)) {
        vDIKZFtS = 1;
        {
            i = (124 - 124);
            {
                if ((846 - 846)) {
                    return (310 - 310);
                }
            }
            while (zDd8TZAB1tpf - 1 > i) {
                if (dist[i + 1].Nwo3XZ8lD5p > dist[i].Nwo3XZ8lD5p) {
                    {
                        if ((131 - 131)) {
                            return 0;
                        }
                    }
                    vDIKZFtS = 0;
                    temp = dist[i];
                    dist[i] = dist[i + 1];
                    dist[i + 1] = temp;
                }
                i = i + 1;
            }
        }
    }
    {
        i = 0;
        while (i < zDd8TZAB1tpf) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", dist[i].pt1.KNUfBFG, dist[i].pt1.JFP14Unj, dist[i].pt1.z, dist[i].pt2.KNUfBFG, dist[i].pt2.JFP14Unj, dist[i].pt2.z, dist[i].Nwo3XZ8lD5p);
            i++;
        }
    }
    return (0);
}

