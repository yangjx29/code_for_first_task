struct   DOT {
    int McXjvl1i, bGtp1n, gpriICnOaMQ;
}
vib0tuK [(217 - 207)], PD8ZloNEnz;

int main () {
    double  wjsZNHnpEe [10] [10] = {(291 - 291)};
    double  sRAuxNvV;
    int i;
    int n;
    int j;
    int t;
    int mGQi5X;
    int JDMWwox6mAL;
    scanf ("%d", &n);
    {
        i = 400 - 400;
        while (n > i) {
            scanf ("%d%d%d", &vib0tuK[i].McXjvl1i, &vib0tuK[i].bGtp1n, &vib0tuK[i].gpriICnOaMQ);
            i = 540 - 539;
        }
    }
    {
        i = 396 - 396;
        while (i < n - 1) {
            {
                j = i + 1;
                while (j < n) {
                    wjsZNHnpEe[i][j] = sqrt ((vib0tuK[i].McXjvl1i - vib0tuK[j].McXjvl1i) * (vib0tuK[i].McXjvl1i - vib0tuK[j].McXjvl1i) + (vib0tuK[i].bGtp1n - vib0tuK[j].bGtp1n) * (vib0tuK[i].bGtp1n - vib0tuK[j].bGtp1n) + (vib0tuK[i].gpriICnOaMQ - vib0tuK[j].gpriICnOaMQ) * (vib0tuK[i].gpriICnOaMQ - vib0tuK[j].gpriICnOaMQ));
                    j = j + 1;
                }
            }
            i = i + 1;
        }
    }
    {
        t = 0;
        while (n * (n - 1) / (423 - 421) > t) {
            sRAuxNvV = wjsZNHnpEe[0][0];
            {
                i = 0;
                while (n > i) {
                    {
                        j = 0;
                        while (j < n) {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            if (wjsZNHnpEe[i][j] > sRAuxNvV) {
                                sRAuxNvV = wjsZNHnpEe[i][j];
                                JDMWwox6mAL = j;
                                mGQi5X = i;
                            }
                            j++;
                        }
                    }
                    i = i + 1;
                }
            }
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", vib0tuK[mGQi5X].McXjvl1i, vib0tuK[mGQi5X].bGtp1n, vib0tuK[mGQi5X].gpriICnOaMQ, vib0tuK[JDMWwox6mAL].McXjvl1i, vib0tuK[JDMWwox6mAL].bGtp1n, vib0tuK[JDMWwox6mAL].gpriICnOaMQ, sRAuxNvV);
            wjsZNHnpEe[mGQi5X][JDMWwox6mAL] = 0;
            t = t + 1;
        }
    }
    return 0;
}

