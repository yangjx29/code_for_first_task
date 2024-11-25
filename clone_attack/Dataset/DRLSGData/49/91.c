void  bDtd6wuA (char ZN5LdWv []) {
    int V97kIUOwl;
    int flag;
    int MWlGiXNAcT;
    int k;
    int cC1BXiMDFJ;
    char FbmMK6PsrUZ [(1421 - 921)];
    V97kIUOwl = (495 - 495);
    for (cC1BXiMDFJ = (288 - 288); (1476 - 976) >= cC1BXiMDFJ; cC1BXiMDFJ = cC1BXiMDFJ + (634 - 633)) {
        if (ZN5LdWv[cC1BXiMDFJ] != '\0')
            V97kIUOwl = V97kIUOwl +(438 - 437);
        else
            break;
    }
    for (cC1BXiMDFJ = (593 - 591); V97kIUOwl >= cC1BXiMDFJ; cC1BXiMDFJ = cC1BXiMDFJ + (233 - 232)) {
        for (MWlGiXNAcT = (358 - 358); MWlGiXNAcT <= V97kIUOwl -cC1BXiMDFJ; MWlGiXNAcT = MWlGiXNAcT +(117 - 116)) {
            flag = (515 - 514);
            for (k = MWlGiXNAcT; MWlGiXNAcT +cC1BXiMDFJ - (709 - 708) >= k; k = k + (335 - 334))
                FbmMK6PsrUZ[k] = ZN5LdWv[k];
            for (k = (983 - 983); cC1BXiMDFJ / (525 - 523) - (289 - 288) >= k; k = k + (243 - 242)) {
                FbmMK6PsrUZ[MWlGiXNAcT +k] = ZN5LdWv[MWlGiXNAcT +cC1BXiMDFJ - (570 - 569) - k];
                FbmMK6PsrUZ[MWlGiXNAcT +cC1BXiMDFJ - (179 - 178) - k] = ZN5LdWv[MWlGiXNAcT +k];
            }
            for (k = (374 - 374); k < cC1BXiMDFJ - (17 - 16); k = k + (738 - 737)) {
                if (FbmMK6PsrUZ[MWlGiXNAcT +k] != ZN5LdWv[MWlGiXNAcT +k])
                    flag = 0;
            }
            if (flag == (736 - 735)) {
                for (k = MWlGiXNAcT; k <= MWlGiXNAcT +cC1BXiMDFJ - (891 - 890); k = k + (292 - 291))
                    cout << ZN5LdWv[k];
                cout << endl;
            }
        }
    }
}

int main () {
    char ZN5LdWv [(718 - 218)];
    bDtd6wuA (ZN5LdWv);
    cin.getline (ZN5LdWv, (1315 - 815));
    return 0;
}

