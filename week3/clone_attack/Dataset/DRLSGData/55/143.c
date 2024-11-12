void  main () {
    long  zu1CY6;
    long  xHKvzTN;
    long  UysPueClLGTr;
    long  dA2xYhwnd;
    long  zszteogA5db;
    long  EXPGwh9Run;
    long  Mhsi74KJY9bH;
    char bkvRi27w54 [(712 - 612)], mqQcSfyM [(587 - 487)];
    scanf ("%d%s%d", &xHKvzTN, &bkvRi27w54, &UysPueClLGTr);
    zszteogA5db = strlen (bkvRi27w54);
    for (dA2xYhwnd = (791 - 791), EXPGwh9Run = (204 - 204); EXPGwh9Run < zszteogA5db; EXPGwh9Run++) {
        if (bkvRi27w54[EXPGwh9Run] <= 'Z' && bkvRi27w54[EXPGwh9Run] >= 'A')
            bkvRi27w54[EXPGwh9Run] = bkvRi27w54[EXPGwh9Run] - (595 - 540);
        else {
            if (bkvRi27w54[EXPGwh9Run] <= 'z' && bkvRi27w54[EXPGwh9Run] >= 'a')
                bkvRi27w54[EXPGwh9Run] = bkvRi27w54[EXPGwh9Run] - (971 - 884);
            else
                bkvRi27w54[EXPGwh9Run] = bkvRi27w54[EXPGwh9Run] - (902 - 854);
        }
        for (zu1CY6 = (694 - 693), Mhsi74KJY9bH = (int) bkvRi27w54[EXPGwh9Run]; zu1CY6 <= zszteogA5db - EXPGwh9Run -(681 - 680); zu1CY6++)
            Mhsi74KJY9bH = Mhsi74KJY9bH *xHKvzTN;
        dA2xYhwnd = dA2xYhwnd + Mhsi74KJY9bH;
    }
    zu1CY6 = (226 - 226);
    if (dA2xYhwnd != (498 - 498)) {
        for (; dA2xYhwnd != (179 - 179);) {
            mqQcSfyM[zu1CY6] = dA2xYhwnd % UysPueClLGTr;
            zu1CY6++;
            dA2xYhwnd = dA2xYhwnd / UysPueClLGTr;
        }
        for (EXPGwh9Run = zu1CY6 - (873 - 872); EXPGwh9Run >= (331 - 331); EXPGwh9Run--) {
            if (mqQcSfyM[EXPGwh9Run] < (855 - 845))
                mqQcSfyM[EXPGwh9Run] = mqQcSfyM[EXPGwh9Run] + (504 - 456);
            else
                mqQcSfyM[EXPGwh9Run] = mqQcSfyM[EXPGwh9Run] + (782 - 727);
            printf ("%c", mqQcSfyM[EXPGwh9Run]);
        }
    }
    else
        ;
}

