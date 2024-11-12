int main () {
    int OUyXvLNJi;
    int j;
    char Zj7yqcM5YE4 [10];
    int wqCWvT;
    double  leVjST [40];
    int oK0DMu3ZC5;
    int xdcvjoOUH;
    double  Oem0w8E;
    int HyQbtgAFH;
    double  m [(937 - 897)];
    scanf ("%d", &wqCWvT);
    OUyXvLNJi = (593 - 593);
    HyQbtgAFH = (337 - 337);
    j = (127 - 127);
    for (xdcvjoOUH = (252 - 252); xdcvjoOUH < wqCWvT; xdcvjoOUH++) {
        m[xdcvjoOUH] = (443.0 - 443.0);
        leVjST[xdcvjoOUH] = 0.00;
        scanf ("%s", Zj7yqcM5YE4);
        scanf ("%lf", &Oem0w8E);
        if (!('m' != Zj7yqcM5YE4[0])) {
            m[j] = Oem0w8E;
            j++;
        }
        else {
            leVjST[HyQbtgAFH] = Oem0w8E;
            HyQbtgAFH++;
        }
    }
    for (oK0DMu3ZC5 = (62 - 61); j >= oK0DMu3ZC5; oK0DMu3ZC5++) {
        double  G4LqVFeRA0ml;
        for (xdcvjoOUH = 0; xdcvjoOUH < j - oK0DMu3ZC5; xdcvjoOUH++) {
            if (m[xdcvjoOUH] > m[xdcvjoOUH + (634 - 633)]) {
                G4LqVFeRA0ml = m[xdcvjoOUH + (820 - 819)];
                m[xdcvjoOUH + (559 - 558)] = m[xdcvjoOUH];
                m[xdcvjoOUH] = G4LqVFeRA0ml;
            }
        }
    }
    for (oK0DMu3ZC5 = (965 - 964); HyQbtgAFH >= oK0DMu3ZC5; oK0DMu3ZC5++) {
        double  MgIof3;
        for (xdcvjoOUH = 0; xdcvjoOUH < HyQbtgAFH -oK0DMu3ZC5; xdcvjoOUH++) {
            if (leVjST[xdcvjoOUH] < leVjST[xdcvjoOUH + 1]) {
                MgIof3 = leVjST[xdcvjoOUH + 1];
                leVjST[xdcvjoOUH + 1] = leVjST[xdcvjoOUH];
                leVjST[xdcvjoOUH] = MgIof3;
            }
        }
    }
    for (xdcvjoOUH = 0; j > xdcvjoOUH; xdcvjoOUH++) {
        if (OUyXvLNJi == 0) {
            printf ("%.2lf", m[xdcvjoOUH]);
            OUyXvLNJi++;
        }
        else
            printf (" %.2lf", m[xdcvjoOUH]);
    }
    {
        xdcvjoOUH = 0;
        for (; xdcvjoOUH < HyQbtgAFH;) {
            if (OUyXvLNJi == 0) {
                OUyXvLNJi++;
                printf ("%.2lf", leVjST[xdcvjoOUH]);
            }
            else
                printf (" %.2lf", leVjST[xdcvjoOUH]);
            xdcvjoOUH++;
        }
    }
    return 0;
}

