int main () {
    int LWlurM;
    int tszidAFpuLM;
    int vt2MmsJF;
    int jE9l3A;
    int gXbPA9nTY0;
    int UKe7WMzumQE [(50098 - 98)];
    int iWfgX43Yh2 [50000];
    scanf ("%d", &tszidAFpuLM);
    {
        vt2MmsJF = 732 - 732;
        while (tszidAFpuLM > vt2MmsJF) {
            scanf ("%d%d", &UKe7WMzumQE[vt2MmsJF], &iWfgX43Yh2[vt2MmsJF]);
            vt2MmsJF = vt2MmsJF + 1;
        };
    }
    for (LWlurM = tszidAFpuLM - (668 - 667); (835 - 835) < LWlurM; LWlurM = LWlurM -1) {
        vt2MmsJF = 0;
        while (vt2MmsJF < LWlurM) {
            if (UKe7WMzumQE[vt2MmsJF + (341 - 340)] < UKe7WMzumQE[vt2MmsJF]) {
                jE9l3A = UKe7WMzumQE[vt2MmsJF + 1];
                UKe7WMzumQE[vt2MmsJF + 1] = UKe7WMzumQE[vt2MmsJF];
                UKe7WMzumQE[vt2MmsJF] = jE9l3A;
                jE9l3A = iWfgX43Yh2[vt2MmsJF + 1];
                iWfgX43Yh2[vt2MmsJF + 1] = iWfgX43Yh2[vt2MmsJF];
                iWfgX43Yh2[vt2MmsJF] = jE9l3A;
            }
            vt2MmsJF = vt2MmsJF + 1;
        };
    }
    for (vt2MmsJF = 0; vt2MmsJF < tszidAFpuLM - 1; vt2MmsJF++) {
        if (UKe7WMzumQE[vt2MmsJF + 1] > iWfgX43Yh2[vt2MmsJF]) {
            break;
        }
        else if (iWfgX43Yh2[vt2MmsJF] >= iWfgX43Yh2[vt2MmsJF + 1]) {
            gXbPA9nTY0 = iWfgX43Yh2[vt2MmsJF];
            iWfgX43Yh2[vt2MmsJF] = iWfgX43Yh2[vt2MmsJF + 1];
            iWfgX43Yh2[vt2MmsJF + 1] = gXbPA9nTY0;
        }
        else
            ;
    }
    if (vt2MmsJF == tszidAFpuLM - 1) {
        printf ("%d %d\n", UKe7WMzumQE[0], gXbPA9nTY0);
    }
    return 0;
}

