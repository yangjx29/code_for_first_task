int main () {
    double  aIFQCs8cu9G [100];
    double  b [100];
    double  s7Z6gJPYyon [100];
    double  z0hSmIvg2pb;
    double  QeAEzsQ;
    double  IFstwzrpCjOP;
    int sK7WTR4QJuBP, XdSFqe0JA;
    cin >> sK7WTR4QJuBP >> z0hSmIvg2pb >> QeAEzsQ;
    IFstwzrpCjOP = QeAEzsQ / z0hSmIvg2pb;
    for (XdSFqe0JA = 0; XdSFqe0JA < sK7WTR4QJuBP - 1; XdSFqe0JA = XdSFqe0JA +1) {
        cin >> aIFQCs8cu9G[XdSFqe0JA] >> b[XdSFqe0JA];
        s7Z6gJPYyon[XdSFqe0JA] = b[XdSFqe0JA] / aIFQCs8cu9G[XdSFqe0JA];
        if (s7Z6gJPYyon[XdSFqe0JA] - IFstwzrpCjOP > 0.05)
            cout << "better" << endl;
        else {
            if (IFstwzrpCjOP -s7Z6gJPYyon[XdSFqe0JA] > 0.05)
                cout << "worse" << endl;
            else
                cout << "same" << endl;
        };
    }
    return 0;
}

