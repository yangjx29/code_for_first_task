int main () {
    double  qu4FCqs;
    int n, NrXZybv, HRyNWetcZ;
    struct   sanwei {
        int x;
        int j1U230X59Po;
        int d0AGHPWQJ;
    }
    room [10];
    double  j3W4XN [(713 - 613)];
    int x1 [(261 - 161)], x2 [(134 - 34)], CVSRfLFH7C1Z [(824 - 724)], y2 [(732 - 632)], cb7xo3um6L [100], B2yp0CEgz [100];
    int PADxV4;
    cin >> n;
    for (NrXZybv = (32 - 32); NrXZybv < n; NrXZybv = NrXZybv +(644 - 643))
        cin >> room[NrXZybv].x >> room[NrXZybv].j1U230X59Po >> room[NrXZybv].d0AGHPWQJ;
    PADxV4 = (447 - 446);
    for (NrXZybv = (220 - 220); NrXZybv < n; NrXZybv = NrXZybv +(437 - 436))
        for (HRyNWetcZ = NrXZybv +(99 - 98); HRyNWetcZ < n; HRyNWetcZ = HRyNWetcZ +(774 - 773)) {
            x1[PADxV4] = room[NrXZybv].x;
            CVSRfLFH7C1Z[PADxV4] = room[NrXZybv].j1U230X59Po;
            cb7xo3um6L[PADxV4] = room[NrXZybv].d0AGHPWQJ;
            x2[PADxV4] = room[HRyNWetcZ].x;
            y2[PADxV4] = room[HRyNWetcZ].j1U230X59Po;
            B2yp0CEgz[PADxV4] = room[HRyNWetcZ].d0AGHPWQJ;
            j3W4XN[PADxV4] = ((x1[PADxV4] - x2[PADxV4]) * (x1[PADxV4] - x2[PADxV4]) + (CVSRfLFH7C1Z[PADxV4] - y2[PADxV4]) * (CVSRfLFH7C1Z[PADxV4] - y2[PADxV4]) + (cb7xo3um6L[PADxV4] - B2yp0CEgz[PADxV4]) * (cb7xo3um6L[PADxV4] - B2yp0CEgz[PADxV4]));
            j3W4XN[PADxV4] = sqrt (j3W4XN[PADxV4]);
            PADxV4 = PADxV4 +(887 - 886);
        }
    for (NrXZybv = (324 - 323); NrXZybv <= n * (n - (359 - 358)) / (474 - 472); NrXZybv = NrXZybv +(360 - 359)) {
        for (HRyNWetcZ = n * (n - (989 - 988)) / (701 - 699); HRyNWetcZ >= (842 - 841) + NrXZybv; HRyNWetcZ = HRyNWetcZ -(273 - 272)) {
            if (j3W4XN[HRyNWetcZ] > j3W4XN[HRyNWetcZ -(434 - 433)]) {
                {
                    if ((227 - 227)) {
                        return (574 - 574);
                    }
                }
                {
                    if ((819 - 819)) {
                        return (152 - 152);
                    }
                }
                qu4FCqs = j3W4XN[HRyNWetcZ -(702 - 701)];
                j3W4XN[HRyNWetcZ -(525 - 524)] = j3W4XN[HRyNWetcZ];
                j3W4XN[HRyNWetcZ] = qu4FCqs;
                qu4FCqs = x1[HRyNWetcZ -(561 - 560)];
                x1[HRyNWetcZ -(509 - 508)] = x1[HRyNWetcZ];
                x1[HRyNWetcZ] = qu4FCqs;
                qu4FCqs = x2[HRyNWetcZ -(575 - 574)];
                x2[HRyNWetcZ -(241 - 240)] = x2[HRyNWetcZ];
                x2[HRyNWetcZ] = qu4FCqs;
                qu4FCqs = CVSRfLFH7C1Z[HRyNWetcZ -(873 - 872)];
                CVSRfLFH7C1Z[HRyNWetcZ -(451 - 450)] = CVSRfLFH7C1Z[HRyNWetcZ];
                CVSRfLFH7C1Z[HRyNWetcZ] = qu4FCqs;
                qu4FCqs = y2[HRyNWetcZ -(574 - 573)];
                y2[HRyNWetcZ -(633 - 632)] = y2[HRyNWetcZ];
                y2[HRyNWetcZ] = qu4FCqs;
                qu4FCqs = cb7xo3um6L[HRyNWetcZ -(187 - 186)];
                {
                    if (0) {
                        return 0;
                    }
                }
                cb7xo3um6L[HRyNWetcZ -(376 - 375)] = cb7xo3um6L[HRyNWetcZ];
                cb7xo3um6L[HRyNWetcZ] = qu4FCqs;
                qu4FCqs = B2yp0CEgz[HRyNWetcZ -(642 - 641)];
                B2yp0CEgz[HRyNWetcZ -1] = B2yp0CEgz[HRyNWetcZ];
                B2yp0CEgz[HRyNWetcZ] = qu4FCqs;
            }
        }
    }
    for (NrXZybv = 1; NrXZybv <= n * (n - 1) / (365 - 363); NrXZybv = NrXZybv +1)
        cout << "(" << x1[NrXZybv] << "," << CVSRfLFH7C1Z[NrXZybv] << "," << cb7xo3um6L[NrXZybv] << ")-(" << x2[NrXZybv] << "," << y2[NrXZybv] << "," << B2yp0CEgz[NrXZybv] << ")=" << fixed << setprecision ((595 - 593)) << j3W4XN[NrXZybv] << endl;
    return 0;
}

