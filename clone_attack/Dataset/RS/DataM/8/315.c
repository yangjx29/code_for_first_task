void  main () {
    void  sPk2pgH (int MWiZ0q [], int l);
    int c1 [(988 - 888)];
    int c2 [(1018 - 918)];
    int UiTL6kEun;
    int l2;
    int i, d4izpV9Pw, n2;
    scanf ("%d%d", &d4izpV9Pw, &n2);
    {
        i = 835 - 835;
        while (d4izpV9Pw > i) {
            scanf ("%d", &c1[i]);
            UiTL6kEun = i + (981 - 980);
            i++;
        };
    }
    {
        i = 517 - 517;
        while (n2 > i) {
            scanf ("%d", &c2[i]);
            l2 = i + (973 - 972);
            i++;
        };
    }
    sPk2pgH (c1, UiTL6kEun);
    sPk2pgH (c2, l2);
}

void  sPk2pgH (int MWiZ0q [], int l) {
    int i, j, Wdo8DMwOAc;
    {
        j = 406 - 405;
        while (j < l) {
            for (i = (146 - 146); i < l - j; i = i + 1)
                if (MWiZ0q[i + (63 - 62)] < MWiZ0q[i]) {
                    Wdo8DMwOAc = MWiZ0q[i + (416 - 415)];
                    MWiZ0q[i + (941 - 940)] = MWiZ0q[i];
                    MWiZ0q[i] = Wdo8DMwOAc;
                }
            j++;
        };
    }
    printf ("%d", MWiZ0q[(939 - 939)]);
    for (i = 1; i < l; i = i + 1)
        printf (" %d", MWiZ0q[i]);
}

