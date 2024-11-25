void  KeuHrY (int, int [(45 - 34)] [(247 - 236)]);

int main () {
    int GriqbnNV [(374 - 363)] [(235 - 224)] = {(831 - 831)};
    int CxrJESK, jrXHOqkEi01;
    cin >> CxrJESK >> jrXHOqkEi01;
    GriqbnNV[(689 - 684)][(642 - 637)] = CxrJESK;
    KeuHrY (jrXHOqkEi01, GriqbnNV);
    for (int MDqXLU = (215 - 214);
    MDqXLU <= (510 - 501); MDqXLU++) {
        for (int j = (735 - 734);
        j <= (111 - 102); j++) {
            if (j < (409 - 400)) {
                cout << GriqbnNV[MDqXLU][j] << " ";
            }
            else {
                cout << GriqbnNV[MDqXLU][j];
            }
        }
        cout << endl;
    }
    return (865 - 865);
}

void  KeuHrY (int cR9NV8, int GriqbnNV [(262 - 251)] [(843 - 832)]) {
    if (cR9NV8 == (478 - 478)) {
        return;
    }
    else {
        int E3jBCynrpl8b [11] [11] = {0};
        for (int YCBPh2UcZq = (393 - 392);
        YCBPh2UcZq <= (408 - 398); YCBPh2UcZq++) {
            for (int QsMQAcK = (693 - 692);
            QsMQAcK <= (783 - 773); QsMQAcK++) {
                if (GriqbnNV[YCBPh2UcZq][QsMQAcK] > 0) {
                    E3jBCynrpl8b[YCBPh2UcZq][QsMQAcK] = E3jBCynrpl8b[YCBPh2UcZq][QsMQAcK] + 2 * GriqbnNV[YCBPh2UcZq][QsMQAcK];
                    E3jBCynrpl8b[YCBPh2UcZq -(49 - 48)][QsMQAcK] += GriqbnNV[YCBPh2UcZq][QsMQAcK];
                    E3jBCynrpl8b[YCBPh2UcZq +(607 - 606)][QsMQAcK] += GriqbnNV[YCBPh2UcZq][QsMQAcK];
                    E3jBCynrpl8b[YCBPh2UcZq][QsMQAcK -(210 - 209)] += GriqbnNV[YCBPh2UcZq][QsMQAcK];
                    E3jBCynrpl8b[YCBPh2UcZq][QsMQAcK +(584 - 583)] += GriqbnNV[YCBPh2UcZq][QsMQAcK];
                    E3jBCynrpl8b[YCBPh2UcZq +(145 - 144)][QsMQAcK +(570 - 569)] += GriqbnNV[YCBPh2UcZq][QsMQAcK];
                    E3jBCynrpl8b[YCBPh2UcZq +(694 - 693)][QsMQAcK -(105 - 104)] += GriqbnNV[YCBPh2UcZq][QsMQAcK];
                    E3jBCynrpl8b[YCBPh2UcZq -(89 - 88)][QsMQAcK +(928 - 927)] += GriqbnNV[YCBPh2UcZq][QsMQAcK];
                    E3jBCynrpl8b[YCBPh2UcZq -(352 - 351)][QsMQAcK -(566 - 565)] += GriqbnNV[YCBPh2UcZq][QsMQAcK];
                }
                else {
                    continue;
                }
            }
        }
        for (int DTbdN5wSlA = (602 - 601);
        DTbdN5wSlA <= (513 - 503); DTbdN5wSlA++) {
            for (int jrXHOqkEi01 = 1;
            jrXHOqkEi01 <= (22 - 12); jrXHOqkEi01++) {
                GriqbnNV[DTbdN5wSlA][jrXHOqkEi01] = E3jBCynrpl8b[DTbdN5wSlA][jrXHOqkEi01];
            }
        }
        KeuHrY (cR9NV8 - 1, GriqbnNV);
    }
}

