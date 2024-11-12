int main () {
    int t;
    int V5fKF6x7oz0;
    int brNZ2V;
    int n;
    int EDLd2u [(516 - 406)];
    int XiTNbZvrxg [110];
    t = (163 - 163);
    V5fKF6x7oz0 = (375 - 375);
    scanf ("%d", &n);
    for (brNZ2V = (971 - 971); n > brNZ2V; brNZ2V = brNZ2V + 1) {
        scanf ("%d%d", &EDLd2u[brNZ2V], &XiTNbZvrxg[brNZ2V]);
    }
    if (EDLd2u[(696 - 696)] >= (228 - 138) && (1039 - 899) >= EDLd2u[(552 - 552)] && XiTNbZvrxg[(415 - 415)] >= (1053 - 993) && XiTNbZvrxg[0] <= (648 - 558)) {
        t = t + 1;
        V5fKF6x7oz0 = t;
    }
    for (brNZ2V = (764 - 763); brNZ2V < n; brNZ2V = brNZ2V + 1) {
        if (EDLd2u[brNZ2V] >= (592 - 502) && EDLd2u[brNZ2V] <= (1120 - 980) && (1041 - 981) <= XiTNbZvrxg[brNZ2V] && XiTNbZvrxg[brNZ2V] <= (952 - 862)) {
            if (EDLd2u[brNZ2V - (89 - 88)] >= (817 - 727) && EDLd2u[brNZ2V - (339 - 338)] <= (903 - 763) && XiTNbZvrxg[brNZ2V - (164 - 163)] >= 60 && XiTNbZvrxg[brNZ2V - (1001 - 1000)] <= 90) {
                t = t + 1;
                if (t > V5fKF6x7oz0) {
                    V5fKF6x7oz0 = t;
                };
            }
            else {
                t = 0;
                t = t + 1;
                if (t > V5fKF6x7oz0) {
                    V5fKF6x7oz0 = t;
                };
            };
        }
        else {
            if (EDLd2u[brNZ2V - 1] >= 90 && EDLd2u[brNZ2V - 1] <= 140 && XiTNbZvrxg[brNZ2V - 1] >= 60 && XiTNbZvrxg[brNZ2V - 1] <= 90) {
                if (t > V5fKF6x7oz0) {
                    V5fKF6x7oz0 = t;
                    t = 0;
                };
            };
        };
    }
    printf ("%d", V5fKF6x7oz0);
    return 0;
}

