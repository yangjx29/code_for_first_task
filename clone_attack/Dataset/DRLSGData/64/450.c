int main () {
    int YUMWd7tJF2N [12] [12] = {0};
    double  O5EXBbxsrKy;
    double  dp0nq5zcIR [12] [12] = {0};
    int wHglre [12] = {0};
    int XIGaPq [12] = {0};
    int sL5TEzWFovV [12] = {0};
    int gzoqOCaDx8dI;
    int VHUV3puaANjv;
    int iadS3ivBhJEs;
    int MWLgj5I8lZq;
    int RmFzB7VPO;
    int IoCefml4UiS;
    int Un2vOsr8W9;
    int uiRLHV;
    O5EXBbxsrKy = -1.0;
    cin >> gzoqOCaDx8dI;
    for (VHUV3puaANjv = 1; VHUV3puaANjv <= gzoqOCaDx8dI; VHUV3puaANjv = VHUV3puaANjv +1) {
        cin >> sL5TEzWFovV[VHUV3puaANjv] >> XIGaPq[VHUV3puaANjv] >> wHglre[VHUV3puaANjv];
    }
    for (VHUV3puaANjv = 1; VHUV3puaANjv <= gzoqOCaDx8dI; VHUV3puaANjv = VHUV3puaANjv +1) {
        for (iadS3ivBhJEs = VHUV3puaANjv +1; iadS3ivBhJEs <= gzoqOCaDx8dI; iadS3ivBhJEs = iadS3ivBhJEs + 1) {
            dp0nq5zcIR[VHUV3puaANjv][iadS3ivBhJEs] = sqrt ((sL5TEzWFovV[VHUV3puaANjv] - sL5TEzWFovV[iadS3ivBhJEs]) * (sL5TEzWFovV[VHUV3puaANjv] - sL5TEzWFovV[iadS3ivBhJEs]) + (XIGaPq[VHUV3puaANjv] - XIGaPq[iadS3ivBhJEs]) * (XIGaPq[VHUV3puaANjv] - XIGaPq[iadS3ivBhJEs]) + (wHglre[VHUV3puaANjv] - wHglre[iadS3ivBhJEs]) * (wHglre[VHUV3puaANjv] - wHglre[iadS3ivBhJEs]));
        }
    }
    MWLgj5I8lZq = gzoqOCaDx8dI * (gzoqOCaDx8dI - 1) / 2;
    for (RmFzB7VPO = 1; RmFzB7VPO <= MWLgj5I8lZq; RmFzB7VPO++) {
        for (VHUV3puaANjv = 1; VHUV3puaANjv <= gzoqOCaDx8dI; VHUV3puaANjv++) {
            for (iadS3ivBhJEs = VHUV3puaANjv +1; iadS3ivBhJEs <= gzoqOCaDx8dI; iadS3ivBhJEs++) {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (dp0nq5zcIR[VHUV3puaANjv][iadS3ivBhJEs] - O5EXBbxsrKy > 1e-10) {
                    O5EXBbxsrKy = dp0nq5zcIR[VHUV3puaANjv][iadS3ivBhJEs];
                    uiRLHV = iadS3ivBhJEs;
                    Un2vOsr8W9 = VHUV3puaANjv;
                }
            }
        }
        O5EXBbxsrKy = -1;
        cout << "(" << sL5TEzWFovV[Un2vOsr8W9] << "," << XIGaPq[Un2vOsr8W9] << "," << wHglre[Un2vOsr8W9] << ")" << "-" << "(" << sL5TEzWFovV[uiRLHV] << "," << XIGaPq[uiRLHV] << "," << wHglre[uiRLHV] << ")" << "=" << fixed << setprecision (2) << dp0nq5zcIR[Un2vOsr8W9][uiRLHV] << endl;
        dp0nq5zcIR[Un2vOsr8W9][uiRLHV] = 0;
    }
    return 0;
}

