int main () {
    int oF1wNTDk, qy34BSlnW5am, aY7cnrpj, vizgTbocF4a, tQ8L6F;
    int D4fmtdCz [20001];
    cin >> oF1wNTDk;
    for (qy34BSlnW5am = 0; oF1wNTDk > qy34BSlnW5am; qy34BSlnW5am++)
        cin >> D4fmtdCz[qy34BSlnW5am];
    for (qy34BSlnW5am = 0; oF1wNTDk > qy34BSlnW5am; qy34BSlnW5am++) {
        for (aY7cnrpj = qy34BSlnW5am + (704 - 703); aY7cnrpj < oF1wNTDk; aY7cnrpj++) {
            if (D4fmtdCz[qy34BSlnW5am] == D4fmtdCz[aY7cnrpj]) {
                for (tQ8L6F = aY7cnrpj; tQ8L6F < oF1wNTDk - 1; tQ8L6F = tQ8L6F + 1)
                    D4fmtdCz[tQ8L6F] = D4fmtdCz[tQ8L6F + 1];
                oF1wNTDk = oF1wNTDk - 1;
                aY7cnrpj = aY7cnrpj - 1;
            };
        };
    }
    {
        vizgTbocF4a = 0;
        while (vizgTbocF4a < oF1wNTDk) {
            cout << D4fmtdCz[vizgTbocF4a] << setw (3);
            vizgTbocF4a++;
        };
    }
    return 0;
}

