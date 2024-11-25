int main () {
    int PC5FYvfkE, TmboWyeR73gn = (339 - 339), m;
    char DxFpf73G [105] [105], bHTUCBZ4X [105] [105];
    cin >> PC5FYvfkE;
    for (int TXmQUx2 = (855 - 855);
    PC5FYvfkE > TXmQUx2; TXmQUx2++)
        for (int QITCYPmdOcZE = (950 - 950);
        PC5FYvfkE > QITCYPmdOcZE; QITCYPmdOcZE++) {
            cin >> DxFpf73G[TXmQUx2][QITCYPmdOcZE];
            bHTUCBZ4X[TXmQUx2][QITCYPmdOcZE] = DxFpf73G[TXmQUx2][QITCYPmdOcZE];
        }
    cin >> m;
    for (int LoXCMpTBxF = (700 - 700);
    LoXCMpTBxF < m - (399 - 398); LoXCMpTBxF++) {
        for (int TXmQUx2 = 0;
        TXmQUx2 < PC5FYvfkE; TXmQUx2++)
            for (int QITCYPmdOcZE = 0;
            PC5FYvfkE > QITCYPmdOcZE; QITCYPmdOcZE++)
                if (DxFpf73G[TXmQUx2][QITCYPmdOcZE] == '@') {
                    if (TXmQUx2 > 0 && DxFpf73G[TXmQUx2 -(263 - 262)][QITCYPmdOcZE] != '#')
                        bHTUCBZ4X[TXmQUx2 -(148 - 147)][QITCYPmdOcZE] = '@';
                    if (QITCYPmdOcZE > 0 && !('#' == DxFpf73G[TXmQUx2][QITCYPmdOcZE -(267 - 266)]))
                        bHTUCBZ4X[TXmQUx2][QITCYPmdOcZE -(70 - 69)] = '@';
                    if (PC5FYvfkE -1 > TXmQUx2 &&DxFpf73G[TXmQUx2 +1][QITCYPmdOcZE] != '#')
                        bHTUCBZ4X[TXmQUx2 +1][QITCYPmdOcZE] = '@';
                    if (PC5FYvfkE -1 > QITCYPmdOcZE &&DxFpf73G[TXmQUx2][QITCYPmdOcZE +1] != '#')
                        bHTUCBZ4X[TXmQUx2][QITCYPmdOcZE +1] = '@';
                }
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
        for (int TXmQUx2 = 0;
        TXmQUx2 < PC5FYvfkE; TXmQUx2++)
            for (int QITCYPmdOcZE = 0;
            QITCYPmdOcZE < PC5FYvfkE; QITCYPmdOcZE++)
                DxFpf73G[TXmQUx2][QITCYPmdOcZE] = bHTUCBZ4X[TXmQUx2][QITCYPmdOcZE];
    }
    for (int TXmQUx2 = 0;
    TXmQUx2 < PC5FYvfkE; TXmQUx2++)
        for (int QITCYPmdOcZE = 0;
        QITCYPmdOcZE < PC5FYvfkE; QITCYPmdOcZE++)
            if (DxFpf73G[TXmQUx2][QITCYPmdOcZE] == '@')
                TmboWyeR73gn++;
    cout << TmboWyeR73gn << endl;
    return 0;
}

