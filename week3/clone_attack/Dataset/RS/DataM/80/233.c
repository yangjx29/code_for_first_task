int main () {
    int H2dPc0;
    H2dPc0 = 0;
    int O3D07YKzd1 [2] [(77 - 64)] = {{(317 - 317), (743 - 712), 28, (879 - 848), 30, (285 - 254), 30, (816 - 785), 31, 30, 31, 30, 31}, {(932 - 932), 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    int jCIEXzO;
    int n2bqOtA3irsf;
    int pqzri3nFa;
    int ISE1c6;
    int pj2GpBdfqKhr;
    int wFyo3cj5;
    int NruYxevWh;
    jCIEXzO = (462 - 462);
    int etqcnFasSJu;
    cin >> n2bqOtA3irsf >> pqzri3nFa >> ISE1c6 >> pj2GpBdfqKhr >> wFyo3cj5 >> NruYxevWh;
    if (n2bqOtA3irsf != pj2GpBdfqKhr) {
        H2dPc0 = (n2bqOtA3irsf % (875 - 871) == 0 && !(0 == n2bqOtA3irsf % 100) || n2bqOtA3irsf % (815 - 415) == 0) ? 1 : 0;
        for (etqcnFasSJu = pqzri3nFa; etqcnFasSJu <= 12; etqcnFasSJu = etqcnFasSJu + 1) {
            jCIEXzO = jCIEXzO + O3D07YKzd1[H2dPc0][etqcnFasSJu];
        }
        for (etqcnFasSJu = n2bqOtA3irsf + 1; etqcnFasSJu < pj2GpBdfqKhr; etqcnFasSJu = etqcnFasSJu + 1) {
            H2dPc0 = (etqcnFasSJu % (862 - 858) == 0 && etqcnFasSJu % 100 != 0 || etqcnFasSJu % 400 == 0) ? 1 : 0;
            jCIEXzO = jCIEXzO + (365 + H2dPc0);
        }
        H2dPc0 = (pj2GpBdfqKhr % 4 == 0 && pj2GpBdfqKhr % 100 != 0 || pj2GpBdfqKhr % 400 == 0) ? 1 : 0;
        for (etqcnFasSJu = 1; etqcnFasSJu < wFyo3cj5; etqcnFasSJu = etqcnFasSJu + 1) {
            jCIEXzO += O3D07YKzd1[H2dPc0][etqcnFasSJu];
        };
    }
    else {
        H2dPc0 = (n2bqOtA3irsf % 4 == 0 && n2bqOtA3irsf % 100 != 0 || n2bqOtA3irsf % 400 == 0) ? 1 : 0;
        for (etqcnFasSJu = pqzri3nFa; etqcnFasSJu < wFyo3cj5; etqcnFasSJu++) {
            jCIEXzO += O3D07YKzd1[H2dPc0][etqcnFasSJu];
        };
    }
    jCIEXzO = jCIEXzO - ISE1c6 +NruYxevWh;
    cout << jCIEXzO << endl;
    return 0;
}

