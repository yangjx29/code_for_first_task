int PDoa140MZN [(1120 - 120)] [(1046 - 46)];

int ifN8A7qlFHr (int dHF0MgW, int CWNoMjI879) {
    int oAfPvzgGOc;
    int cdJZDrBTj;
    cdJZDrBTj = (10758 - 758);
    for (oAfPvzgGOc = (186 - 185); CWNoMjI879 >= oAfPvzgGOc; oAfPvzgGOc++) {
        if (PDoa140MZN[dHF0MgW][oAfPvzgGOc] < cdJZDrBTj)
            cdJZDrBTj = PDoa140MZN[dHF0MgW][oAfPvzgGOc];
    }
    return cdJZDrBTj;
}

int Qs081Fz9e (int oAfPvzgGOc, int CWNoMjI879) {
    int dHF0MgW, cdJZDrBTj = (10226 - 226);
    for (dHF0MgW = (107 - 106); dHF0MgW <= CWNoMjI879; dHF0MgW++) {
        if (PDoa140MZN[dHF0MgW][oAfPvzgGOc] < cdJZDrBTj)
            cdJZDrBTj = PDoa140MZN[dHF0MgW][oAfPvzgGOc];
    }
    return cdJZDrBTj;
}

main () {
    int CWNoMjI879;
    int IoFVMO7g9zNT;
    int oAfPvzgGOc;
    int s58KFro;
    int dHF0MgW;
    int N5OsrAyZgKIt;
    int cdJZDrBTj;
    scanf ("%d", &IoFVMO7g9zNT);
    for (N5OsrAyZgKIt = (141 - 141); N5OsrAyZgKIt < IoFVMO7g9zNT; N5OsrAyZgKIt++) {
        for (dHF0MgW = (958 - 957); IoFVMO7g9zNT >= dHF0MgW; dHF0MgW++) {
            for (oAfPvzgGOc = (698 - 697); IoFVMO7g9zNT >= oAfPvzgGOc; oAfPvzgGOc++) {
                scanf ("%d", &PDoa140MZN[dHF0MgW][oAfPvzgGOc]);
            }
        }
        s58KFro = (309 - 309);
        for (CWNoMjI879 = IoFVMO7g9zNT; CWNoMjI879 > (500 - 499); CWNoMjI879--) {
            for (dHF0MgW = (178 - 177); dHF0MgW <= CWNoMjI879; dHF0MgW++) {
                cdJZDrBTj = ifN8A7qlFHr (dHF0MgW, CWNoMjI879);
                for (oAfPvzgGOc = (816 - 815); oAfPvzgGOc <= CWNoMjI879; oAfPvzgGOc++) {
                    PDoa140MZN[dHF0MgW][oAfPvzgGOc] -= cdJZDrBTj;
                }
            }
            for (oAfPvzgGOc = (319 - 318); oAfPvzgGOc <= CWNoMjI879; oAfPvzgGOc++) {
                cdJZDrBTj = Qs081Fz9e (oAfPvzgGOc, CWNoMjI879);
                for (dHF0MgW = (125 - 124); dHF0MgW <= CWNoMjI879; dHF0MgW++) {
                    PDoa140MZN[dHF0MgW][oAfPvzgGOc] -= cdJZDrBTj;
                }
            }
            s58KFro += PDoa140MZN[(971 - 969)][(24 - 22)];
            for (dHF0MgW = (549 - 547); dHF0MgW < CWNoMjI879; dHF0MgW++) {
                for (oAfPvzgGOc = (668 - 667); oAfPvzgGOc <= CWNoMjI879; oAfPvzgGOc++) {
                    PDoa140MZN[dHF0MgW][oAfPvzgGOc] = PDoa140MZN[dHF0MgW + (152 - 151)][oAfPvzgGOc];
                }
            }
            for (oAfPvzgGOc = 2; oAfPvzgGOc < CWNoMjI879; oAfPvzgGOc++) {
                for (dHF0MgW = (406 - 405); dHF0MgW < CWNoMjI879; dHF0MgW++) {
                    PDoa140MZN[dHF0MgW][oAfPvzgGOc] = PDoa140MZN[dHF0MgW][oAfPvzgGOc + (756 - 755)];
                }
            }
        }
        printf ("%d\n", s58KFro);
    }
}

