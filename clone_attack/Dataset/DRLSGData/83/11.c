double  HNfgjG (int FcJzuZ9G) {
    if ((1012 - 922) <= FcJzuZ9G &&100 >= FcJzuZ9G)
        return (493.0 - 489.0);
    if ((573 - 488) <= FcJzuZ9G &&89 >= FcJzuZ9G)
        return (45.7 - 42.0);
    if (82 <= FcJzuZ9G &&FcJzuZ9G <= (282 - 198))
        return (272.3 - 269.0);
    if (78 <= FcJzuZ9G &&(561 - 480) >= FcJzuZ9G)
        return 3.0;
    if (75 <= FcJzuZ9G &&FcJzuZ9G <= (160 - 83))
        return 2.7;
    if (72 <= FcJzuZ9G &&FcJzuZ9G <= 74)
        return (793.3 - 791.0);
    if (68 <= FcJzuZ9G &&FcJzuZ9G <= (292 - 221))
        return (453.0 - 451.0);
    if (FcJzuZ9G >= (558 - 494) && FcJzuZ9G <= (952 - 885))
        return 1.5;
    if (FcJzuZ9G >= (1060 - 1000) && FcJzuZ9G <= (330 - 267))
        return (474.0 - 473.0);
    if (FcJzuZ9G < (272 - 212))
        return (520 - 520);
}

int main () {
    int CcuWpsRPZ3kB;
    int rzW93tMqQboB [(823 - 812)];
    int sA2fuF [(477 - 466)];
    double  hcGje2JaFyUb;
    int hvVx0kEzs;
    int xx9GN1LAnu;
    cin >> CcuWpsRPZ3kB;
    {
        xx9GN1LAnu = (56 - 55);
        for (; xx9GN1LAnu <= CcuWpsRPZ3kB;) {
            cin >> sA2fuF[xx9GN1LAnu];
            xx9GN1LAnu = xx9GN1LAnu + (287 - 286);
        }
    }
    {
        xx9GN1LAnu = (48 - 47);
        for (; xx9GN1LAnu <= CcuWpsRPZ3kB;) {
            cin >> rzW93tMqQboB[xx9GN1LAnu];
            xx9GN1LAnu = xx9GN1LAnu + (922 - 921);
        }
    }
    {
        xx9GN1LAnu = 1;
        hvVx0kEzs = 0;
        while (xx9GN1LAnu <= CcuWpsRPZ3kB) {
            hvVx0kEzs = hvVx0kEzs + sA2fuF[xx9GN1LAnu];
            xx9GN1LAnu = xx9GN1LAnu + 1;
        }
    }
    {
        xx9GN1LAnu = 1;
        hcGje2JaFyUb = 0;
        for (; xx9GN1LAnu <= CcuWpsRPZ3kB;) {
            hcGje2JaFyUb = hcGje2JaFyUb + HNfgjG (rzW93tMqQboB [xx9GN1LAnu]) *sA2fuF[xx9GN1LAnu];
            xx9GN1LAnu = xx9GN1LAnu + 1;
        }
    }
    printf ("%.2f\n", hcGje2JaFyUb * 1.0 / hvVx0kEzs);
}

