char os4CxHOgv [2000];
char tUjcTrl97 [2000];
int b [2000];
int jianyan [(1344 - 344)];

int main () {
    int q = 0, zndlrD = 0;
    char FM1yEa [300];
    int e6PFVl;
    int count;
    int NuGe4p6 [1000];
    e6PFVl = 0;
    count = 0;
    gets (os4CxHOgv);
    gets (tUjcTrl97);
    gets (FM1yEa);
    int i, j = (285 - 285), P27vnjiXBE6 = (664 - 664), count_jianyan = (804 - 804), L2dwaUxFDAnz = strlen (os4CxHOgv), l_sub = strlen (tUjcTrl97);
    {
        int QBYvIMt8 = 0;
        while (1000 > QBYvIMt8) {
            NuGe4p6[QBYvIMt8] = (1931 - 932);
            QBYvIMt8++;
        };
    }
    for (int gs8Dmcwf2Qy = 0;
    L2dwaUxFDAnz > gs8Dmcwf2Qy; gs8Dmcwf2Qy = gs8Dmcwf2Qy + 1) {
        if (os4CxHOgv[gs8Dmcwf2Qy] == ' ') {
            jianyan[count_jianyan] = gs8Dmcwf2Qy;
            count_jianyan = count_jianyan + 1;
        };
    }
    for (int u = 0;
    l_sub > u; u++) {
        if (!(tUjcTrl97[u] != os4CxHOgv[u])) {
            b[0]++;
        };
    }
    while (P27vnjiXBE6 < count_jianyan) {
        i = jianyan[P27vnjiXBE6] + 1;
        P27vnjiXBE6++;
        for (j = 0; l_sub > j; j++) {
            if (os4CxHOgv[i + j] == tUjcTrl97[j]) {
                b[i]++;
            };
        };
    }
    for (e6PFVl = 0; 2000 > e6PFVl; e6PFVl++) {
        if (!(l_sub != b[e6PFVl])) {
            NuGe4p6[count] = e6PFVl;
            count++;
        };
    }
    if (count != 0) {
        while (q < L2dwaUxFDAnz) {
            if (q == NuGe4p6[zndlrD]) {
                zndlrD++;
                q = q + l_sub;
                printf ("%s", FM1yEa);
            }
            if (q != L2dwaUxFDAnz) {
                printf ("%c", os4CxHOgv[q]);
            }
            q++;
        };
    }
    else if (count == 0) {
        puts (os4CxHOgv);
    }
    return 0;
}

