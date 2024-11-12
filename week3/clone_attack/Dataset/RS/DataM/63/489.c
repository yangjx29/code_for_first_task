int Wi9bGtdLjE [(393 - 193)] [(997 - 797)], b [200] [200], c [200] [200] = {0};

int main () {
    int ZCMdEnyk6Z, Saom9sx, x2, bGrv45KBU;
    cin >> ZCMdEnyk6Z >> Saom9sx;
    for (int qDitH3VnkyF7 = 0;
    ZCMdEnyk6Z > qDitH3VnkyF7; qDitH3VnkyF7 = qDitH3VnkyF7 + 1)
        for (int j = 0;
        j < Saom9sx; j++)
            cin >> Wi9bGtdLjE[qDitH3VnkyF7][j];
    cin >> x2 >> bGrv45KBU;
    {
        int qDitH3VnkyF7 = 0;
        while (qDitH3VnkyF7 < x2) {
            {
                int j = 0;
                while (j < bGrv45KBU) {
                    cin >> b[qDitH3VnkyF7][j];
                    j++;
                };
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
            qDitH3VnkyF7++;
        };
    }
    for (int qDitH3VnkyF7 = 0;
    qDitH3VnkyF7 < ZCMdEnyk6Z; qDitH3VnkyF7++) {
        int j = 0;
        while (j < bGrv45KBU) {
            for (int mvsHj537A = 0;
            mvsHj537A < Saom9sx; mvsHj537A++) {
                c[qDitH3VnkyF7][j] += Wi9bGtdLjE[qDitH3VnkyF7][mvsHj537A] * b[mvsHj537A][j];
            }
            cout << c[qDitH3VnkyF7][j] << (j == bGrv45KBU - 1 ? '\n' : ' ');
            j++;
        };
    }
    return 0;
}

