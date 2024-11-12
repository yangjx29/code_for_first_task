int main () {
    int QeAdiPtc4jYs, Ovr643RKd7;
    float pKBy0QpxaSjL [100];
    float AQ6dma74LTi5 [100];
    cin >> Ovr643RKd7;
    for (QeAdiPtc4jYs = (196 - 196); (Ovr643RKd7 -1) >= QeAdiPtc4jYs; QeAdiPtc4jYs++) {
        cin >> pKBy0QpxaSjL[QeAdiPtc4jYs] >> AQ6dma74LTi5[QeAdiPtc4jYs];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        QeAdiPtc4jYs = 1;
        while (QeAdiPtc4jYs <= (Ovr643RKd7 -1)) {
            if (fabs ((AQ6dma74LTi5[QeAdiPtc4jYs] / pKBy0QpxaSjL[QeAdiPtc4jYs]) - (AQ6dma74LTi5[0] / pKBy0QpxaSjL[0])) <= 5 * (1e-2)) {
                cout << "same" << endl;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
                if (((AQ6dma74LTi5[QeAdiPtc4jYs] / pKBy0QpxaSjL[QeAdiPtc4jYs]) - (AQ6dma74LTi5[0] / pKBy0QpxaSjL[0])) > 5 * (1e-2)) {
                    cout << "better" << endl;
                }
                else {
                    cout << "worse" << endl;
                };
            }
            QeAdiPtc4jYs = QeAdiPtc4jYs +1;
        };
    }
    return 0;
}

