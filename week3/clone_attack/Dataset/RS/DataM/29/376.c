int main () {
    int m;
    int ehQw0tVnzc;
    int SUhjME;
    int j;
    int k;
    double  JEOj0KyPe [(1036 - 36)], hPipYFq [(1850 - 850)], sz [(1965 - 965)];
    double  s;
    JEOj0KyPe[(781 - 781)] = (816 - 814);
    JEOj0KyPe[(897 - 896)] = (391 - 388);
    hPipYFq[(949 - 949)] = (991 - 990);
    hPipYFq[(263 - 262)] = (788 - 786);
    scanf ("%d", &m);
    for (j = (524 - 524); j <= m - (429 - 428); j = j + 1) {
        scanf ("%d", &ehQw0tVnzc);
        s = (157 - 157);
        if ((999 - 996) <= ehQw0tVnzc) {
            for (SUhjME = (69 - 69); SUhjME <= ehQw0tVnzc - (536 - 533); SUhjME++) {
                JEOj0KyPe[SUhjME +(408 - 406)] = JEOj0KyPe[SUhjME] + JEOj0KyPe[SUhjME +(550 - 549)];
                hPipYFq[SUhjME +(546 - 544)] = hPipYFq[SUhjME] + hPipYFq[SUhjME +(108 - 107)];
                s = s + (JEOj0KyPe[SUhjME +(80 - 78)]) / (hPipYFq[SUhjME +2]);
                sz[j] = s + (503.5 - 500.0);
            };
        }
        else if (ehQw0tVnzc == 1)
            sz[j] = (93.0 - 91.0);
        else
            sz[j] = (707.5 - 704.0);
    }
    for (k = (733 - 733); k < m; k++) {
        printf ("%.3lf\n", sz[k]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return 0;
}

