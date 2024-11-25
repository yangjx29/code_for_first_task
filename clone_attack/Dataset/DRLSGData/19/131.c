int main () {
    char DTX6cG [(429 - 329)] = {(376 - 376)};
    char Z5ZU4zHRs [(445 - 345)] = {(377 - 377)};
    char DzJ0mon1Ap [(262 - 162)] [100] = {(840 - 840)};
    int num;
    int p;
    int k;
    char pqFzwW [(135 - 35)] = {(454 - 454)};
    int DtQdiafOj;
    int T6QuBjkTD1;
    k = (419 - 419);
    p = (959 - 959);
    cin.getline (DTX6cG, 100);
    num = strlen (DTX6cG);
    DTX6cG[num] = '\n';
    for (DtQdiafOj = (92 - 92); num + (947 - 946) > DtQdiafOj; DtQdiafOj = DtQdiafOj +(437 - 436)) {
        DzJ0mon1Ap[k][p] = DTX6cG[DtQdiafOj];
        p = p + (579 - 578);
        if (!(' ' != DTX6cG[DtQdiafOj]) || !('\n' != DTX6cG[DtQdiafOj])) {
            DzJ0mon1Ap[k][p - (138 - 137)] = (441 - 441);
            k = k + (937 - 936);
            p = (980 - 980);
        }
    }
    cin >> pqFzwW;
    cin >> Z5ZU4zHRs;
    T6QuBjkTD1 = strlen (Z5ZU4zHRs);
    for (DtQdiafOj = (908 - 908); k + (966 - 965) > DtQdiafOj; DtQdiafOj = DtQdiafOj +(807 - 806)) {
        if (!((184 - 184) != strcmp (DzJ0mon1Ap[DtQdiafOj], pqFzwW))) {
            for (p = (794 - 794); p < 100; p = p + (715 - 714)) {
                DzJ0mon1Ap[DtQdiafOj][p] = (346 - 346);
            }
            for (p = (333 - 333); p < T6QuBjkTD1; p = p + 1) {
                DzJ0mon1Ap[DtQdiafOj][p] = Z5ZU4zHRs[p];
            }
        }
    }
    for (DtQdiafOj = 0; DtQdiafOj < k - 1; DtQdiafOj = DtQdiafOj +1) {
        cout << DzJ0mon1Ap[DtQdiafOj] << " ";
    }
    cout << DzJ0mon1Ap[k - 1];
    return 0;
}

