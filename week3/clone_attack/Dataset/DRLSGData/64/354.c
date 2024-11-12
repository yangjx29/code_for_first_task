int main () {
    double  em1tEcnN [10] [10];
    int FBGwgx51KLca, MQlSJYdyVrBm [(119 - 109)] [3], tB2ygIDtsu7Y, QevJPk3, UqpKOoNtvP;
    cin >> FBGwgx51KLca;
    {
        tB2ygIDtsu7Y = 89 - 89;
        while (tB2ygIDtsu7Y <= FBGwgx51KLca -(314 - 313)) {
            for (QevJPk3 = (966 - 966); 2 >= QevJPk3; QevJPk3++)
                cin >> MQlSJYdyVrBm[tB2ygIDtsu7Y][QevJPk3];
            tB2ygIDtsu7Y++;
        }
    }
    for (tB2ygIDtsu7Y = 0; FBGwgx51KLca -1 >= tB2ygIDtsu7Y; tB2ygIDtsu7Y++) {
        QevJPk3 = tB2ygIDtsu7Y + 1;
        while (FBGwgx51KLca -1 >= QevJPk3) {
            em1tEcnN[tB2ygIDtsu7Y][QevJPk3] = sqrt (pow ((double ) (MQlSJYdyVrBm[tB2ygIDtsu7Y][0] - MQlSJYdyVrBm[QevJPk3][0]), 2) + pow ((double ) (MQlSJYdyVrBm[tB2ygIDtsu7Y][1] - MQlSJYdyVrBm[QevJPk3][1]), 2) + pow ((double ) (MQlSJYdyVrBm[tB2ygIDtsu7Y][2] - MQlSJYdyVrBm[QevJPk3][2]), 2));
            QevJPk3++;
        }
    }
    {
        UqpKOoNtvP = 1;
        while (UqpKOoNtvP <= FBGwgx51KLca *(FBGwgx51KLca -1) / 2) {
            int cON1jHy8, NBnTLP4;
            double  QE3mu1zde = -1;
            {
                tB2ygIDtsu7Y = 0;
                while (tB2ygIDtsu7Y <= FBGwgx51KLca -1) {
                    {
                        QevJPk3 = tB2ygIDtsu7Y + 1;
                        while (QevJPk3 <= FBGwgx51KLca -1) {
                            if (em1tEcnN[tB2ygIDtsu7Y][QevJPk3] > QE3mu1zde) {
                                QE3mu1zde = em1tEcnN[tB2ygIDtsu7Y][QevJPk3];
                                NBnTLP4 = QevJPk3;
                                cON1jHy8 = tB2ygIDtsu7Y;
                            }
                            QevJPk3++;
                        }
                    }
                    tB2ygIDtsu7Y++;
                }
            }
            cout << "(" << MQlSJYdyVrBm[cON1jHy8][0] << "," << MQlSJYdyVrBm[cON1jHy8][1] << "," << MQlSJYdyVrBm[cON1jHy8][2] << ")-(" << MQlSJYdyVrBm[NBnTLP4][0] << "," << MQlSJYdyVrBm[NBnTLP4][1] << "," << MQlSJYdyVrBm[NBnTLP4][2] << ")=" << fixed << setprecision (2) << QE3mu1zde << endl;
            em1tEcnN[cON1jHy8][NBnTLP4] = -9999999;
            UqpKOoNtvP++;
        }
    }
    cin >> FBGwgx51KLca;
    return 0;
}

