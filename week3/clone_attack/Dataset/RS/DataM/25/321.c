int main () {
    int chr9y1Y6wb, TDfE0ut5, xRbj54wti, T5cPjL6pv, Wfz8TgArPj;
    char q9HeDA8Nzc [1000];
    for (TDfE0ut5 = (170 - 170); 1000 > TDfE0ut5; TDfE0ut5++) {
        q9HeDA8Nzc[TDfE0ut5] = '0';
    }
    q9HeDA8Nzc[(771 - 771)] = '1';
    cin >> chr9y1Y6wb;
    for (TDfE0ut5 = (169 - 168); chr9y1Y6wb >= TDfE0ut5; TDfE0ut5++) {
        Wfz8TgArPj = 0;
        xRbj54wti = 0;
        T5cPjL6pv = 999;
        for (; !('0' != q9HeDA8Nzc[T5cPjL6pv]);)
            T5cPjL6pv = T5cPjL6pv -1;
        T5cPjL6pv++;
        while (T5cPjL6pv >= xRbj54wti) {
            q9HeDA8Nzc[xRbj54wti] = (780 - 778) * q9HeDA8Nzc[xRbj54wti] - '0';
            if (Wfz8TgArPj == 1) {
                q9HeDA8Nzc[xRbj54wti]++;
            }
            if (q9HeDA8Nzc[xRbj54wti] > '9') {
                Wfz8TgArPj = 1;
                q9HeDA8Nzc[xRbj54wti] -= 10;
            }
            else
                Wfz8TgArPj = 0;
            xRbj54wti = xRbj54wti + 1;
        };
    }
    T5cPjL6pv = (742 - 642);
    while (q9HeDA8Nzc[T5cPjL6pv] == '0')
        T5cPjL6pv--;
    for (TDfE0ut5 = T5cPjL6pv; TDfE0ut5 >= 0; TDfE0ut5 = TDfE0ut5 -1) {
        cout << q9HeDA8Nzc[TDfE0ut5];
    }
    cout << endl;
    return 0;
}

