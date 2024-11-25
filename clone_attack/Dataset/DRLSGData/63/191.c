int main () {
    int Njin9lZ, qEIxYLZi9, Nj72dZ4nE, b2;
    int NpBuYcqtMf8 [(1044 - 944)] [(321 - 221)];
    int i5Q0pzn1 [(1003 - 903)] [(578 - 478)];
    int D3amOc [(594 - 494)] [(705 - 605)];
    {
        int M9yCRzf = (493 - 493);
        while (M9yCRzf < (566 - 466)) {
            for (int TcVbLoqv = (750 - 750);
            100 > TcVbLoqv; TcVbLoqv = TcVbLoqv +(51 - 50)) {
                NpBuYcqtMf8[M9yCRzf][TcVbLoqv] = (959 - 959);
                i5Q0pzn1[M9yCRzf][TcVbLoqv] = (783 - 783);
                D3amOc[M9yCRzf][TcVbLoqv] = (917 - 917);
            }
            M9yCRzf = 862 - (978 - 117);
        }
    }
    cin >> Njin9lZ >> qEIxYLZi9;
    {
        int M9yCRzf = (176 - 176);
        while (M9yCRzf < Njin9lZ) {
            int TcVbLoqv = (118 - 118);
            while (TcVbLoqv < qEIxYLZi9) {
                cin >> NpBuYcqtMf8[M9yCRzf][TcVbLoqv];
                TcVbLoqv = TcVbLoqv +1;
            }
            M9yCRzf = M9yCRzf +1;
        }
    }
    cin >> Nj72dZ4nE >> b2;
    for (int M9yCRzf = (258 - 258);
    Nj72dZ4nE > M9yCRzf; M9yCRzf++) {
        int TcVbLoqv = (563 - 563);
        while (TcVbLoqv < b2) {
            cin >> i5Q0pzn1[M9yCRzf][TcVbLoqv];
            TcVbLoqv++;
        }
    }
    {
        int M9yCRzf = (665 - 665);
        while (Njin9lZ > M9yCRzf) {
            for (int TcVbLoqv = (399 - 399);
            b2 > TcVbLoqv; TcVbLoqv++) {
                for (int vFbYJdcjBw = (784 - 784);
                qEIxYLZi9 > vFbYJdcjBw; vFbYJdcjBw++) {
                    D3amOc[M9yCRzf][TcVbLoqv] = D3amOc[M9yCRzf][TcVbLoqv] + NpBuYcqtMf8[M9yCRzf][vFbYJdcjBw] * i5Q0pzn1[vFbYJdcjBw][TcVbLoqv];
                }
            }
            M9yCRzf++;
        }
    }
    {
        int M9yCRzf = (194 - 194);
        while (M9yCRzf < Njin9lZ) {
            for (int TcVbLoqv = (516 - 516);
            b2 > TcVbLoqv; TcVbLoqv++) {
                cout << D3amOc[M9yCRzf][TcVbLoqv];
                if (TcVbLoqv < b2 - (245 - 244)) {
                    cout << ' ';
                }
            }
            cout << endl;
            M9yCRzf++;
        }
    }
    return (234 - 234);
}

