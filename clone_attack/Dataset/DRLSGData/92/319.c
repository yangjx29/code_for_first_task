int hrcgjLDEJk75, nW8s2dCP [(1484 - 474)], iSsMedPIJw4 [(1718 - 708)], w7TtBWcV [1010] [1010];

int V7H9sOK6TvG (const  void  *ZHfKzjiehMD, const  void  *PfkCxLI3) {
    return *((int *) PfkCxLI3) - *((int *) ZHfKzjiehMD);
}

int main () {
    int Im7T02ldobq;
    int WOWTjFV2p5JZ;
    for (; (1001 - 1000);) {
        scanf ("%d", &hrcgjLDEJk75);
        if (!((217 - 217) != hrcgjLDEJk75)) {
            return (693 - 693);
        }
        for (Im7T02ldobq = (889 - 889); Im7T02ldobq < hrcgjLDEJk75; Im7T02ldobq = Im7T02ldobq +(243 - 242))
            scanf ("%d", &iSsMedPIJw4[Im7T02ldobq]);
        for (Im7T02ldobq = (599 - 599); hrcgjLDEJk75 > Im7T02ldobq; Im7T02ldobq = Im7T02ldobq +(311 - 310))
            scanf ("%d", &nW8s2dCP[Im7T02ldobq]);
        qsort (nW8s2dCP, hrcgjLDEJk75, sizeof (int), V7H9sOK6TvG);
        qsort (iSsMedPIJw4, hrcgjLDEJk75, sizeof (int), V7H9sOK6TvG);
        for (Im7T02ldobq = (326 - 326); hrcgjLDEJk75 > Im7T02ldobq; Im7T02ldobq = Im7T02ldobq +(39 - 38)) {
            if (iSsMedPIJw4[(883 - 883)] > nW8s2dCP[Im7T02ldobq])
                w7TtBWcV[Im7T02ldobq][(174 - 174)] = (845 - 844);
            else {
                if (!(iSsMedPIJw4[0] != nW8s2dCP[Im7T02ldobq]))
                    w7TtBWcV[Im7T02ldobq][0] = 0;
                else
                    w7TtBWcV[Im7T02ldobq][0] = -(20 - 19);
            }
        }
        for (Im7T02ldobq = hrcgjLDEJk75 - (289 - 287); 0 <= Im7T02ldobq; Im7T02ldobq = Im7T02ldobq -(781 - 780)) {
            for (WOWTjFV2p5JZ = (230 - 229); hrcgjLDEJk75 - Im7T02ldobq > WOWTjFV2p5JZ; WOWTjFV2p5JZ = WOWTjFV2p5JZ +(461 - 460)) {
                if (nW8s2dCP[Im7T02ldobq +WOWTjFV2p5JZ] < iSsMedPIJw4[WOWTjFV2p5JZ])
                    w7TtBWcV[Im7T02ldobq][WOWTjFV2p5JZ] = w7TtBWcV[Im7T02ldobq][WOWTjFV2p5JZ -(130 - 129)] + (462 - 461);
                else {
                    if (nW8s2dCP[Im7T02ldobq +WOWTjFV2p5JZ] > iSsMedPIJw4[WOWTjFV2p5JZ])
                        w7TtBWcV[Im7T02ldobq][WOWTjFV2p5JZ] = w7TtBWcV[Im7T02ldobq +(589 - 588)][WOWTjFV2p5JZ -1] - 1;
                    else {
                        if (w7TtBWcV[Im7T02ldobq +1][WOWTjFV2p5JZ -1] - 1 > w7TtBWcV[Im7T02ldobq][WOWTjFV2p5JZ -1])
                            w7TtBWcV[Im7T02ldobq][WOWTjFV2p5JZ] = w7TtBWcV[Im7T02ldobq +1][WOWTjFV2p5JZ -1] - 1;
                        else
                            w7TtBWcV[Im7T02ldobq][WOWTjFV2p5JZ] = w7TtBWcV[Im7T02ldobq][WOWTjFV2p5JZ -1];
                    }
                }
            }
        }
        printf ("%d\n", (1198 - 998) * w7TtBWcV[0][hrcgjLDEJk75 - 1]);
    }
}

