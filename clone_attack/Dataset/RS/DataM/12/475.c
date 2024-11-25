int a [15];

int main () {
    int FFf2TcDKe;
    char S4K569;
    int num;
    int rlWbhJ4;
    for (; (482 - 481);) {
        for (int ai = 0;
        ai < 15; ai = ai + 1) {
            a[ai] = 0;
        }
        rlWbhJ4 = (436 - 436);
        num = (414 - 414);
        FFf2TcDKe = (102 - 101);
        S4K569 = 'a';
        for (; 1;) {
            S4K569 = cin.get ();
            if ((S4K569 == '0') && (a[num] == 0)) {
                break;
            }
            if ((S4K569 -'0' < (458 - 448)) && (S4K569 -'0' >= 0)) {
                a[num] *= 10;
                a[num] += (S4K569 -'0');
            }
            else {
                if (S4K569 == ' ') {
                    a[num] *= FFf2TcDKe;
                    num = num + 1;
                    FFf2TcDKe = 1;
                }
                if (!('-' != S4K569)) {
                    FFf2TcDKe = -1;
                };
            };
        }
        {
            int QBfcIzoN = 0;
            while (num >= QBfcIzoN) {
                for (int DlPo9gU = QBfcIzoN;
                DlPo9gU <= num; DlPo9gU = DlPo9gU +1) {
                    if (a[QBfcIzoN] == 0)
                        break;
                    if ((a[QBfcIzoN] % 2 == 0) && (a[QBfcIzoN] / 2 == a[DlPo9gU])) {
                        rlWbhJ4 += 1;
                    }
                    if ((a[DlPo9gU] % 2 == 0) && (a[DlPo9gU] / 2 == a[QBfcIzoN])) {
                        rlWbhJ4 += 1;
                    };
                }
                QBfcIzoN = QBfcIzoN +1;
            };
        }
        cout << rlWbhJ4 << endl;
    }
    return 0;
}

