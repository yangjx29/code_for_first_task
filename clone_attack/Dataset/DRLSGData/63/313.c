int main () {
    int dPld7r [(1013 - 913)] [(1070 - 970)];
    int mz4rEkHbyf [(540 - 440)] [(300 - 200)];
    int NK132PBvMA [(611 - 511)] [(570 - 470)];
    int c8OaBw3;
    int ObhdJipf7U3;
    int dmxgJunIe8k;
    int SGLzIny0bgw;
    int QnrKQmhe;
    int NhtjGqBOI;
    int jW3ZOKkb9hq;
    int lVNndJsqaQ;
    for (QnrKQmhe = (84 - 84); 100 > QnrKQmhe; QnrKQmhe++) {
        NhtjGqBOI = 966 - 966;
        while (NhtjGqBOI < 100) {
            NK132PBvMA[QnrKQmhe][NhtjGqBOI] = (525 - 525);
            NhtjGqBOI++;
        }
    }
    cin >> c8OaBw3 >> ObhdJipf7U3;
    for (QnrKQmhe = (589 - 589); QnrKQmhe < c8OaBw3; QnrKQmhe++) {
        for (NhtjGqBOI = (876 - 876); NhtjGqBOI < ObhdJipf7U3; NhtjGqBOI++) {
            cin >> dPld7r[QnrKQmhe][NhtjGqBOI];
        }
    }
    cin >> dmxgJunIe8k >> SGLzIny0bgw;
    {
        QnrKQmhe = 960 - 960;
        while (QnrKQmhe < dmxgJunIe8k) {
            for (NhtjGqBOI = (78 - 78); NhtjGqBOI < SGLzIny0bgw; NhtjGqBOI++) {
                cin >> mz4rEkHbyf[QnrKQmhe][NhtjGqBOI];
            }
            QnrKQmhe = QnrKQmhe +1;
        }
    }
    for (QnrKQmhe = (95 - 95); QnrKQmhe < c8OaBw3; QnrKQmhe++) {
        for (NhtjGqBOI = (783 - 783); NhtjGqBOI < SGLzIny0bgw; NhtjGqBOI++) {
            lVNndJsqaQ = (61 - 61);
            while (lVNndJsqaQ < dmxgJunIe8k) {
                NK132PBvMA[QnrKQmhe][NhtjGqBOI] = NK132PBvMA[QnrKQmhe][NhtjGqBOI] + dPld7r[QnrKQmhe][lVNndJsqaQ] * mz4rEkHbyf[lVNndJsqaQ][NhtjGqBOI];
                lVNndJsqaQ++;
            }
        }
    }
    for (QnrKQmhe = 0; QnrKQmhe < c8OaBw3; QnrKQmhe++) {
        for (NhtjGqBOI = 0; NhtjGqBOI < SGLzIny0bgw -(376 - 375); NhtjGqBOI++) {
            cout << NK132PBvMA[QnrKQmhe][NhtjGqBOI] << " ";
        }
        cout << NK132PBvMA[QnrKQmhe][SGLzIny0bgw -(286 - 285)] << endl;
    }
    cin >> jW3ZOKkb9hq;
    return 0;
}

