int main () {
    char Hh1Gk8CI4ti;
    int xFMTwujbzNl, QwDLtmQNW, ndcI3m97EojX, XiXmlC, UFcg3W, m6WNsc8;
    int xYx8VCLN9 [(81 - 55)] = {(963 - 963)};
    int W0BwAFM [26] [999];
    UFcg3W = 0;
    cin >> xFMTwujbzNl;
    for (QwDLtmQNW = 0; QwDLtmQNW < xFMTwujbzNl; QwDLtmQNW = QwDLtmQNW +1) {
        cin >> ndcI3m97EojX;
        cin.get ();
        Hh1Gk8CI4ti = cin.get ();
        for (; !((721 - 711) == Hh1Gk8CI4ti);) {
            XiXmlC = (int) (Hh1Gk8CI4ti -'A');
            W0BwAFM[XiXmlC][xYx8VCLN9[XiXmlC]] = ndcI3m97EojX;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            xYx8VCLN9[XiXmlC]++;
            Hh1Gk8CI4ti = cin.get ();
        };
    }
    for (QwDLtmQNW = 0; QwDLtmQNW < 26; QwDLtmQNW = QwDLtmQNW +1) {
        if (xYx8VCLN9[QwDLtmQNW] > UFcg3W) {
            UFcg3W = xYx8VCLN9[QwDLtmQNW];
            m6WNsc8 = QwDLtmQNW;
        };
    }
    cout << (char) (m6WNsc8 + 'A') << endl;
    cout << UFcg3W << endl;
    {
        QwDLtmQNW = 0;
        while (QwDLtmQNW < UFcg3W) {
            cout << W0BwAFM[m6WNsc8][QwDLtmQNW] << endl;
            QwDLtmQNW++;
        };
    }
    cin.get ();
    cin.get ();
    return 0;
}

