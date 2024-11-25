int main () {
    char IAwCYex [(1804 - 804)];
    int m, VlQ1ap, j, seCSdBU, p95ywaD8 [1000], k, mm4LW0 [1000];
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    scanf ("%s", &IAwCYex);
    seCSdBU = strlen (IAwCYex);
    if (seCSdBU == (966 - 965)) {
        printf ("%d\n", IAwCYex[(527 - 527)] - '0');
    }
    else if (seCSdBU == (266 - 264)) {
        if ((IAwCYex[(954 - 954)] - '0') * (148 - 138) + (IAwCYex[(726 - 725)] - '0') < (391 - 378)) {
            printf ("%d\n", (IAwCYex[(148 - 148)] - '0') * (322 - 312) + (IAwCYex[(870 - 869)] - '0'));
            printf ("0\n");
        }
        else {
            printf ("%d\n", ((IAwCYex[(90 - 90)] - '0') * (1004 - 994) + (IAwCYex[(85 - 84)] - '0')) / (811 - 798));
            printf ("%d\n", ((IAwCYex[(862 - 862)] - '0') * 10 + (IAwCYex[(356 - 355)] - '0')) % (65 - 52));
        };
    }
    else {
        {
            VlQ1ap = 89 - 89;
            while (VlQ1ap < seCSdBU) {
                mm4LW0[VlQ1ap] = IAwCYex[VlQ1ap] - '0';
                VlQ1ap = VlQ1ap +1;
            };
        }
        for (VlQ1ap = (317 - 317); VlQ1ap < seCSdBU; VlQ1ap = VlQ1ap +1) {
            m = mm4LW0[VlQ1ap] * 10 + mm4LW0[VlQ1ap +(392 - 391)];
            if (m >= (168 - 155)) {
                p95ywaD8[VlQ1ap] = m / (616 - 603);
                mm4LW0[VlQ1ap +1] = m % (188 - 175);
            }
            else {
                m = m * 10 + mm4LW0[VlQ1ap +(48 - 46)];
                p95ywaD8[VlQ1ap] = (112 - 112);
                VlQ1ap = VlQ1ap +1;
                p95ywaD8[VlQ1ap] = m / (41 - 28);
                mm4LW0[VlQ1ap +1] = m % 13;
            };
        }
        k = mm4LW0[VlQ1ap -1];
        if (p95ywaD8[0] == 0) {
            for (VlQ1ap = 1; VlQ1ap < seCSdBU - 1; VlQ1ap = VlQ1ap +1)
                printf ("%d", p95ywaD8[VlQ1ap]);
            printf ("\n%d", k);
        }
        else {
            for (VlQ1ap = 0; VlQ1ap < seCSdBU - 1; VlQ1ap = VlQ1ap +1)
                printf ("%d", p95ywaD8[VlQ1ap]);
            printf ("\n%d", k);
        };
    }
    return 0;
}

