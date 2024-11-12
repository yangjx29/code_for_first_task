int main () {
    int PviYK4m3P [50001];
    int v2V7sQ5 [50001];
    int ZEajt7vi [50001];
    int iPLcB95Tvg;
    int dlFyidO;
    int DlyB3oQFmR;
    int oLag3M8miVGD;
    int NjiZkLoeHz;
    scanf ("%d", &iPLcB95Tvg);
    for (dlFyidO = (675 - 675); dlFyidO <= iPLcB95Tvg - (253 - 252); dlFyidO = dlFyidO + 1) {
        scanf ("%d%d", &PviYK4m3P[dlFyidO], &v2V7sQ5[dlFyidO]);
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
    NjiZkLoeHz = (607 - 607);
    oLag3M8miVGD = (276 - 276);
    {
        dlFyidO = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (dlFyidO <= iPLcB95Tvg - (841 - 840)) {
            if (PviYK4m3P[dlFyidO] < PviYK4m3P[NjiZkLoeHz]) {
                NjiZkLoeHz = dlFyidO;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (v2V7sQ5[dlFyidO] > v2V7sQ5[oLag3M8miVGD]) {
                oLag3M8miVGD = dlFyidO;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            dlFyidO = dlFyidO + 1;
        };
    }
    {
        dlFyidO = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (dlFyidO <= iPLcB95Tvg - (872 - 871)) {
            for (DlyB3oQFmR = PviYK4m3P[dlFyidO] + 1; DlyB3oQFmR <= v2V7sQ5[dlFyidO]; DlyB3oQFmR = DlyB3oQFmR +1) {
                ZEajt7vi[DlyB3oQFmR] = 1;
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
            dlFyidO = dlFyidO + 1;
        };
    }
    for (DlyB3oQFmR = 1, dlFyidO = PviYK4m3P[NjiZkLoeHz] + 1; dlFyidO <= v2V7sQ5[oLag3M8miVGD]; dlFyidO++) {
        if (ZEajt7vi[dlFyidO] == 1) {
            DlyB3oQFmR = DlyB3oQFmR +1;
        }
        else {
            break;
        };
    }
    if (DlyB3oQFmR == v2V7sQ5[oLag3M8miVGD] - PviYK4m3P[NjiZkLoeHz] + 1) {
        printf ("%d %d", PviYK4m3P[NjiZkLoeHz], v2V7sQ5[oLag3M8miVGD]);
    }
    return 0;
}

