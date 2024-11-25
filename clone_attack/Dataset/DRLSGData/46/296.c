int nYJWPnZG24zL [(414 - 309)] [105];

int main () {
    int Tou8vmCGl;
    int FboXUJse;
    int WdahgB [(195 - 191)] = {(926 - 926), (384 - 383), (747 - 747), -(353 - 352)};
    int Q4nx6N2 [(556 - 552)] = {(542 - 541), (285 - 285), -(360 - 359), (433 - 433)};
    int mp5zNhL;
    int aRG1by;
    mp5zNhL = (258 - 257);
    aRG1by = (292 - 291);
    int ol7FCRU6yhIE;
    ol7FCRU6yhIE = (738 - 738);
    cin >> Tou8vmCGl >> FboXUJse;
    {
        int xlZp1CRs4MH;
        xlZp1CRs4MH = (976 - 975);
        while (Tou8vmCGl >= xlZp1CRs4MH) {
            int Rm3eLi;
            Rm3eLi = (749 - 748);
            while (Rm3eLi <= FboXUJse) {
                cin >> nYJWPnZG24zL[xlZp1CRs4MH][Rm3eLi];
                Rm3eLi++;
            }
            xlZp1CRs4MH++;
        }
    }
    while ((344 - 343)) {
        cout << nYJWPnZG24zL[mp5zNhL][aRG1by] << endl;
        nYJWPnZG24zL[mp5zNhL][aRG1by] = (867 - 867);
        if (nYJWPnZG24zL[mp5zNhL + WdahgB[ol7FCRU6yhIE]][aRG1by + Q4nx6N2[ol7FCRU6yhIE]] > 0) {
            mp5zNhL = mp5zNhL + WdahgB[ol7FCRU6yhIE];
            aRG1by = aRG1by + Q4nx6N2[ol7FCRU6yhIE];
        }
        else {
            ol7FCRU6yhIE = (ol7FCRU6yhIE + 1) % 4;
            if (nYJWPnZG24zL[mp5zNhL + WdahgB[ol7FCRU6yhIE]][aRG1by + Q4nx6N2[ol7FCRU6yhIE]] == 0)
                break;
            else {
                mp5zNhL = mp5zNhL + WdahgB[ol7FCRU6yhIE];
                aRG1by = aRG1by + Q4nx6N2[ol7FCRU6yhIE];
            }
        }
    }
    return 0;
}

