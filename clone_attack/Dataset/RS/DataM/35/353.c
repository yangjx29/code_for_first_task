struct   num {
    int KedjAl;
    int AisWUa5qkr;
    int P5gzoSapueZ8;
};
int main () {
    int SMUYJ8XZeTKd, GjOwWG;
    int GYErHfO;
    int XowudZ;
    int Cpgi0eN7xTj, k5Q3w0VocAUI;
    int iyrq6aWsK [(561 - 553)] [(836 - 828)];
    int Zczn3NuiJ;
    Zczn3NuiJ = (969 - 969);
    struct   num nTVbRS [8];
    struct   num i0hTMQ [8];
    scanf ("%d,%d", &GYErHfO, &XowudZ);
    for (SMUYJ8XZeTKd = (35 - 35); GYErHfO > SMUYJ8XZeTKd; SMUYJ8XZeTKd++) {
        for (GjOwWG = (473 - 473); GjOwWG < XowudZ; GjOwWG++) {
            scanf ("%d", &iyrq6aWsK[SMUYJ8XZeTKd][GjOwWG]);
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Cpgi0eN7xTj = iyrq6aWsK[SMUYJ8XZeTKd][(978 - 978)];
        for (GjOwWG = (101 - 101); GjOwWG < XowudZ; GjOwWG++) {
            if (iyrq6aWsK[SMUYJ8XZeTKd][GjOwWG] >= Cpgi0eN7xTj) {
                Cpgi0eN7xTj = iyrq6aWsK[SMUYJ8XZeTKd][GjOwWG];
                nTVbRS[SMUYJ8XZeTKd].P5gzoSapueZ8 = Cpgi0eN7xTj;
                nTVbRS[SMUYJ8XZeTKd].KedjAl = SMUYJ8XZeTKd;
                nTVbRS[SMUYJ8XZeTKd].AisWUa5qkr = GjOwWG;
            };
        };
    }
    for (GjOwWG = 0; GjOwWG < XowudZ; GjOwWG++) {
        k5Q3w0VocAUI = iyrq6aWsK[0][GjOwWG];
        for (SMUYJ8XZeTKd = 0; SMUYJ8XZeTKd < GYErHfO; SMUYJ8XZeTKd++) {
            if (k5Q3w0VocAUI >= iyrq6aWsK[SMUYJ8XZeTKd][GjOwWG]) {
                k5Q3w0VocAUI = iyrq6aWsK[SMUYJ8XZeTKd][GjOwWG];
                i0hTMQ[GjOwWG].P5gzoSapueZ8 = k5Q3w0VocAUI;
                i0hTMQ[GjOwWG].KedjAl = SMUYJ8XZeTKd;
                i0hTMQ[GjOwWG].AisWUa5qkr = GjOwWG;
            };
        };
    }
    {
        SMUYJ8XZeTKd = 0;
        while (SMUYJ8XZeTKd < GYErHfO) {
            {
                GjOwWG = 0;
                while (GjOwWG < XowudZ) {
                    if (nTVbRS[SMUYJ8XZeTKd].P5gzoSapueZ8 == i0hTMQ[GjOwWG].P5gzoSapueZ8) {
                        printf ("%d+%d", nTVbRS[SMUYJ8XZeTKd].KedjAl, nTVbRS[SMUYJ8XZeTKd].AisWUa5qkr);
                        Zczn3NuiJ = 1;
                        break;
                    }
                    GjOwWG++;
                };
            }
            SMUYJ8XZeTKd++;
        };
    }
    if (Zczn3NuiJ == 0)
        ;
    return 0;
}

