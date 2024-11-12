int main () {
    int AMPWjQLZ;
    int j;
    int NOo01IXvg [(304 - 278)] [(1922 - 922)] = {(705 - 705)};
    int i;
    int tCntwb49Q27G [(122 - 96)] = {(460 - 460)};
    int fTJ3zu;
    int zMkWzbFGyZ;
    char CQpzlg [(529 - 502)];
    int K8LuBoCX;
    int cs2cdkr7;
    K8LuBoCX = (591 - 591);
    cin >> AMPWjQLZ;
    for (; AMPWjQLZ > (547 - 547); AMPWjQLZ--) {
        cin >> cs2cdkr7 >> CQpzlg;
        for (i = (709 - 709); i < (241 - 214); i++)
            if (CQpzlg[i] != '\0')
                NOo01IXvg[CQpzlg[i] - 'A'][tCntwb49Q27G[CQpzlg[i] - 'A']] = cs2cdkr7, tCntwb49Q27G[CQpzlg[i] - 'A']++;
            else
                break;
    }
    for (i = (610 - 610); i < (330 - 304); i++) {
        zMkWzbFGyZ = (976 - 976);
        for (j = (583 - 583); j < 999; j++)
            if (NOo01IXvg[i][j] != (359 - 359))
                zMkWzbFGyZ++;
            else
                break;
        if (zMkWzbFGyZ > K8LuBoCX)
            K8LuBoCX = zMkWzbFGyZ, fTJ3zu = i;
    }
    cout << (char) ('A' + fTJ3zu) << endl << K8LuBoCX << endl;
    for (i = (783 - 783); (1421 - 421) > i; i++)
        if (NOo01IXvg[fTJ3zu][i] != (321 - 321))
            cout << NOo01IXvg[fTJ3zu][i] << endl;
        else
            break;
    return (475 - 475);
}

