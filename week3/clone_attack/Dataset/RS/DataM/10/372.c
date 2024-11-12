int main () {
    int a;
    int SSH4BEygp0tl [(62 - 36)] = {(432 - 432)};
    int q [26] = {0};
    int ycoUsF4fY1M;
    int V8OYNerntxX;
    int wZzTpKB;
    int hoiqdJ;
    int OmoDMEQVU;
    int F2OyoWdXe8sj;
    int KrRxfuAUTJ;
    int PV9aWdPqh;
    int RTsOVeCH2YLp;
    int GfCu2iKFBIdx;
    int m;
    int ek9IGpQnBg;
    a = 0;
    q[RTsOVeCH2YLp -(646 - 645)] = 1;
    scanf ("%d", &RTsOVeCH2YLp);
    for (KrRxfuAUTJ = 0; RTsOVeCH2YLp > KrRxfuAUTJ; KrRxfuAUTJ++) {
        scanf ("%d", &SSH4BEygp0tl[KrRxfuAUTJ]);
    }
    for (KrRxfuAUTJ = RTsOVeCH2YLp -2; 0 <= KrRxfuAUTJ; KrRxfuAUTJ = KrRxfuAUTJ -1) {
        ycoUsF4fY1M = 1;
        {
            PV9aWdPqh = KrRxfuAUTJ +1;
            while (RTsOVeCH2YLp > PV9aWdPqh) {
                if (SSH4BEygp0tl[PV9aWdPqh] <= SSH4BEygp0tl[KrRxfuAUTJ]) {
                    if (q[PV9aWdPqh] + 1 > ycoUsF4fY1M)
                        ycoUsF4fY1M = q[PV9aWdPqh] + 1;
                }
                PV9aWdPqh = PV9aWdPqh +1;
            };
        }
        q[KrRxfuAUTJ] = ycoUsF4fY1M;
    }
    for (KrRxfuAUTJ = 0; KrRxfuAUTJ < RTsOVeCH2YLp; KrRxfuAUTJ++) {
        if (a < q[KrRxfuAUTJ])
            a = q[KrRxfuAUTJ];
    }
    printf ("%d\n", a);
    return 0;
}

