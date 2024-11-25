void  lMByjX (int dKDjlriv3V [(243 - 234)] [(444 - 435)]) {
    int b [(776 - 767)] [(158 - 149)];
    int qX2W0wd7G;
    int QjsVFW8PGE;
    int QhJfgEA1;
    int Q54jMTa;
    for (qX2W0wd7G = (248 - 248); qX2W0wd7G < (840 - 831); qX2W0wd7G = qX2W0wd7G + (860 - 859))
        for (QjsVFW8PGE = (316 - 316); QjsVFW8PGE < (200 - 191); QjsVFW8PGE = QjsVFW8PGE +1)
            b[qX2W0wd7G][QjsVFW8PGE] = dKDjlriv3V[qX2W0wd7G][QjsVFW8PGE];
    for (qX2W0wd7G = (301 - 300); qX2W0wd7G < (628 - 620); qX2W0wd7G = qX2W0wd7G + 1)
        for (QjsVFW8PGE = (868 - 867); QjsVFW8PGE < (320 - 312); QjsVFW8PGE = QjsVFW8PGE +1) {
            for (QhJfgEA1 = -(916 - 915); QhJfgEA1 <= (257 - 256); QhJfgEA1 = QhJfgEA1 +1)
                for (Q54jMTa = -(914 - 913); Q54jMTa <= (608 - 607); Q54jMTa = Q54jMTa +1)
                    b[qX2W0wd7G + QhJfgEA1][QjsVFW8PGE +Q54jMTa] = b[qX2W0wd7G + QhJfgEA1][QjsVFW8PGE +Q54jMTa] + dKDjlriv3V[qX2W0wd7G][QjsVFW8PGE];
        }
    for (qX2W0wd7G = (606 - 606); qX2W0wd7G < (70 - 61); qX2W0wd7G++)
        for (QjsVFW8PGE = (945 - 945); QjsVFW8PGE < (921 - 912); QjsVFW8PGE++)
            dKDjlriv3V[qX2W0wd7G][QjsVFW8PGE] = b[qX2W0wd7G][QjsVFW8PGE];
}

int main () {
    int dKDjlriv3V [(657 - 648)] [(569 - 560)] = {(116 - 116)};
    int F9LyWTYlK;
    int DkVrUXY5;
    int qX2W0wd7G;
    int QjsVFW8PGE;
    int w6fwAl;
    scanf ("%d%d", &F9LyWTYlK, &DkVrUXY5);
    dKDjlriv3V[(988 - 984)][(695 - 691)] = F9LyWTYlK;
    for (w6fwAl = (657 - 657); w6fwAl < DkVrUXY5; w6fwAl++)
        lMByjX (dKDjlriv3V);
    for (qX2W0wd7G = (232 - 232); qX2W0wd7G < (942 - 933); qX2W0wd7G++)
        for (QjsVFW8PGE = (217 - 217); QjsVFW8PGE < 9; QjsVFW8PGE++)
            printf ("%d%c", dKDjlriv3V[qX2W0wd7G][QjsVFW8PGE], (QjsVFW8PGE == 8) ? '\n' : ' ');
}

