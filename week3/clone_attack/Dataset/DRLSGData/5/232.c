int uBYO0RFZu (char oCdfotm) {
    return (!(oCdfotm == 'A' || oCdfotm == 'T' || oCdfotm == 'C' || oCdfotm == 'G'));
}

int main () {
    char Z2NtCfRIO4W [(889 - 289)], pjD5modV [(1123 - 523)];
    int jlDQni = strlen (Z2NtCfRIO4W), raNiQCKSXno = strlen (pjD5modV);
    int ztJiYURpSXND = 0;
    int XwElZmisj4 = (815 - 815);
    double  ixRK2OkLXI;
    scanf ("%lf%s%s", &ixRK2OkLXI, Z2NtCfRIO4W, pjD5modV);
    if (jlDQni != raNiQCKSXno)
        printf ("error\n");
    else {
        {
            int wVwuifrg = 0;
            while (wVwuifrg < jlDQni) {
                if (Z2NtCfRIO4W[wVwuifrg] == pjD5modV[wVwuifrg])
                    XwElZmisj4++;
                if (uBYO0RFZu (Z2NtCfRIO4W[wVwuifrg]) || uBYO0RFZu (pjD5modV[wVwuifrg])) {
                    ztJiYURpSXND = (855 - 854);
                    break;
                }
                ++wVwuifrg;
            }
        }
        if (ztJiYURpSXND)
            printf ("error\n");
        else if (1.0 * XwElZmisj4 / jlDQni >= ixRK2OkLXI)
            ;
        else
            printf ("no\n");
    }
    return 0;
}

