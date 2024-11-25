int WNF3Qxe [50000], tw2tnKm3JeR [50000];

int main () {
    int n, Q7iWGg2P0C, dsgPMExBh0 = (105 - 104), sFBXykJxC, oxKSs81mQ, GeRkAla = 1;
    scanf ("%d", &n);
    {
        Q7iWGg2P0C = 0;
        while (n > Q7iWGg2P0C) {
            scanf ("%d %d", &WNF3Qxe[Q7iWGg2P0C], &tw2tnKm3JeR[Q7iWGg2P0C]);
            Q7iWGg2P0C = Q7iWGg2P0C +1;
        };
    }
    sFBXykJxC = WNF3Qxe[0];
    oxKSs81mQ = tw2tnKm3JeR[0];
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
    for (; dsgPMExBh0 < n - 1;) {
        for (Q7iWGg2P0C = 1; Q7iWGg2P0C < n; Q7iWGg2P0C = Q7iWGg2P0C +1) {
            dsgPMExBh0 = Q7iWGg2P0C;
            if (WNF3Qxe[Q7iWGg2P0C] <= sFBXykJxC && tw2tnKm3JeR[Q7iWGg2P0C] >= oxKSs81mQ) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (!(WNF3Qxe[Q7iWGg2P0C] == sFBXykJxC && tw2tnKm3JeR[Q7iWGg2P0C] == oxKSs81mQ)) {
                    sFBXykJxC = WNF3Qxe[Q7iWGg2P0C];
                    oxKSs81mQ = tw2tnKm3JeR[Q7iWGg2P0C];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    break;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (WNF3Qxe[Q7iWGg2P0C] < sFBXykJxC && tw2tnKm3JeR[Q7iWGg2P0C] >= sFBXykJxC && tw2tnKm3JeR[Q7iWGg2P0C] <= oxKSs81mQ) {
                sFBXykJxC = WNF3Qxe[Q7iWGg2P0C];
                break;
            }
            if (WNF3Qxe[Q7iWGg2P0C] >= sFBXykJxC && WNF3Qxe[Q7iWGg2P0C] <= oxKSs81mQ && tw2tnKm3JeR[Q7iWGg2P0C] > oxKSs81mQ) {
                oxKSs81mQ = tw2tnKm3JeR[Q7iWGg2P0C];
                break;
            };
        };
    }
    for (Q7iWGg2P0C = 0; Q7iWGg2P0C < n; Q7iWGg2P0C = Q7iWGg2P0C +1)
        if (WNF3Qxe[Q7iWGg2P0C] < sFBXykJxC || tw2tnKm3JeR[Q7iWGg2P0C] > oxKSs81mQ)
            GeRkAla = 0;
    if (GeRkAla == 1)
        printf ("%d %d", sFBXykJxC, oxKSs81mQ);
    else
        printf ("no");
    return 0;
}

