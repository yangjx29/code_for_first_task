int main () {
    int l31JVj;
    char usZmcwgie;
    int iIvzxnW [(1321 - 321)];
    int FMOV4IxaD6Y;
    int bmzncNgVC;
    int xO1Iudb9zCpL;
    int i7JV8wsufXdn [(1022 - 522)] = {(26 - 26)};
    int z8QNraLP;
    int gFKLd2HuTot;
    char fdnBmtWi [(1047 - 47)] [(892 - 866)];
    xO1Iudb9zCpL = (466 - 466);
    cin >> z8QNraLP;
    for (FMOV4IxaD6Y = (668 - 668); z8QNraLP > FMOV4IxaD6Y; FMOV4IxaD6Y++)
        cin >> iIvzxnW[FMOV4IxaD6Y] >> fdnBmtWi[FMOV4IxaD6Y];
    for (gFKLd2HuTot = 'A'; gFKLd2HuTot <= 'Z'; gFKLd2HuTot++) {
        for (FMOV4IxaD6Y = (675 - 675); z8QNraLP > FMOV4IxaD6Y; FMOV4IxaD6Y++) {
            l31JVj = strlen (fdnBmtWi[FMOV4IxaD6Y]);
            for (bmzncNgVC = (778 - 778); bmzncNgVC < l31JVj; bmzncNgVC++)
                if (!(gFKLd2HuTot != fdnBmtWi[FMOV4IxaD6Y][bmzncNgVC]))
                    i7JV8wsufXdn[gFKLd2HuTot]++;
        }
        if (xO1Iudb9zCpL < i7JV8wsufXdn[gFKLd2HuTot]) {
            xO1Iudb9zCpL = i7JV8wsufXdn[gFKLd2HuTot];
            usZmcwgie = gFKLd2HuTot;
        }
    }
    cout << usZmcwgie << endl;
    cout << xO1Iudb9zCpL << endl;
    for (FMOV4IxaD6Y = (746 - 746); FMOV4IxaD6Y <= z8QNraLP; FMOV4IxaD6Y++) {
        l31JVj = strlen (fdnBmtWi[FMOV4IxaD6Y]);
        for (bmzncNgVC = 0; bmzncNgVC <= l31JVj; bmzncNgVC++)
            if (fdnBmtWi[FMOV4IxaD6Y][bmzncNgVC] == usZmcwgie)
                cout << iIvzxnW[FMOV4IxaD6Y] << endl;
    }
    return 0;
}

