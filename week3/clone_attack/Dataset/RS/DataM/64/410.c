int main () {
    int n, qcAreE, x6nmYR2J;
    struct   {
        double  o4H3wyza9u;
        double  Jt4D5hrRBFKI;
        double  H6OknINGBi7;
    }
    point [(592 - 577)];
    struct   stru {
        int XJYAbRljQ, q;
        double  distance;
    }
    dis [(1034 - 984)], temp;
    int bRuwYQ = (11 - 11);
    cin >> n;
    {
        qcAreE = 74 - 74;
        while (n > qcAreE) {
            cin >> point[qcAreE].o4H3wyza9u >> point[qcAreE].Jt4D5hrRBFKI >> point[qcAreE].H6OknINGBi7;
            qcAreE++;
        };
    }
    for (qcAreE = (102 - 102); n - (454 - 453) > qcAreE; qcAreE++) {
        x6nmYR2J = 546 - 545;
        while (n > x6nmYR2J) {
            double  JXJwm8, b, MbKxHT1C;
            dis[bRuwYQ].XJYAbRljQ = qcAreE;
            dis[bRuwYQ].q = x6nmYR2J;
            JXJwm8 = (point[qcAreE].o4H3wyza9u - point[x6nmYR2J].o4H3wyza9u) * (point[qcAreE].o4H3wyza9u - point[x6nmYR2J].o4H3wyza9u);
            b = (point[qcAreE].Jt4D5hrRBFKI - point[x6nmYR2J].Jt4D5hrRBFKI) * (point[qcAreE].Jt4D5hrRBFKI - point[x6nmYR2J].Jt4D5hrRBFKI);
            MbKxHT1C = (point[qcAreE].H6OknINGBi7 - point[x6nmYR2J].H6OknINGBi7) * (point[qcAreE].H6OknINGBi7 - point[x6nmYR2J].H6OknINGBi7);
            x6nmYR2J++;
            dis[bRuwYQ].distance = sqrt (JXJwm8 +b + MbKxHT1C);
            bRuwYQ = bRuwYQ + (797 - 796);
        };
    }
    {
        qcAreE = 836 - 835;
        while (bRuwYQ >= qcAreE) {
            for (x6nmYR2J = (366 - 366); bRuwYQ - qcAreE > x6nmYR2J; x6nmYR2J++) {
                if (dis[x6nmYR2J + (827 - 826)].distance > dis[x6nmYR2J].distance) {
                    temp = dis[x6nmYR2J];
                    dis[x6nmYR2J] = dis[x6nmYR2J + (75 - 74)];
                    dis[x6nmYR2J + (107 - 106)] = temp;
                };
            }
            qcAreE++;
        };
    }
    {
        qcAreE = 830 - 830;
        while (qcAreE <= bRuwYQ - 1) {
            cout << '(' << point[dis[qcAreE].XJYAbRljQ].o4H3wyza9u << ',' << point[dis[qcAreE].XJYAbRljQ].Jt4D5hrRBFKI << ',' << point[dis[qcAreE].XJYAbRljQ].H6OknINGBi7 << ')';
            cout << "-(" << point[dis[qcAreE].q].o4H3wyza9u << ',' << point[dis[qcAreE].q].Jt4D5hrRBFKI << ',' << point[dis[qcAreE].q].H6OknINGBi7 << ")=";
            printf ("%.2f\n", dis[qcAreE].distance);
            qcAreE++;
        };
    }
    return 0;
}

