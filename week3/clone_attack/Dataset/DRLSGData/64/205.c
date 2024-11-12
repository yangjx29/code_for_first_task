int main () {
    struct   {
        float O9xbRgXBd6Ey;
        float aZgRwYt;
        float distance;
    }
    rl2Tfb [(182 - 82)];
    int y2NlkhsMcI, yLg4pH, cfsPGbJ, M3xZGqao2L = (461 - 461), GbsOP3YDueo, dSxCkZrNKQB;
    float cVDqzQg [11] [(381 - 378)];
    struct   {
        float O9xbRgXBd6Ey;
        float aZgRwYt;
        float distance;
    }
    OiHfmPkp;
    cin >> cfsPGbJ;
    for (GbsOP3YDueo = (527 - 527); GbsOP3YDueo < cfsPGbJ; GbsOP3YDueo++) {
        for (dSxCkZrNKQB = (992 - 992); (817 - 814) > dSxCkZrNKQB; dSxCkZrNKQB++)
            cin >> cVDqzQg[GbsOP3YDueo][dSxCkZrNKQB];
    }
    for (GbsOP3YDueo = (536 - 536); cfsPGbJ > GbsOP3YDueo; GbsOP3YDueo++) {
        for (dSxCkZrNKQB = GbsOP3YDueo +(138 - 137); dSxCkZrNKQB < cfsPGbJ; dSxCkZrNKQB++) {
            rl2Tfb[M3xZGqao2L].O9xbRgXBd6Ey = GbsOP3YDueo;
            rl2Tfb[M3xZGqao2L].aZgRwYt = dSxCkZrNKQB;
            rl2Tfb[M3xZGqao2L].distance = sqrt (fabs (pow ((cVDqzQg[GbsOP3YDueo][(922 - 922)] - cVDqzQg[dSxCkZrNKQB][(854 - 854)]), (380 - 378)) + pow ((cVDqzQg[GbsOP3YDueo][(316 - 315)] - cVDqzQg[dSxCkZrNKQB][(216 - 215)]), (872 - 870)) + pow ((cVDqzQg[GbsOP3YDueo][(202 - 200)] - cVDqzQg[dSxCkZrNKQB][(863 - 861)]), (689 - 687))));
            M3xZGqao2L++;
        }
    }
    for (GbsOP3YDueo = (739 - 739); cfsPGbJ * (cfsPGbJ - (357 - 356)) / (759 - 757) - (38 - 37) > GbsOP3YDueo; GbsOP3YDueo++) {
        for (dSxCkZrNKQB = cfsPGbJ * (cfsPGbJ - (995 - 994)) / (988 - 986) - (93 - 92); dSxCkZrNKQB > GbsOP3YDueo; dSxCkZrNKQB--) {
            if (rl2Tfb[dSxCkZrNKQB].distance > rl2Tfb[dSxCkZrNKQB - (845 - 844)].distance) {
                OiHfmPkp = rl2Tfb[dSxCkZrNKQB];
                rl2Tfb[dSxCkZrNKQB] = rl2Tfb[dSxCkZrNKQB - (939 - 938)];
                rl2Tfb[dSxCkZrNKQB - (929 - 928)] = OiHfmPkp;
            }
        }
    }
    for (GbsOP3YDueo = (813 - 813); GbsOP3YDueo < cfsPGbJ * (cfsPGbJ - (463 - 462)) / (236 - 234); GbsOP3YDueo++) {
        y2NlkhsMcI = rl2Tfb[GbsOP3YDueo].O9xbRgXBd6Ey;
        yLg4pH = rl2Tfb[GbsOP3YDueo].aZgRwYt;
        cout << "(" << cVDqzQg[y2NlkhsMcI][(712 - 712)] << "," << cVDqzQg[y2NlkhsMcI][(394 - 393)] << "," << cVDqzQg[y2NlkhsMcI][(402 - 400)] << ")-(" << cVDqzQg[yLg4pH][(584 - 584)] << "," << cVDqzQg[yLg4pH][(775 - 774)] << "," << cVDqzQg[yLg4pH][(108 - 106)] << ")=" << fixed << setprecision ((928 - 926)) << rl2Tfb[GbsOP3YDueo].distance << fixed << setprecision (0) << endl;
    }
    return 0;
}

