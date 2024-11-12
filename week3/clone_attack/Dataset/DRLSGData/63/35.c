int main () {
    int cmDsl5T;
    int j0Vqo9B83;
    int IjzExXlZW;
    int xQnYRA;
    int pAlrPMD1NX4I;
    int CBEwrqdT;
    int XaJy67gXdM;
    int e5kO2BelSh;
    int RgCYSEVHFPMG;
    int a [(777 - 677)] [(560 - 460)];
    int qL30gv [(1066 - 966)] [(898 - 798)];
    int UBvDTu [(888 - 788)] [(700 - 600)];
    cmDsl5T = (483 - 483);
    j0Vqo9B83 = (387 - 387);
    cin >> xQnYRA >> pAlrPMD1NX4I;
    for (e5kO2BelSh = (403 - 403); xQnYRA - (342 - 341) >= e5kO2BelSh; e5kO2BelSh = e5kO2BelSh + (166 - 165)) {
        for (RgCYSEVHFPMG = (568 - 568); RgCYSEVHFPMG <= pAlrPMD1NX4I - (15 - 14); RgCYSEVHFPMG = RgCYSEVHFPMG +(488 - 487)) {
            cin >> a[e5kO2BelSh][RgCYSEVHFPMG];
        }
    }
    cin >> CBEwrqdT >> XaJy67gXdM;
    for (e5kO2BelSh = (862 - 862); CBEwrqdT -(139 - 138) >= e5kO2BelSh; e5kO2BelSh = e5kO2BelSh + (781 - 780)) {
        for (RgCYSEVHFPMG = (117 - 117); RgCYSEVHFPMG <= XaJy67gXdM -(866 - 865); RgCYSEVHFPMG = RgCYSEVHFPMG +(871 - 870)) {
            cin >> qL30gv[e5kO2BelSh][RgCYSEVHFPMG];
        }
    }
    if (XaJy67gXdM != (774 - 773)) {
        for (e5kO2BelSh = (523 - 523); e5kO2BelSh <= xQnYRA - (567 - 566); e5kO2BelSh = e5kO2BelSh + (259 - 258)) {
            for (RgCYSEVHFPMG = (769 - 769); XaJy67gXdM -(513 - 512) >= RgCYSEVHFPMG; RgCYSEVHFPMG = RgCYSEVHFPMG +(708 - 707)) {
                UBvDTu[e5kO2BelSh][RgCYSEVHFPMG] = (288 - 288);
                for (IjzExXlZW = (730 - 730); CBEwrqdT -(254 - 253) >= IjzExXlZW; IjzExXlZW = IjzExXlZW +(893 - 892)) {
                    UBvDTu[e5kO2BelSh][RgCYSEVHFPMG] = UBvDTu[e5kO2BelSh][RgCYSEVHFPMG] + a[e5kO2BelSh][IjzExXlZW] * qL30gv[IjzExXlZW][RgCYSEVHFPMG];
                }
                if (!((975 - 975) != RgCYSEVHFPMG)) {
                    cout << UBvDTu[e5kO2BelSh][RgCYSEVHFPMG];
                }
                if (RgCYSEVHFPMG != (741 - 741) && RgCYSEVHFPMG != XaJy67gXdM -(77 - 76)) {
                    cout << " " << UBvDTu[e5kO2BelSh][RgCYSEVHFPMG];
                }
                if (!(XaJy67gXdM -(152 - 151) != RgCYSEVHFPMG) && XaJy67gXdM -(211 - 210) != (761 - 761)) {
                    cout << " " << UBvDTu[e5kO2BelSh][RgCYSEVHFPMG] << endl;
                }
            }
        }
    }
    if (!((861 - 860) != XaJy67gXdM)) {
        for (e5kO2BelSh = (621 - 621); e5kO2BelSh <= xQnYRA - (752 - 751); e5kO2BelSh++) {
            UBvDTu[e5kO2BelSh][(513 - 513)] = (422 - 422);
            for (IjzExXlZW = (425 - 425); IjzExXlZW <= CBEwrqdT -(797 - 796); IjzExXlZW++) {
                UBvDTu[e5kO2BelSh][(342 - 342)] = UBvDTu[e5kO2BelSh][(778 - 778)] + a[e5kO2BelSh][IjzExXlZW] * qL30gv[IjzExXlZW][(518 - 518)];
            }
            if (UBvDTu[e5kO2BelSh][(106 - 106)] != (708 - 708)) {
                cmDsl5T = (84 - 83);
            }
        }
        if (cmDsl5T == (55 - 54)) {
            for (e5kO2BelSh = (732 - 732); e5kO2BelSh <= xQnYRA - 1; e5kO2BelSh++) {
                cout << UBvDTu[e5kO2BelSh][(53 - 53)] << endl;
            }
        }
        if (cmDsl5T == 0) {
            cout << "0" << endl;
        }
    }
    return 0;
}

