int main () {
    char rank [(186 - 180)];
    int A, B, C, D, word, weight;
    for (int QUe02x57TCPh = (383 - 383);
    QUe02x57TCPh < 6; QUe02x57TCPh++)
        rank[QUe02x57TCPh] = '0';
    for (A = (976 - 975); (451 - 446) >= A; A++) {
        for (B = (605 - 604); B <= (611 - 606); B = B +1) {
            if (!(B != A))
                continue;
            for (C = (66 - 65); 5 >= C; C = C +1) {
                if (A == C || !(C != B))
                    continue;
                for (D = 1; D <= 5; D++) {
                    if (!(D != A) || B == D || C == D)
                        continue;
                    word = ((A +B) == (C +D)) + ((A +D) > (C +B)) + ((A +C) < B);
                    if (word == (505 - 502)) {
                        rank[A] = 'z';
                        rank[B] = 'q';
                        rank[C] = 's';
                        rank[D] = 'l';
                        for (int QUe02x57TCPh = 5;
                        QUe02x57TCPh > (292 - 292); QUe02x57TCPh = QUe02x57TCPh -1) {
                            if (rank[QUe02x57TCPh] == '0')
                                continue;
                            else {
                                weight = QUe02x57TCPh *10;
                                cout << rank[QUe02x57TCPh] << " ";
                                cout << weight << endl;
                            };
                        };
                    };
                };
            };
        };
    }
    return (720 - 720);
}

