int main () {
    struct   young {
        char idy [(975 - 965)];
        int ay;
    }
    fl6fzQO7 [(446 - 346)];
    struct   patient {
        char id [(226 - 216)];
        int a;
    }
    SJcPCFEhemXR [(1041 - 941)];
    struct   old {
        char gYpgT4 [(990 - 980)];
        int widqxpf2ln;
    }
    WcuwlU9TzFQ [(727 - 627)];
    int y;
    int o;
    int FhE3A7kJ;
    int sy;
    int n;
    int e;
    y = (855 - 855);
    o = (663 - 663);
    FhE3A7kJ = (999 - 999);
    sy = (473 - 473);
    char f [(354 - 344)];
    scanf ("%d", &n);
    {
        int j = (391 - 391);
        while (j < n) {
            scanf ("%s", SJcPCFEhemXR[j].id);
            scanf ("%d", &SJcPCFEhemXR[j].a);
            if (SJcPCFEhemXR[j].a < (326 - 266)) {
                strcpy (fl6fzQO7[y].idy, SJcPCFEhemXR[j].id);
                fl6fzQO7[y].ay = SJcPCFEhemXR[j].a;
                y++;
            }
            if (SJcPCFEhemXR[j].a >= (608 - 548)) {
                strcpy (WcuwlU9TzFQ[o].gYpgT4, SJcPCFEhemXR[j].id);
                WcuwlU9TzFQ[o].widqxpf2ln = SJcPCFEhemXR[j].a;
                o++;
            }
            j = j + 1;
        };
    }
    {
        int lycHnT = o - (997 - 996);
        while (lycHnT > (220 - 220)) {
            {
                int i = (312 - 312);
                while (i < lycHnT) {
                    if (WcuwlU9TzFQ[i].widqxpf2ln < WcuwlU9TzFQ[i + (678 - 677)].widqxpf2ln) {
                        e = WcuwlU9TzFQ[i + (895 - 894)].widqxpf2ln;
                        WcuwlU9TzFQ[i + (948 - 947)].widqxpf2ln = WcuwlU9TzFQ[i].widqxpf2ln;
                        WcuwlU9TzFQ[i].widqxpf2ln = e;
                        strcpy (f, WcuwlU9TzFQ[i + (941 - 940)].gYpgT4);
                        strcpy (WcuwlU9TzFQ[i + (713 - 712)].gYpgT4, WcuwlU9TzFQ[i].gYpgT4);
                        strcpy (WcuwlU9TzFQ[i].gYpgT4, f);
                    }
                    i++;
                };
            }
            lycHnT = lycHnT - 1;
        };
    }
    for (int l = (539 - 539);
    l <= o - (338 - 337); l++) {
        printf ("%s\n", WcuwlU9TzFQ[l].gYpgT4);
    }
    for (int m = (327 - 327);
    m <= y - (208 - 207); m++) {
        printf ("%s\n", fl6fzQO7[m].idy);
    }
    return 0;
}

