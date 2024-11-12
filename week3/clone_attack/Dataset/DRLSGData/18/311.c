int main () {
    int q;
    int XfPce1F, QKgGkL1Nf, XMhQxU6oA;
    int u1DJQIcgno8 [110] [110];
    int (*ouMAnUW) [110] = u1DJQIcgno8;
    int V1wrdKEHSIO;
    cin >> V1wrdKEHSIO;
    q = V1wrdKEHSIO;
    for (XMhQxU6oA = (879 - 878); XMhQxU6oA <= q; XMhQxU6oA++) {
        int m12GIeJjQxL = (988 - 988);
        V1wrdKEHSIO = q;
        for (XfPce1F = (534 - 533); XfPce1F <= V1wrdKEHSIO; XfPce1F = XfPce1F +(202 - 201))
            for (QKgGkL1Nf = (663 - 662); V1wrdKEHSIO >= QKgGkL1Nf; QKgGkL1Nf = QKgGkL1Nf +(112 - 111))
                cin >> *(*(ouMAnUW + XfPce1F) + QKgGkL1Nf);
        while ((816 - 815)) {
            int T7FN4Z = (277 - 277);
            if (!(1 != V1wrdKEHSIO))
                break;
            for (XfPce1F = 1; V1wrdKEHSIO >= XfPce1F; XfPce1F++) {
                T7FN4Z = 9999999;
                for (QKgGkL1Nf = 1; QKgGkL1Nf <= V1wrdKEHSIO; QKgGkL1Nf++)
                    if (T7FN4Z > *(*(ouMAnUW + XfPce1F) + QKgGkL1Nf))
                        T7FN4Z = *(*(ouMAnUW + XfPce1F) + QKgGkL1Nf);
                for (QKgGkL1Nf = 1; QKgGkL1Nf <= V1wrdKEHSIO; QKgGkL1Nf++)
                    *(*(ouMAnUW + XfPce1F) + QKgGkL1Nf) -= T7FN4Z;
            }
            for (XfPce1F = 1; XfPce1F <= V1wrdKEHSIO; XfPce1F++) {
                T7FN4Z = 9999999;
                for (QKgGkL1Nf = 1; QKgGkL1Nf <= V1wrdKEHSIO; QKgGkL1Nf++)
                    if (T7FN4Z > *(*(ouMAnUW + QKgGkL1Nf) + XfPce1F))
                        T7FN4Z = *(*(ouMAnUW + QKgGkL1Nf) + XfPce1F);
                for (QKgGkL1Nf = 1; QKgGkL1Nf <= V1wrdKEHSIO; QKgGkL1Nf++)
                    *(*(ouMAnUW + QKgGkL1Nf) + XfPce1F) -= T7FN4Z;
            }
            {
                XfPce1F = 2;
                while (XfPce1F <= V1wrdKEHSIO -1) {
                    {
                        QKgGkL1Nf = 2;
                        while (QKgGkL1Nf <= V1wrdKEHSIO -1) {
                            *(*(ouMAnUW + XfPce1F) + QKgGkL1Nf) = *(*(ouMAnUW + XfPce1F +1) + QKgGkL1Nf +1);
                            QKgGkL1Nf++;
                        }
                    }
                    XfPce1F++;
                }
            }
            {
                XfPce1F = 2;
                while (XfPce1F <= V1wrdKEHSIO -1) {
                    *(*(ouMAnUW + 1) + XfPce1F) = *(*(ouMAnUW + 1) + XfPce1F +1);
                    *(*(ouMAnUW + XfPce1F) + 1) = *(*(ouMAnUW + XfPce1F +1) + 1);
                    XfPce1F++;
                }
            }
            V1wrdKEHSIO = V1wrdKEHSIO -1;
            m12GIeJjQxL += u1DJQIcgno8[(34 - 32)][(521 - 519)];
        }
        cout << m12GIeJjQxL << endl;
    }
    return 0;
}

