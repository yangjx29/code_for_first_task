int main (int argc, char *kQghZxvyeUL5 []) {
    int imUdGq;
    int vgyLAOm;
    int kgDFAR;
    int O9kltu;
    int aMc8DGSU;
    int gX0klphtnH9z;
    int endDay;
    int S6pFKgyhBviW;
    int qeEBCi;
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
    int OaRsT8QVXiH;
    const  int HYM3Ia1i [14] = {(685 - 685), 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const  int ySpcZkwtP0Gu [14] = {(456 - 456), (852 - 821), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    O9kltu = 0;
    scanf ("%d%d%d", &S6pFKgyhBviW, &qeEBCi, &OaRsT8QVXiH);
    scanf ("%d%d%d", &aMc8DGSU, &gX0klphtnH9z, &endDay);
    if (!(aMc8DGSU != S6pFKgyhBviW)) {
        if ((S6pFKgyhBviW % 4 == 0 && !(0 == S6pFKgyhBviW % 100)) || (!(0 != S6pFKgyhBviW % 400))) {
            if (!(gX0klphtnH9z != qeEBCi))
                O9kltu = endDay - OaRsT8QVXiH;
            else {
                for (kgDFAR = qeEBCi; gX0klphtnH9z > kgDFAR; kgDFAR = kgDFAR + 1)
                    O9kltu += HYM3Ia1i[kgDFAR];
                O9kltu = O9kltu +endDay - OaRsT8QVXiH;
            };
        }
        else if (!(gX0klphtnH9z != qeEBCi))
            O9kltu = endDay - OaRsT8QVXiH;
        else {
            for (kgDFAR = qeEBCi; gX0klphtnH9z > kgDFAR; kgDFAR++)
                O9kltu = O9kltu +ySpcZkwtP0Gu[kgDFAR];
            O9kltu = O9kltu +endDay - OaRsT8QVXiH;
        }
        printf ("%d", O9kltu);
        return 0;
    }
    for (vgyLAOm = S6pFKgyhBviW; aMc8DGSU >= vgyLAOm; vgyLAOm = vgyLAOm + 1) {
        if ((vgyLAOm % 4 == 0 && vgyLAOm % 100 != 0) || (!(0 != vgyLAOm % 400)))
            imUdGq = 1;
        else
            imUdGq = 0;
        if (vgyLAOm == S6pFKgyhBviW) {
            if (imUdGq == 1)
                for (kgDFAR = qeEBCi; kgDFAR <= 12; kgDFAR++)
                    O9kltu += HYM3Ia1i[kgDFAR];
            else
                for (kgDFAR = qeEBCi; kgDFAR <= 12; kgDFAR++)
                    O9kltu += ySpcZkwtP0Gu[kgDFAR];
            O9kltu = O9kltu -OaRsT8QVXiH;
        }
        else if (vgyLAOm == aMc8DGSU) {
            if (imUdGq == 1)
                for (kgDFAR = 1; kgDFAR < gX0klphtnH9z; kgDFAR++)
                    O9kltu += HYM3Ia1i[kgDFAR];
            else
                for (kgDFAR = 1; kgDFAR < gX0klphtnH9z; kgDFAR++)
                    O9kltu += ySpcZkwtP0Gu[kgDFAR];
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
            O9kltu = O9kltu +endDay;
        }
        else {
            if (imUdGq == 1)
                for (kgDFAR = 1; kgDFAR <= 12; kgDFAR++)
                    O9kltu += HYM3Ia1i[kgDFAR];
            else
                for (kgDFAR = 1; kgDFAR <= 12; kgDFAR++)
                    O9kltu += ySpcZkwtP0Gu[kgDFAR];
        };
    }
    printf ("%d", O9kltu);
    return 0;
}

