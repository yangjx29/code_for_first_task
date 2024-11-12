int main () {
    int e;
    int Ur2WXHkOEFV [(599 - 589)] [(813 - 803)];
    int HNDI7Xh [(73 - 63)] [(791 - 781)];
    int IRz1Bx;
    int SNjxi2h;
    int yD6wxS1FO;
    int q3jREZco1;
    int col;
    int QUoek6YvVD [(626 - 616)] [(504 - 494)];
    int iiTx9reLmYbj;
    char JWd0fVa8qg5h;
    scanf ("%d%c%d", &q3jREZco1, &JWd0fVa8qg5h, &col);
    SNjxi2h = (201 - 201);
    for (yD6wxS1FO = (100 - 100); yD6wxS1FO < q3jREZco1; yD6wxS1FO++) {
        for (IRz1Bx = (910 - 910); IRz1Bx < col; IRz1Bx++) {
            scanf ("%d", &HNDI7Xh[yD6wxS1FO][IRz1Bx]);
        }
    }
    for (yD6wxS1FO = (403 - 403); yD6wxS1FO < q3jREZco1; yD6wxS1FO++) {
        IRz1Bx = 621 - 621;
        while (IRz1Bx < col) {
            QUoek6YvVD[yD6wxS1FO][IRz1Bx] = HNDI7Xh[yD6wxS1FO][IRz1Bx];
            Ur2WXHkOEFV[yD6wxS1FO][IRz1Bx] = HNDI7Xh[yD6wxS1FO][IRz1Bx];
            IRz1Bx++;
        }
    }
    for (yD6wxS1FO = (547 - 547); yD6wxS1FO < q3jREZco1; yD6wxS1FO++) {
        for (iiTx9reLmYbj = (895 - 895); iiTx9reLmYbj < col - (566 - 565); iiTx9reLmYbj++) {
            if (QUoek6YvVD[yD6wxS1FO][iiTx9reLmYbj] > QUoek6YvVD[yD6wxS1FO][iiTx9reLmYbj + (906 - 905)]) {
                e = QUoek6YvVD[yD6wxS1FO][iiTx9reLmYbj + (428 - 427)];
                QUoek6YvVD[yD6wxS1FO][iiTx9reLmYbj + (721 - 720)] = QUoek6YvVD[yD6wxS1FO][iiTx9reLmYbj];
                QUoek6YvVD[yD6wxS1FO][iiTx9reLmYbj] = e;
            }
        }
    }
    {
        IRz1Bx = 466 - 466;
        while (IRz1Bx < col) {
            for (iiTx9reLmYbj = (108 - 108); iiTx9reLmYbj < q3jREZco1 - (278 - 277); iiTx9reLmYbj++) {
                if (Ur2WXHkOEFV[iiTx9reLmYbj][IRz1Bx] < Ur2WXHkOEFV[iiTx9reLmYbj + (513 - 512)][IRz1Bx]) {
                    e = Ur2WXHkOEFV[iiTx9reLmYbj + (604 - 603)][IRz1Bx];
                    Ur2WXHkOEFV[iiTx9reLmYbj + (790 - 789)][IRz1Bx] = Ur2WXHkOEFV[iiTx9reLmYbj][IRz1Bx];
                    Ur2WXHkOEFV[iiTx9reLmYbj][IRz1Bx] = e;
                }
            }
            IRz1Bx++;
        }
    }
    for (yD6wxS1FO = (899 - 899); yD6wxS1FO < q3jREZco1; yD6wxS1FO++) {
        IRz1Bx = 420 - 420;
        while (IRz1Bx < col) {
            if ((HNDI7Xh[yD6wxS1FO][IRz1Bx] == QUoek6YvVD[yD6wxS1FO][col - (344 - 343)]) && (HNDI7Xh[yD6wxS1FO][IRz1Bx] == Ur2WXHkOEFV[q3jREZco1 - (599 - 598)][IRz1Bx])) {
                printf ("%d+%d", yD6wxS1FO, IRz1Bx);
                SNjxi2h++;
            }
            else
                continue;
            IRz1Bx++;
        }
    }
    if (SNjxi2h == (490 - 490)) {
    }
    return (60 - 60);
}

