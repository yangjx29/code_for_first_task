int main () {
    int oulPEQ9Uw6p;
    int EzfJZy;
    char U43PxyZo [LEN];
    int oRoVCXnO2TM;
    int JOvH2n9jqlrA;
    int K3pA8gPr6tKD;
    int mnlen;
    oRoVCXnO2TM = (701 - 701);
    JOvH2n9jqlrA = (546 - 546);
    K3pA8gPr6tKD = 0;
    mnlen = (1583 - 583);
    int xyA1F58;
    int miO7YnfdT;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int aiNrtwgD;
    xyA1F58 = 0;
    miO7YnfdT = 0;
    EzfJZy = 0;
    fgets (U43PxyZo, LEN, stdin);
    while (!('\0' == U43PxyZo[xyA1F58])) {
        aiNrtwgD = 0;
        while (isalpha (U43PxyZo[xyA1F58])) {
            aiNrtwgD = aiNrtwgD + 1;
            xyA1F58 = xyA1F58 + 1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (aiNrtwgD > 0) {
            miO7YnfdT = miO7YnfdT + 1;
            oRoVCXnO2TM = (K3pA8gPr6tKD >= aiNrtwgD) ? oRoVCXnO2TM : miO7YnfdT;
            JOvH2n9jqlrA = (mnlen <= aiNrtwgD) ? JOvH2n9jqlrA : miO7YnfdT;
            K3pA8gPr6tKD = (K3pA8gPr6tKD >= aiNrtwgD) ? K3pA8gPr6tKD : aiNrtwgD;
            mnlen = (mnlen <= aiNrtwgD) ? mnlen : aiNrtwgD;
        }
        for (; (!isalpha (U43PxyZo[xyA1F58])) && (U43PxyZo[xyA1F58] != '\0');)
            xyA1F58 = xyA1F58 + 1;
    }
    oulPEQ9Uw6p = 0;
    for (xyA1F58 = 0; U43PxyZo[xyA1F58] != '\0'; xyA1F58 = xyA1F58 + 1) {
        if (!isalpha (U43PxyZo[xyA1F58]))
            oulPEQ9Uw6p = 0;
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (oulPEQ9Uw6p == 0) {
                EzfJZy = EzfJZy +1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                oulPEQ9Uw6p = 1;
            };
        }
        if (EzfJZy == oRoVCXnO2TM)
            break;
    }
    EzfJZy = 0;
    for (aiNrtwgD = 0; aiNrtwgD < K3pA8gPr6tKD; aiNrtwgD = aiNrtwgD + 1)
        printf ("%c", U43PxyZo[xyA1F58 + aiNrtwgD]);
    oulPEQ9Uw6p = 0;
    for (xyA1F58 = 0; U43PxyZo[xyA1F58] != '\0'; xyA1F58 = xyA1F58 + 1) {
        if (!isalpha (U43PxyZo[xyA1F58]))
            oulPEQ9Uw6p = 0;
        else if (oulPEQ9Uw6p == 0) {
            oulPEQ9Uw6p = 1;
            EzfJZy++;
        }
        if (EzfJZy == JOvH2n9jqlrA)
            break;
    }
    {
        aiNrtwgD = 0;
        while (aiNrtwgD < mnlen) {
            printf ("%c", U43PxyZo[xyA1F58 + aiNrtwgD]);
            aiNrtwgD = aiNrtwgD + 1;
        };
    }
    return 0;
}

