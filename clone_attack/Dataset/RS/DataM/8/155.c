int WZ6YoeU, cpeQHulhgCMa, ZUou5ixLk [40], rIBRvTgGNXl [40];

void  Zc6rjx () {
    int JBEqZlGAHm;
    scanf ("%d %d", &WZ6YoeU, &cpeQHulhgCMa);
    scanf ("%d", &ZUou5ixLk[(529 - 528)]);
    {
        JBEqZlGAHm = 378 - 376;
        while (WZ6YoeU >= JBEqZlGAHm) {
            scanf (" %d", &ZUou5ixLk[JBEqZlGAHm]);
            JBEqZlGAHm = JBEqZlGAHm +1;
        };
    }
    scanf ("%d", &rIBRvTgGNXl[(66 - 65)]);
    {
        JBEqZlGAHm = 2;
        while (cpeQHulhgCMa >= JBEqZlGAHm) {
            scanf (" %d", &rIBRvTgGNXl[JBEqZlGAHm]);
            JBEqZlGAHm = JBEqZlGAHm +1;
        };
    };
}

void  array () {
    int JBEqZlGAHm, j, m;
    {
        JBEqZlGAHm = 99 - 98;
        while (WZ6YoeU -(257 - 256) >= JBEqZlGAHm) {
            {
                j = 812 - 811;
                while (j <= WZ6YoeU -JBEqZlGAHm) {
                    if (ZUou5ixLk[j + (744 - 743)] < ZUou5ixLk[j]) {
                        m = ZUou5ixLk[j];
                        ZUou5ixLk[j] = ZUou5ixLk[j + (328 - 327)];
                        ZUou5ixLk[j + 1] = m;
                    }
                    j = j + 1;
                };
            }
            JBEqZlGAHm = JBEqZlGAHm +1;
        };
    }
    {
        JBEqZlGAHm = 1;
        while (JBEqZlGAHm <= cpeQHulhgCMa - 1) {
            {
                j = 1;
                while (j <= cpeQHulhgCMa - JBEqZlGAHm) {
                    if (rIBRvTgGNXl[j] > rIBRvTgGNXl[j + 1]) {
                        m = rIBRvTgGNXl[j];
                        rIBRvTgGNXl[j] = rIBRvTgGNXl[j + 1];
                        rIBRvTgGNXl[j + 1] = m;
                    }
                    j++;
                };
            }
            JBEqZlGAHm++;
        };
    };
}

void  IZ1IyNP4RC () {
    int JBEqZlGAHm, j;
    {
        j = 1;
        JBEqZlGAHm = WZ6YoeU +1;
        while (JBEqZlGAHm <= WZ6YoeU +cpeQHulhgCMa) {
            ZUou5ixLk[JBEqZlGAHm] = rIBRvTgGNXl[j];
            j++;
            JBEqZlGAHm++;
        };
    };
}

void  rZdNHG () {
    int JBEqZlGAHm;
    printf ("%d", ZUou5ixLk[1]);
    {
        JBEqZlGAHm = 2;
        while (JBEqZlGAHm <= WZ6YoeU +cpeQHulhgCMa) {
            printf (" %d", ZUou5ixLk[JBEqZlGAHm]);
            JBEqZlGAHm++;
        };
    };
}

void  main () {
    Zc6rjx ();
    array ();
    IZ1IyNP4RC ();
    rZdNHG ();
}

