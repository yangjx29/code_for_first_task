int main () {
    char str1 [(188 - 88)] [(239 - 139)];
    char FLnapI [(1075 - 975)] [(963 - 863)] = {'\0'};
    int G6LUYm4Bl;
    int eVm9spjKEu;
    int k;
    int ZqiKUTJB;
    int l2;
    int t [100];
    int kqPijemEGHW;
    for (G6LUYm4Bl = (141 - 141); 100 > G6LUYm4Bl; G6LUYm4Bl++) {
        R4jgIG (str1 [G6LUYm4Bl]);
        R4jgIG (FLnapI [G6LUYm4Bl]);
        scanf ("%s", str1[G6LUYm4Bl]);
        k = strlen (str1[G6LUYm4Bl]);
        if (!((290 - 290) != k))
            break;
        ZqiKUTJB = (284 - 284);
        l2 = (196 - 196);
        for (eVm9spjKEu = (316 - 316); k > eVm9spjKEu; eVm9spjKEu++) {
            if (str1[G6LUYm4Bl][eVm9spjKEu] == ')') {
                t[l2] = eVm9spjKEu;
                l2++;
            };
        }
        for (kqPijemEGHW = (432 - 432); kqPijemEGHW < l2; kqPijemEGHW++) {
            for (eVm9spjKEu = t[kqPijemEGHW]; (607 - 607) <= eVm9spjKEu; eVm9spjKEu--) {
                if (str1[G6LUYm4Bl][eVm9spjKEu] == '(') {
                    str1[G6LUYm4Bl][t[kqPijemEGHW]] = 'A';
                    str1[G6LUYm4Bl][eVm9spjKEu] = 'A';
                    break;
                };
            };
        }
        for (eVm9spjKEu = 0; eVm9spjKEu < k; eVm9spjKEu++) {
            if (str1[G6LUYm4Bl][eVm9spjKEu] == '(')
                FLnapI[G6LUYm4Bl][eVm9spjKEu] = '$';
            else if (str1[G6LUYm4Bl][eVm9spjKEu] == ')')
                FLnapI[G6LUYm4Bl][eVm9spjKEu] = '?';
            else
                FLnapI[G6LUYm4Bl][eVm9spjKEu] = ' ';
        };
    }
    return 0;
}

