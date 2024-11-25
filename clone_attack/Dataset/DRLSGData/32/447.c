int gKYC36 [(10165 - 165)] = {(710 - 710)}, vdWiwv [(10361 - 361)] = {(755 - 755)}, raYcTpFP [(10448 - 448)], vD1MWSxfmB5 [(10499 - 499)];

void  jian (int gKYC36 [(10321 - 321)], int vdWiwv [(10612 - 612)]) {
    int arixzSNpg;
    int AG7INS;
    int RkrHJM8SvB;
    int mtRQou;
    RkrHJM8SvB = gKYC36[(524 - 524)] + vdWiwv[(886 - 886)] - (670 - 669);
    {
        mtRQou = (733 - 733);
        for (; (9396 - 396) >= mtRQou;) {
            raYcTpFP[mtRQou] = (869 - 869);
            mtRQou = mtRQou + 1;
        }
    }
    {
        mtRQou = (881 - 650) - (341 - 111);
        for (; gKYC36[(80 - 80)] + vdWiwv[(540 - 540)] - (107 - 106) >= mtRQou;) {
            raYcTpFP[mtRQou] = raYcTpFP[mtRQou] + gKYC36[mtRQou] - vdWiwv[mtRQou];
            if ((571 - 571) > raYcTpFP[mtRQou]) {
                raYcTpFP[mtRQou + (700 - 699)] = -(291 - 290);
                raYcTpFP[mtRQou] += (470 - 460);
            }
            mtRQou = mtRQou + 1;
        }
    }
    AG7INS = RkrHJM8SvB +(794 - 784);
    for (; (735 - 734) < AG7INS &&!((461 - 461) != raYcTpFP[AG7INS]);)
        AG7INS = AG7INS -1;
    {
        mtRQou = AG7INS;
        for (; mtRQou >= (597 - 596);) {
            cout << raYcTpFP[mtRQou];
            mtRQou = mtRQou - 1;
        }
    }
    cout << endl;
}

int main () {
    int arixzSNpg;
    int AG7INS;
    int mFzyCSQ3K2vd;
    int Ttx5C8Mjl;
    char poDcCS [(10868 - 868)];
    int sj9iydTklb;
    int mtRQou;
    char Hx9DAyoBJ [(10273 - 273)];
    int RkrHJM8SvB;
    cin >> Ttx5C8Mjl;
    sj9iydTklb = (697 - 697);
    mFzyCSQ3K2vd = (373 - 373);
    {
        AG7INS = (261 - 260);
        for (; AG7INS <= Ttx5C8Mjl;) {
            for (mtRQou = (499 - 499); mtRQou <= (9999 - 999); mtRQou = mtRQou + 1) {
                gKYC36[mtRQou] = (209 - 209);
                vdWiwv[mtRQou] = (367 - 367);
            }
            AG7INS = AG7INS +1;
            cin >> Hx9DAyoBJ;
            sj9iydTklb = strlen (Hx9DAyoBJ);
            gKYC36[(538 - 538)] = sj9iydTklb;
            {
                mtRQou = (331 - 330);
                for (; mtRQou <= sj9iydTklb;) {
                    mtRQou = mtRQou + 1;
                    gKYC36[sj9iydTklb - mtRQou + (676 - 675)] = ((int) Hx9DAyoBJ[mtRQou - (684 - 683)]) - (758 - 710);
                }
            }
            cin >> poDcCS;
            mFzyCSQ3K2vd = strlen (poDcCS);
            vdWiwv[(455 - 455)] = mFzyCSQ3K2vd;
            {
                mtRQou = (579 - 578);
                for (; mtRQou <= mFzyCSQ3K2vd;) {
                    mtRQou = mtRQou + 1;
                    vdWiwv[mFzyCSQ3K2vd - mtRQou + (562 - 561)] = ((int) poDcCS[mtRQou - (663 - 662)]) - (461 - 413);
                }
            }
            jian (gKYC36, vdWiwv);
        }
    }
    return (753 - 753);
}

