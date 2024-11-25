int main () {
    double  QsmIvi [45], fIbhNc;
    int k;
    int n;
    int wu8sATY [90] [3];
    int ao1HlAuIeCB;
    int nbq9Ddz;
    int R29Yhi1uct;
    int iYycPMlv7Vr;
    int XXxFgO6K;
    int R4qQjPIim;
    int zqSjArX [10] [3];
    k = 0;
    cin >> n;
    {
        int QnhgIi0wDBQT = 0;
        while (QnhgIi0wDBQT < n) {
            for (int Jmkl59C = 0;
            Jmkl59C < 3; Jmkl59C = Jmkl59C +1)
                cin >> zqSjArX[QnhgIi0wDBQT][Jmkl59C];
            QnhgIi0wDBQT = QnhgIi0wDBQT +1;
        }
    }
    {
        int QnhgIi0wDBQT = 0;
        while (QnhgIi0wDBQT < n - 1) {
            int Jmkl59C = QnhgIi0wDBQT +1;
            while (Jmkl59C < n) {
                QsmIvi[k] = sqrt (pow (zqSjArX[QnhgIi0wDBQT][0] - zqSjArX[Jmkl59C][0], 2.0) + pow (zqSjArX[QnhgIi0wDBQT][1] - zqSjArX[Jmkl59C][1], 2.0) + pow (zqSjArX[QnhgIi0wDBQT][2] - zqSjArX[Jmkl59C][2], 2.0));
                wu8sATY[k][0] = zqSjArX[QnhgIi0wDBQT][0];
                wu8sATY[k][1] = zqSjArX[QnhgIi0wDBQT][1];
                wu8sATY[k][2] = zqSjArX[QnhgIi0wDBQT][2];
                wu8sATY[k + n * (n - 1) / 2][0] = zqSjArX[Jmkl59C][0];
                wu8sATY[k + n * (n - 1) / 2][1] = zqSjArX[Jmkl59C][1];
                wu8sATY[k + n * (n - 1) / 2][2] = zqSjArX[Jmkl59C][2];
                k = k + 1;
                Jmkl59C = Jmkl59C +1;
            }
            QnhgIi0wDBQT = QnhgIi0wDBQT +1;
        }
    }
    {
        int QnhgIi0wDBQT = 1;
        while (QnhgIi0wDBQT < k) {
            {
                int Jmkl59C = 0;
                while (Jmkl59C < k - QnhgIi0wDBQT) {
                    if (QsmIvi[Jmkl59C] < QsmIvi[Jmkl59C +1]) {
                        fIbhNc = QsmIvi[Jmkl59C];
                        ao1HlAuIeCB = wu8sATY[Jmkl59C][0];
                        nbq9Ddz = wu8sATY[Jmkl59C][1];
                        R29Yhi1uct = wu8sATY[Jmkl59C][2];
                        iYycPMlv7Vr = wu8sATY[Jmkl59C +n * (n - 1) / 2][0];
                        XXxFgO6K = wu8sATY[Jmkl59C +n * (n - 1) / 2][1];
                        R4qQjPIim = wu8sATY[Jmkl59C +n * (n - 1) / 2][2];
                        QsmIvi[Jmkl59C] = QsmIvi[Jmkl59C +1];
                        wu8sATY[Jmkl59C][0] = wu8sATY[Jmkl59C +1][0];
                        wu8sATY[Jmkl59C][1] = wu8sATY[Jmkl59C +1][1];
                        wu8sATY[Jmkl59C][2] = wu8sATY[Jmkl59C +1][2];
                        wu8sATY[Jmkl59C +n * (n - 1) / 2][0] = wu8sATY[Jmkl59C +n * (n - 1) / 2 + 1][0];
                        wu8sATY[Jmkl59C +n * (n - 1) / 2][1] = wu8sATY[Jmkl59C +n * (n - 1) / 2 + 1][1];
                        wu8sATY[Jmkl59C +n * (n - 1) / 2][2] = wu8sATY[Jmkl59C +n * (n - 1) / 2 + 1][2];
                        QsmIvi[Jmkl59C +1] = fIbhNc;
                        wu8sATY[Jmkl59C +1][0] = ao1HlAuIeCB;
                        wu8sATY[Jmkl59C +1][1] = nbq9Ddz;
                        wu8sATY[Jmkl59C +1][2] = R29Yhi1uct;
                        wu8sATY[Jmkl59C +n * (n - 1) / 2 + 1][0] = iYycPMlv7Vr;
                        wu8sATY[Jmkl59C +n * (n - 1) / 2 + 1][1] = XXxFgO6K;
                        wu8sATY[Jmkl59C +n * (n - 1) / 2 + 1][2] = R4qQjPIim;
                    }
                    Jmkl59C++;
                }
            }
            QnhgIi0wDBQT++;
        }
    }
    for (int QnhgIi0wDBQT = 0;
    QnhgIi0wDBQT < k; QnhgIi0wDBQT++)
        cout << "(" << wu8sATY[QnhgIi0wDBQT][0] << "," << wu8sATY[QnhgIi0wDBQT][1] << "," << wu8sATY[QnhgIi0wDBQT][2] << ")-" << "(" << wu8sATY[QnhgIi0wDBQT +n * (n - 1) / 2][0] << "," << wu8sATY[QnhgIi0wDBQT +n * (n - 1) / 2][1] << "," << wu8sATY[QnhgIi0wDBQT +n * (n - 1) / 2][2] << ")=" << fixed << setprecision (2) << QsmIvi[QnhgIi0wDBQT] << endl;
    return 0;
}

