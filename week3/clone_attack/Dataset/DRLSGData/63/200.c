int main () {
    int QNkLJuyZ5p;
    int SNTKgXstIE;
    int nI5S1q2Yt;
    int Y3nVFCWeJ [100] [100];
    int hTldHsX2x [(631 - 531)] [100];
    int IZ4tA7wJiVo [(822 - 722)] [(311 - 211)];
    int neNraGIV7s;
    int dUAYe1hd6svW;
    int tXZf2vWUR;
    int DQmsDRVUk1;
    cin >> DQmsDRVUk1 >> tXZf2vWUR;
    {
        nI5S1q2Yt = 938 - 938;
        while (nI5S1q2Yt < DQmsDRVUk1) {
            {
                SNTKgXstIE = 772 - 772;
                while (SNTKgXstIE < tXZf2vWUR) {
                    cin >> IZ4tA7wJiVo[nI5S1q2Yt][SNTKgXstIE];
                    SNTKgXstIE++;
                }
            }
            nI5S1q2Yt++;
        }
    }
    cin >> dUAYe1hd6svW >> neNraGIV7s;
    for (nI5S1q2Yt = (37 - 37); nI5S1q2Yt < dUAYe1hd6svW; nI5S1q2Yt++) {
        SNTKgXstIE = 0;
        while (SNTKgXstIE < neNraGIV7s) {
            cin >> hTldHsX2x[nI5S1q2Yt][SNTKgXstIE];
            SNTKgXstIE++;
        }
    }
    {
        nI5S1q2Yt = 0;
        while (nI5S1q2Yt < DQmsDRVUk1) {
            {
                SNTKgXstIE = 0;
                while (SNTKgXstIE < neNraGIV7s) {
                    Y3nVFCWeJ[nI5S1q2Yt][SNTKgXstIE] = 0;
                    SNTKgXstIE++;
                }
            }
            nI5S1q2Yt++;
        }
    }
    {
        nI5S1q2Yt = 0;
        while (nI5S1q2Yt < DQmsDRVUk1) {
            for (SNTKgXstIE = 0; SNTKgXstIE < neNraGIV7s; SNTKgXstIE++) {
                QNkLJuyZ5p = 0;
                while (QNkLJuyZ5p < tXZf2vWUR) {
                    Y3nVFCWeJ[nI5S1q2Yt][SNTKgXstIE] = Y3nVFCWeJ[nI5S1q2Yt][SNTKgXstIE] + IZ4tA7wJiVo[nI5S1q2Yt][QNkLJuyZ5p] * hTldHsX2x[QNkLJuyZ5p][SNTKgXstIE];
                    QNkLJuyZ5p++;
                }
            }
            nI5S1q2Yt++;
        }
    }
    {
        nI5S1q2Yt = 0;
        while (nI5S1q2Yt < DQmsDRVUk1) {
            {
                SNTKgXstIE = 0;
                while (SNTKgXstIE < neNraGIV7s - 1) {
                    cout << Y3nVFCWeJ[nI5S1q2Yt][SNTKgXstIE] << " ";
                    SNTKgXstIE++;
                }
            }
            cout << Y3nVFCWeJ[nI5S1q2Yt][neNraGIV7s - 1] << endl;
            nI5S1q2Yt++;
        }
    }
    return 0;
}

