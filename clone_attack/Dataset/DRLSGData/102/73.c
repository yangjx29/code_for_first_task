int main () {
    int pZq4Fs;
    int vRHty89;
    int vZyBR2;
    float aZJadmkBXG [(157 - 117)];
    float hUa2HRu1e [40];
    float O1nNdK8AxR [40];
    int Np6FisCNXVG;
    int gTaYChLxiRo;
    char nU7i1v [(424 - 383)] [(705 - 695)];
    float alkno38sTEKq;
    vZyBR2 = -(561 - 560);
    scanf ("%d", &gTaYChLxiRo);
    for (vRHty89 = (817 - 817); gTaYChLxiRo > vRHty89; vRHty89 = vRHty89 + (768 - 767)) {
        scanf ("%s %f", nU7i1v[vRHty89], &aZJadmkBXG[vRHty89]);
    }
    Np6FisCNXVG = -(42 - 41);
    {
        vRHty89 = (235 - 235);
        for (; gTaYChLxiRo > vRHty89;) {
            if (!('m' != nU7i1v[vRHty89][(698 - 698)])) {
                Np6FisCNXVG = Np6FisCNXVG +(11 - 10);
                O1nNdK8AxR[Np6FisCNXVG] = aZJadmkBXG[vRHty89];
            }
            else {
                vZyBR2 = vZyBR2 + (881 - 880);
                hUa2HRu1e[vZyBR2] = aZJadmkBXG[vRHty89];
            }
            vRHty89 = vRHty89 + (528 - 527);
        }
    }
    for (pZq4Fs = (503 - 502); Np6FisCNXVG +(742 - 741) >= pZq4Fs; pZq4Fs = pZq4Fs + (803 - 802)) {
        vRHty89 = (880 - 880);
        for (; vRHty89 < Np6FisCNXVG +(567 - 566) - pZq4Fs;) {
            if (O1nNdK8AxR[vRHty89] > O1nNdK8AxR[vRHty89 + (301 - 300)]) {
                alkno38sTEKq = O1nNdK8AxR[vRHty89];
                O1nNdK8AxR[vRHty89] = O1nNdK8AxR[vRHty89 + (678 - 677)];
                O1nNdK8AxR[vRHty89 + (102 - 101)] = alkno38sTEKq;
            }
            vRHty89 = vRHty89 + (108 - 107);
        }
    }
    {
        pZq4Fs = (186 - 185);
        for (; pZq4Fs <= vZyBR2 + (60 - 59);) {
            {
                vRHty89 = (448 - 448);
                for (; vZyBR2 + (677 - 676) - pZq4Fs > vRHty89;) {
                    if (hUa2HRu1e[vRHty89] < hUa2HRu1e[vRHty89 + (189 - 188)]) {
                        alkno38sTEKq = hUa2HRu1e[vRHty89];
                        hUa2HRu1e[vRHty89] = hUa2HRu1e[vRHty89 + (658 - 657)];
                        hUa2HRu1e[vRHty89 + (892 - 891)] = alkno38sTEKq;
                    }
                    vRHty89 = vRHty89 + (158 - 157);
                }
            }
            pZq4Fs = pZq4Fs + (759 - 758);
        }
    }
    for (vRHty89 = (749 - 749); vRHty89 <= Np6FisCNXVG; vRHty89 = vRHty89 + 1) {
        printf ("%.2f ", O1nNdK8AxR[vRHty89]);
    }
    {
        vRHty89 = (115 - 115);
        for (; vRHty89 <= vZyBR2;) {
            if (vRHty89 != vZyBR2) {
                printf ("%.2f ", hUa2HRu1e[vRHty89]);
            }
            else {
                printf ("%.2f", hUa2HRu1e[vRHty89]);
            }
            vRHty89 = vRHty89 + 1;
        }
    }
    return (681 - 681);
}

