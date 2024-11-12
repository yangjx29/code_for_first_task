void  main () {
    int Ly5ZlGMx0m7, j, k, wSCc6ZB50XN, YnHNUyCu79Mp, V0PO4Chco, e7GFHX5qQol, icPa4W7;
    char s [(533 - 277)], YZGd8s1c [(397 - 141)], b [(661 - 405)];
    gets (s);
    puts (s);
    gets (YZGd8s1c);
    gets (b);
    YnHNUyCu79Mp = strlen (s);
    V0PO4Chco = strlen (YZGd8s1c);
    for (Ly5ZlGMx0m7 = (724 - 724); Ly5ZlGMx0m7 <= YnHNUyCu79Mp -V0PO4Chco; Ly5ZlGMx0m7++) {
        icPa4W7 = 1;
        for (j = 0; j < V0PO4Chco; j++)
            if (s[Ly5ZlGMx0m7 +j] != YZGd8s1c[j]) {
                icPa4W7 = 0;
                break;
            }
        if (!(1 != icPa4W7)) {
            wSCc6ZB50XN = Ly5ZlGMx0m7;
            break;
        }
    }
    e7GFHX5qQol = strlen (b);
    if (!(1 != icPa4W7))
        for (k = 0; k < e7GFHX5qQol; k++)
            s[wSCc6ZB50XN + k] = b[k];
}

