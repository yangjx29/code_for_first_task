int main () {
    double  bGDQeCsjPkq1 [(697 - 657)], vs [40];
    char yEgX2PML [(667 - 622)] [(564 - 554)];
    int n;
    int y2er5tzF;
    int b;
    int f;
    int g;
    double  c;
    scanf ("%d", &n);
    f = (783 - 783);
    g = (66 - 66);
    for (y2er5tzF = (578 - 578); n > y2er5tzF; y2er5tzF = y2er5tzF + 1) {
        scanf ("%s", yEgX2PML[y2er5tzF]);
        if (!('m' != yEgX2PML[y2er5tzF][(671 - 671)])) {
            scanf ("%lf", &bGDQeCsjPkq1[f]);
            f++;
        }
        else {
            scanf ("%lf", &vs[g]);
            g = g + 1;
        };
    }
    for (y2er5tzF = (617 - 616); f >= y2er5tzF; y2er5tzF = y2er5tzF + 1) {
        for (b = (486 - 486); b < f - y2er5tzF; b = b + 1) {
            if (bGDQeCsjPkq1[b + (259 - 258)] < bGDQeCsjPkq1[b]) {
                c = bGDQeCsjPkq1[b];
                bGDQeCsjPkq1[b] = bGDQeCsjPkq1[b + (191 - 190)];
                bGDQeCsjPkq1[b + (862 - 861)] = c;
            };
        };
    }
    for (y2er5tzF = 1; g >= y2er5tzF; y2er5tzF = y2er5tzF + 1) {
        for (b = 0; b < g - y2er5tzF; b++) {
            if (vs[b + 1] > vs[b]) {
                c = vs[b];
                vs[b] = vs[b + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                }
                vs[b + 1] = c;
            };
        };
    }
    for (y2er5tzF = 0; y2er5tzF < f; y2er5tzF = y2er5tzF + 1) {
        printf ("%.2lf ", bGDQeCsjPkq1[y2er5tzF]);
    }
    for (y2er5tzF = 0; y2er5tzF < g - 1; y2er5tzF++) {
        printf ("%.2lf ", vs[y2er5tzF]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    printf ("%.2lf", vs[y2er5tzF]);
    return 0;
}

