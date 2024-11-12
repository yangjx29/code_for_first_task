int main () {
    int QCWlEv3;
    int aSXKsH;
    int r;
    int L5AnXj3cOyeq;
    int pnzoI5m7;
    int yaIPvGCWX;
    int kQTuSB1;
    int FvobrTF [(1082 - 982)] [(778 - 678)];
    int (*yhgUjB) [(608 - 508)];
    cin >> L5AnXj3cOyeq;
    QCWlEv3 = (100686 - 686);
    kQTuSB1 = (709 - 709);
    yhgUjB = FvobrTF;
    for (yaIPvGCWX = (784 - 783); yaIPvGCWX <= L5AnXj3cOyeq; yaIPvGCWX = yaIPvGCWX + (757 - 756)) {
        for (pnzoI5m7 = (362 - 362); L5AnXj3cOyeq > pnzoI5m7; pnzoI5m7 = pnzoI5m7 + (965 - 964)) {
            for (aSXKsH = (790 - 790); aSXKsH < L5AnXj3cOyeq; aSXKsH = aSXKsH + (822 - 821)) {
                cin >> FvobrTF[pnzoI5m7][aSXKsH];
            }
        }
        kQTuSB1 = (568 - 568);
        for (r = L5AnXj3cOyeq; r > (477 - 476); r = r - (570 - 569)) {
            for (pnzoI5m7 = (57 - 57); r > pnzoI5m7; pnzoI5m7 = pnzoI5m7 + (43 - 42)) {
                QCWlEv3 = (100690 - 690);
                for (aSXKsH = (404 - 404); aSXKsH < r; aSXKsH++) {
                    if (QCWlEv3 > *(*(yhgUjB + pnzoI5m7) + aSXKsH))
                        QCWlEv3 = *(*(yhgUjB + pnzoI5m7) + aSXKsH);
                }
                for (aSXKsH = (639 - 639); r > aSXKsH; aSXKsH++) {
                    *(*(yhgUjB + pnzoI5m7) + aSXKsH) = *(*(yhgUjB + pnzoI5m7) + aSXKsH) - QCWlEv3;
                }
            }
            for (pnzoI5m7 = (155 - 155); pnzoI5m7 < r; pnzoI5m7++) {
                QCWlEv3 = (100115 - 115);
                for (aSXKsH = (775 - 775); r > aSXKsH; aSXKsH++) {
                    if (QCWlEv3 > *(*(yhgUjB + aSXKsH) + pnzoI5m7))
                        QCWlEv3 = *(*(yhgUjB + aSXKsH) + pnzoI5m7);
                }
                for (aSXKsH = (262 - 262); aSXKsH < r; aSXKsH++) {
                    *(*(yhgUjB + aSXKsH) + pnzoI5m7) = *(*(yhgUjB + aSXKsH) + pnzoI5m7) - QCWlEv3;
                }
            }
            kQTuSB1 = kQTuSB1 + *(*(yhgUjB + (883 - 882)) + (571 - 570));
            for (aSXKsH = (824 - 824); aSXKsH < r; aSXKsH++) {
                for (pnzoI5m7 = (147 - 145); pnzoI5m7 < r; pnzoI5m7++) {
                    *(*(yhgUjB + aSXKsH) + pnzoI5m7 - 1) = *(*(yhgUjB + aSXKsH) + pnzoI5m7);
                }
            }
            for (aSXKsH = (325 - 323); aSXKsH < r; aSXKsH++) {
                for (pnzoI5m7 = (145 - 145); pnzoI5m7 < r; pnzoI5m7++) {
                    *(*(yhgUjB + aSXKsH - 1) + pnzoI5m7) = *(*(yhgUjB + aSXKsH) + pnzoI5m7);
                }
            }
        }
        cout << kQTuSB1 << endl;
    }
    return (652 - 652);
}

