int main () {
    double  liUeJdLf [10] [2], k1K6p5cRmq, qmLUaRC = 0;
    int n, IasYMheHxykt, qVUNeyF3E92P;
    cin >> n;
    for (IasYMheHxykt = 0; n - 1 >= IasYMheHxykt;) {
        cin >> liUeJdLf[IasYMheHxykt][0] >> liUeJdLf[IasYMheHxykt][1];
        IasYMheHxykt = IasYMheHxykt +1;
    }
    {
        IasYMheHxykt = 0;
        while (n - 1 >= IasYMheHxykt) {
            for (qVUNeyF3E92P = 0; qVUNeyF3E92P <= n - 1; qVUNeyF3E92P = qVUNeyF3E92P + 1) {
                k1K6p5cRmq = sqrt ((liUeJdLf[IasYMheHxykt][0] - liUeJdLf[qVUNeyF3E92P][0]) * (liUeJdLf[IasYMheHxykt][0] - liUeJdLf[qVUNeyF3E92P][0]) + (liUeJdLf[IasYMheHxykt][1] - liUeJdLf[qVUNeyF3E92P][1]) * (liUeJdLf[IasYMheHxykt][1] - liUeJdLf[qVUNeyF3E92P][1]));
                if (k1K6p5cRmq >= qmLUaRC)
                    qmLUaRC = k1K6p5cRmq;
            }
            IasYMheHxykt++;
        }
    }
    cout << qmLUaRC << endl;
    return 0;
}

