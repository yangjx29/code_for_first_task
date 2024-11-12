int main () {
    char cqeaC8IGuvAQ [2] [999];
    int psEl9R8Y;
    psEl9R8Y = 0;
    int k;
    int io5KHUcG;
    int oD2AXhQt;
    k = (198 - 198);
    io5KHUcG = (57 - 57);
    int pom;
    pom = oD2AXhQt;
    char WcMs0YF9Siu [999];
    char c [999] [999], *nCwLvIhmG;
    char M6g0EVIH [(1570 - 571)], Oy62ftKFHO [999], *aa, *bb;
    gets (Oy62ftKFHO);
    gets (M6g0EVIH);
    int len = strlen (M6g0EVIH);
    int qhZI84p = strlen (Oy62ftKFHO);
    gets (WcMs0YF9Siu);
    for (bb = Oy62ftKFHO; *(bb + len - 1) != '\0'; bb = bb + 1, k++) {
        io5KHUcG = io5KHUcG + 1;
        oD2AXhQt = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (nCwLvIhmG = c[k]; oD2AXhQt < len; oD2AXhQt = oD2AXhQt + 1, nCwLvIhmG++) {
            *nCwLvIhmG = *(bb + oD2AXhQt);
        }
        *nCwLvIhmG = '\0';
    }
    for (oD2AXhQt = 0; oD2AXhQt < io5KHUcG; oD2AXhQt++) {
        if (strcmp (M6g0EVIH, c[oD2AXhQt]) == 0) {
            psEl9R8Y = 1;
            break;
        };
    }
    k = 0;
    {
        oD2AXhQt = 0;
        while (oD2AXhQt < pom) {
            cqeaC8IGuvAQ[0][oD2AXhQt] = Oy62ftKFHO[oD2AXhQt];
            oD2AXhQt = oD2AXhQt + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            cqeaC8IGuvAQ[0][pom] = '\0';
        };
    }
    for (oD2AXhQt = pom + len; oD2AXhQt < qhZI84p; oD2AXhQt++, k++) {
        cqeaC8IGuvAQ[1][k] = Oy62ftKFHO[oD2AXhQt];
    }
    cqeaC8IGuvAQ[1][k] = '\0';
    if (psEl9R8Y == 1) {
        printf ("%s%s%s", cqeaC8IGuvAQ[0], WcMs0YF9Siu, cqeaC8IGuvAQ[1]);
    }
    if (psEl9R8Y == 0) {
        puts (Oy62ftKFHO);
    }
    return 0;
}

