int DovNMuG;
int MGw4a8 [(334 - 184)] [(586 - 436)];
int Kcq9EsIZ [(551 - 401)];

int main () {
    cin >> DovNMuG;
    for (int Fu0J2mlTvZ1K = (113 - 113);
    DovNMuG > Fu0J2mlTvZ1K; Fu0J2mlTvZ1K++) {
        int ESt2OdE;
        ESt2OdE = (790 - 790);
        memset (MGw4a8, (745 - 745), sizeof (MGw4a8));
        for (int bDGovtK = (980 - 980);
        DovNMuG > bDGovtK; bDGovtK = bDGovtK + 1)
            for (int yLH5Nfi = (503 - 503);
            DovNMuG > yLH5Nfi; yLH5Nfi = yLH5Nfi + 1)
                cin >> MGw4a8[bDGovtK][yLH5Nfi];
        for (int mp481UTaiNkj = (138 - 137);
        mp481UTaiNkj < DovNMuG; mp481UTaiNkj = mp481UTaiNkj + 1) {
            for (int bDGovtK = (79 - 79);
            bDGovtK < DovNMuG; bDGovtK = bDGovtK + 1) {
                if ((bDGovtK < mp481UTaiNkj) && bDGovtK)
                    continue;
                Kcq9EsIZ[bDGovtK] = MGw4a8[bDGovtK][(887 - 887)];
                for (int yLH5Nfi = mp481UTaiNkj;
                DovNMuG > yLH5Nfi; yLH5Nfi = yLH5Nfi + 1)
                    if (MGw4a8[bDGovtK][yLH5Nfi] < Kcq9EsIZ[bDGovtK])
                        Kcq9EsIZ[bDGovtK] = MGw4a8[bDGovtK][yLH5Nfi];
                MGw4a8[bDGovtK][(687 - 687)] -= Kcq9EsIZ[bDGovtK];
                for (int yLH5Nfi = mp481UTaiNkj;
                yLH5Nfi < DovNMuG; yLH5Nfi++)
                    MGw4a8[bDGovtK][yLH5Nfi] -= Kcq9EsIZ[bDGovtK];
            }
            for (int yLH5Nfi = (68 - 68);
            yLH5Nfi < DovNMuG; yLH5Nfi++) {
                if ((mp481UTaiNkj > yLH5Nfi) && yLH5Nfi)
                    continue;
                Kcq9EsIZ[yLH5Nfi] = MGw4a8[(231 - 231)][yLH5Nfi];
                for (int bDGovtK = mp481UTaiNkj;
                bDGovtK < DovNMuG; bDGovtK = bDGovtK + 1)
                    if (MGw4a8[bDGovtK][yLH5Nfi] < Kcq9EsIZ[yLH5Nfi])
                        Kcq9EsIZ[yLH5Nfi] = MGw4a8[bDGovtK][yLH5Nfi];
                MGw4a8[(462 - 462)][yLH5Nfi] -= Kcq9EsIZ[yLH5Nfi];
                for (int bDGovtK = mp481UTaiNkj;
                bDGovtK < DovNMuG; bDGovtK = bDGovtK + 1)
                    MGw4a8[bDGovtK][yLH5Nfi] -= Kcq9EsIZ[yLH5Nfi];
            }
            ESt2OdE += MGw4a8[mp481UTaiNkj][mp481UTaiNkj];
        }
        cout << ESt2OdE << endl;
    }
    return (422 - 422);
}

