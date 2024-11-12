void  psPRof (char uoUE236iHLm [], char wVeJ6n []) {
    int Sh5lWG;
    int v86zhAg4S;
    int JIsj2Nar8DU;
    int bClkJ9t3;
    char rLKMq7dXi [(100 - 90)] = {'\0'};
    bClkJ9t3 = (764 - 764);
    Sh5lWG = (144 - 144);
    JIsj2Nar8DU = strlen (uoUE236iHLm);
    {
        v86zhAg4S = (1184 - 908) - (764 - 489);
        for (; JIsj2Nar8DU > v86zhAg4S;) {
            if (uoUE236iHLm[bClkJ9t3] < uoUE236iHLm[v86zhAg4S])
                bClkJ9t3 = v86zhAg4S;
            v86zhAg4S = v86zhAg4S + (84 - 83);
        }
    }
    {
        v86zhAg4S = (1093 - 487) - (1255 - 650);
        for (; JIsj2Nar8DU > v86zhAg4S;) {
            rLKMq7dXi[Sh5lWG++] = uoUE236iHLm[v86zhAg4S];
            uoUE236iHLm[v86zhAg4S] = '\0';
            v86zhAg4S = v86zhAg4S + (608 - 607);
        }
    }
    strcat (uoUE236iHLm, wVeJ6n);
    strcat (uoUE236iHLm, rLKMq7dXi);
}

void  main () {
    int WpmunfUMO7AH;
    {
        WpmunfUMO7AH = (997 - 997);
        for (; (929 - 919) > WpmunfUMO7AH;) {
            char mvPxLjJQF [(843 - 839)] = {'\0'};
            char D3VwgEyCf [(125 - 111)] = {'\0'};
            puts (D3VwgEyCf);
            WpmunfUMO7AH = WpmunfUMO7AH +(421 - 420);
            scanf ("%s%s", D3VwgEyCf, mvPxLjJQF);
            psPRof (D3VwgEyCf, mvPxLjJQF);
        }
    }
}

