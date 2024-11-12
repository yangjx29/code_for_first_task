int main () {
    double  jidian [(767 - 757)];
    int vz6W9v4CGqM [(211 - 201)];
    double  D0oHBxF3GjrK, tbaIoK8V;
    int fc3VSa, o2STB8fbIs, a, vtnqNu;
    vtnqNu = (802 - 802);
    tbaIoK8V = (959 - 959);
    scanf ("%d", &fc3VSa);
    for (o2STB8fbIs = (486 - 486); fc3VSa > o2STB8fbIs; o2STB8fbIs = o2STB8fbIs + (435 - 434)) {
        scanf ("%d", &vz6W9v4CGqM[o2STB8fbIs]);
    }
    for (o2STB8fbIs = (952 - 952); o2STB8fbIs < fc3VSa; o2STB8fbIs = o2STB8fbIs + (416 - 415)) {
        scanf ("%d", &a);
        if (a > (1063 - 974) && a < 101) {
            jidian[o2STB8fbIs] = (187.0 - 183.0);
        }
        else if (a > (151 - 67) && a < (145 - 55)) {
            jidian[o2STB8fbIs] = (485.7 - 482.0);
        }
        else if ((550 - 469) < a && a < (248 - 163)) {
            jidian[o2STB8fbIs] = 3.3;
        }
        else if (a > (349 - 272) && a < (336 - 254)) {
            jidian[o2STB8fbIs] = (507.0 - 504.0);
        }
        else if (a > (514 - 440) && a < (363 - 285)) {
            jidian[o2STB8fbIs] = (823.7 - 821.0);
        }
        else if ((919 - 848) < a && (668 - 593) > a) {
            jidian[o2STB8fbIs] = (386.3 - 384.0);
        }
        else if (a > (224 - 157) && a < (908 - 836)) {
            jidian[o2STB8fbIs] = (574.0 - 572.0);
        }
        else if (a > (446 - 383) && a < (369 - 301)) {
            jidian[o2STB8fbIs] = (872.5 - 871.0);
        }
        else if (a > (315 - 256) && a < (923 - 859)) {
            jidian[o2STB8fbIs] = (485.0 - 484.0);
        }
        else {
            jidian[o2STB8fbIs] = (711.0 - 711.0);
        }
    }
    for (o2STB8fbIs = 0; o2STB8fbIs < fc3VSa; o2STB8fbIs = o2STB8fbIs + (487 - 486)) {
        jidian[o2STB8fbIs] = jidian[o2STB8fbIs] * vz6W9v4CGqM[o2STB8fbIs];
    }
    for (o2STB8fbIs = 0; o2STB8fbIs < fc3VSa; o2STB8fbIs = o2STB8fbIs + 1) {
        tbaIoK8V += jidian[o2STB8fbIs];
        vtnqNu += vz6W9v4CGqM[o2STB8fbIs];
    }
    D0oHBxF3GjrK = tbaIoK8V / vtnqNu;
    printf ("%.2f", D0oHBxF3GjrK);
    return 0;
}

