struct   stu {
    char bPfgbyOTYo [20];
    int A1uTyRnhA;
    int kMr4iT;
    char doYGp0NTi;
    char BpHGVloC;
    int qlEOj5c64V;
};
int main (int cCArDdM, char *ICrkgSY []) {
    int ljOcSfl5dC, qEVv0gD, i95q48Zo, uY2QgqZRe [100], iUiQn2L3r = (107 - 107), hW18vABXu4z = 0;
    struct   stu rmSOfUWv4i [(885 - 785)];
    scanf ("%d", &qEVv0gD);
    for (i95q48Zo = 0; i95q48Zo < qEVv0gD; i95q48Zo = i95q48Zo + 1) {
        scanf ("%s %d %d %c %c %d", rmSOfUWv4i[i95q48Zo].bPfgbyOTYo, &rmSOfUWv4i[i95q48Zo].A1uTyRnhA, &rmSOfUWv4i[i95q48Zo].kMr4iT, &rmSOfUWv4i[i95q48Zo].doYGp0NTi, &rmSOfUWv4i[i95q48Zo].BpHGVloC, &rmSOfUWv4i[i95q48Zo].qlEOj5c64V);
    }
    for (i95q48Zo = 0; i95q48Zo < qEVv0gD; i95q48Zo = i95q48Zo + 1) {
        uY2QgqZRe[i95q48Zo] = 8000 * (80 < rmSOfUWv4i[i95q48Zo].A1uTyRnhA && 1 <= rmSOfUWv4i[i95q48Zo].qlEOj5c64V) + 4000 * (85 < rmSOfUWv4i[i95q48Zo].A1uTyRnhA && rmSOfUWv4i[i95q48Zo].kMr4iT > 80) + 2000 * (rmSOfUWv4i[i95q48Zo].A1uTyRnhA > 90) + 1000 * (85 < rmSOfUWv4i[i95q48Zo].A1uTyRnhA && rmSOfUWv4i[i95q48Zo].BpHGVloC == 'Y') + 850 * (rmSOfUWv4i[i95q48Zo].kMr4iT > 80 && rmSOfUWv4i[i95q48Zo].doYGp0NTi == 'Y');
        iUiQn2L3r = iUiQn2L3r + uY2QgqZRe[i95q48Zo];
        if (uY2QgqZRe[i95q48Zo] > hW18vABXu4z) {
            hW18vABXu4z = uY2QgqZRe[i95q48Zo];
            ljOcSfl5dC = i95q48Zo;
        }
    }
    printf ("%s\n%d\n%d\n", rmSOfUWv4i[ljOcSfl5dC].bPfgbyOTYo, hW18vABXu4z, iUiQn2L3r);
    return 0;
}

