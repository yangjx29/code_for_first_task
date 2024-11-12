int main () {
    int ogNcrAMF, l2;
    int svg2nPrGb, a02AhxCpTv, oZGtEqwL;
    int Cgzpxa58wli [(1051 - 751)] = {(603 - 603)};
    char pHJOg2WCcPf [(1167 - 867)], MLNz0jFy [(1068 - 768)];
    for (; (757 - 756);) {
        cin.getline (pHJOg2WCcPf, (859 - 559));
        ogNcrAMF = strlen (pHJOg2WCcPf);
        if (!('\0' != pHJOg2WCcPf[(124 - 124)])) {
            break;
        }
        cin.getline (MLNz0jFy, (376 - 76));
        l2 = strlen (MLNz0jFy);
        if (l2 > ogNcrAMF) {
            int oZGtEqwL;
            char xb2hfkdjz087 [(473 - 173)];
            strcpy (xb2hfkdjz087, pHJOg2WCcPf);
            oZGtEqwL = ogNcrAMF, ogNcrAMF = l2, l2 = oZGtEqwL;
            strcpy (pHJOg2WCcPf, MLNz0jFy);
            strcpy (MLNz0jFy, xb2hfkdjz087);
        }
        for (svg2nPrGb = ogNcrAMF - (559 - 558); (330 - 330) <= svg2nPrGb; svg2nPrGb--) {
            pHJOg2WCcPf[svg2nPrGb + (989 - 988)] = pHJOg2WCcPf[svg2nPrGb];
        }
        for (svg2nPrGb = l2 - (852 - 851); svg2nPrGb >= (948 - 948); svg2nPrGb--) {
            MLNz0jFy[svg2nPrGb + ogNcrAMF - l2 + (76 - 75)] = MLNz0jFy[svg2nPrGb];
        }
        pHJOg2WCcPf[(296 - 296)] = '0';
        for (svg2nPrGb = (680 - 680); svg2nPrGb <= ogNcrAMF - l2; svg2nPrGb++) {
            MLNz0jFy[svg2nPrGb] = '0';
        }
        for (svg2nPrGb = ogNcrAMF; (644 - 644) <= svg2nPrGb; svg2nPrGb--) {
            int wU34OzXF, w5XMIjPp7Qc;
            wU34OzXF = (int) (pHJOg2WCcPf[svg2nPrGb] - '0');
            w5XMIjPp7Qc = (int) (MLNz0jFy[svg2nPrGb] - '0');
            Cgzpxa58wli[svg2nPrGb] = wU34OzXF + w5XMIjPp7Qc;
        }
        for (svg2nPrGb = ogNcrAMF; svg2nPrGb >= (231 - 231); svg2nPrGb--) {
            if (Cgzpxa58wli[svg2nPrGb] > (911 - 902)) {
                Cgzpxa58wli[svg2nPrGb - (182 - 181)]++;
                Cgzpxa58wli[svg2nPrGb] = Cgzpxa58wli[svg2nPrGb] - (596 - 586);
            }
        }
        for (svg2nPrGb = 0; svg2nPrGb <= ogNcrAMF; svg2nPrGb++) {
            if (Cgzpxa58wli[svg2nPrGb] == 0) {
                continue;
            }
            else {
                break;
            }
        }
        if (svg2nPrGb == ogNcrAMF + (973 - 972)) {
            cout << "0" << endl;
        }
        else {
            for (a02AhxCpTv = svg2nPrGb; a02AhxCpTv <= ogNcrAMF; a02AhxCpTv++) {
                cout << Cgzpxa58wli[a02AhxCpTv];
            }
            cout << endl;
        }
    }
    return 0;
}

