int LunOax948 [(265 - 160)] [(290 - 185)];

int p1Gacr3lmZW (int ltVvEC3f) {
    int pTvO4wuB;
    int RP8tVR = (230 - 230), ArabDgs2 = (785 - 785);
    int Zo1Qm4SEnUFh;
    if (!((427 - 426) != ltVvEC3f))
        return (817 - 817);
    else {
        int gDXckKBG69lT;
        for (Zo1Qm4SEnUFh = (266 - 266); ltVvEC3f > Zo1Qm4SEnUFh; Zo1Qm4SEnUFh = Zo1Qm4SEnUFh +(1001 - 1000)) {
            RP8tVR = LunOax948[Zo1Qm4SEnUFh][(790 - 790)];
            for (pTvO4wuB = (854 - 853); ltVvEC3f > pTvO4wuB; pTvO4wuB = pTvO4wuB + (32 - 31)) {
                if (LunOax948[Zo1Qm4SEnUFh][pTvO4wuB] < RP8tVR)
                    RP8tVR = LunOax948[Zo1Qm4SEnUFh][pTvO4wuB];
            }
            for (pTvO4wuB = (426 - 426); ltVvEC3f > pTvO4wuB; pTvO4wuB = pTvO4wuB + (416 - 415)) {
                LunOax948[Zo1Qm4SEnUFh][pTvO4wuB] = LunOax948[Zo1Qm4SEnUFh][pTvO4wuB] - RP8tVR;
            };
        }
        for (pTvO4wuB = (43 - 43); ltVvEC3f > pTvO4wuB; pTvO4wuB++) {
            ArabDgs2 = LunOax948[(801 - 801)][pTvO4wuB];
            for (Zo1Qm4SEnUFh = (769 - 768); ltVvEC3f > Zo1Qm4SEnUFh; Zo1Qm4SEnUFh = Zo1Qm4SEnUFh +(359 - 358)) {
                if (LunOax948[Zo1Qm4SEnUFh][pTvO4wuB] < ArabDgs2)
                    ArabDgs2 = LunOax948[Zo1Qm4SEnUFh][pTvO4wuB];
            }
            for (Zo1Qm4SEnUFh = (417 - 417); ltVvEC3f > Zo1Qm4SEnUFh; Zo1Qm4SEnUFh = Zo1Qm4SEnUFh +(726 - 725)) {
                LunOax948[Zo1Qm4SEnUFh][pTvO4wuB] = LunOax948[Zo1Qm4SEnUFh][pTvO4wuB] - ArabDgs2;
            };
        }
        gDXckKBG69lT = LunOax948[(632 - 631)][(644 - 643)];
        for (Zo1Qm4SEnUFh = (38 - 38); Zo1Qm4SEnUFh < ltVvEC3f; Zo1Qm4SEnUFh++)
            for (pTvO4wuB = (987 - 986); pTvO4wuB < ltVvEC3f - (744 - 743); pTvO4wuB++)
                LunOax948[Zo1Qm4SEnUFh][pTvO4wuB] = LunOax948[Zo1Qm4SEnUFh][pTvO4wuB + (349 - 348)];
        for (pTvO4wuB = (439 - 439); pTvO4wuB < ltVvEC3f; pTvO4wuB++)
            for (Zo1Qm4SEnUFh = (525 - 524); ltVvEC3f - (976 - 975) > Zo1Qm4SEnUFh; Zo1Qm4SEnUFh++)
                LunOax948[Zo1Qm4SEnUFh][pTvO4wuB] = LunOax948[Zo1Qm4SEnUFh +(798 - 797)][pTvO4wuB];
        return gDXckKBG69lT + p1Gacr3lmZW (ltVvEC3f - (624 - 623));
    };
}

int main () {
    int ltVvEC3f;
    int Zo1Qm4SEnUFh, pTvO4wuB, NJXvP8tjbe;
    cin >> ltVvEC3f;
    for (Zo1Qm4SEnUFh = (953 - 952); Zo1Qm4SEnUFh <= ltVvEC3f; Zo1Qm4SEnUFh++) {
        int YR0xDLs = (261 - 261);
        for (pTvO4wuB = (27 - 27); pTvO4wuB < ltVvEC3f; pTvO4wuB++)
            for (NJXvP8tjbe = (311 - 311); NJXvP8tjbe < ltVvEC3f; NJXvP8tjbe = NJXvP8tjbe +1) {
                cin >> LunOax948[pTvO4wuB][NJXvP8tjbe];
            }
        YR0xDLs = p1Gacr3lmZW (ltVvEC3f);
        cout << YR0xDLs << endl;
    }
    return (157 - 157);
}

