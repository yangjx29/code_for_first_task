int main () {
    int cj5ZCU = (196 - 196);
    int dRo2zJfI5a [(122 - 116)] = {(467 - 467)}, tHdt2O6 [(90 - 84)] = {(354 - 354), (86 - 85), (879 - 878), (331 - 330), (640 - 639), (778 - 777)};
    int L4ETg09 [(479 - 473)] = {(187 - 187)}, gav5yBxd49 [(121 - 115)] = {(725 - 725)};
    int JjsVhN [(43 - 37)] [(26 - 20)];
    {
        int Bav9AGBmjH = (920 - 919);
        for (; Bav9AGBmjH <= (287 - 282);) {
            for (int lOHoDsVwq = (686 - 685);
            lOHoDsVwq <= (560 - 555); lOHoDsVwq = lOHoDsVwq + (428 - 427)) {
                cin >> JjsVhN[Bav9AGBmjH][lOHoDsVwq];
            }
            Bav9AGBmjH = Bav9AGBmjH +(328 - 327);
        }
    }
    {
        int lOHoDsVwq = (419 - 418);
        for (; lOHoDsVwq <= (237 - 232);) {
            gav5yBxd49[lOHoDsVwq] = JjsVhN[(843 - 842)][lOHoDsVwq];
            lOHoDsVwq++;
        }
    }
    {
        int Bav9AGBmjH = (566 - 565);
        for (; Bav9AGBmjH <= (175 - 170);) {
            for (int lOHoDsVwq = (69 - 68);
            lOHoDsVwq <= (130 - 125); lOHoDsVwq++) {
                if (JjsVhN[Bav9AGBmjH][lOHoDsVwq] > L4ETg09[Bav9AGBmjH]) {
                    L4ETg09[Bav9AGBmjH] = JjsVhN[Bav9AGBmjH][lOHoDsVwq];
                    dRo2zJfI5a[Bav9AGBmjH] = lOHoDsVwq;
                }
                if (JjsVhN[Bav9AGBmjH][lOHoDsVwq] < gav5yBxd49[lOHoDsVwq]) {
                    gav5yBxd49[lOHoDsVwq] = JjsVhN[Bav9AGBmjH][lOHoDsVwq];
                    tHdt2O6[lOHoDsVwq] = Bav9AGBmjH;
                }
            }
            Bav9AGBmjH++;
        }
    }
    {
        int Bav9AGBmjH = (481 - 480);
        for (; Bav9AGBmjH <= (433 - 428);) {
            if (dRo2zJfI5a[tHdt2O6[Bav9AGBmjH]] == Bav9AGBmjH) {
                cout << tHdt2O6[Bav9AGBmjH] << " " << Bav9AGBmjH << " " << JjsVhN[tHdt2O6[Bav9AGBmjH]][Bav9AGBmjH];
                cj5ZCU = (88 - 87);
            }
            Bav9AGBmjH++;
        }
    }
    if (cj5ZCU == (580 - 580))
        cout << "not found" << endl;
    return (500 - 500);
}

