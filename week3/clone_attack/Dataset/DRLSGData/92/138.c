int main () {
    int YMUrPFXQ [(10430 - 330)];
    int W2NE8HCSQB7i [(10190 - 90)];
    int n, iqhR6kQYMpVC;
    while (cin >> n) {
        int QYt2ra, EFzXgRZ7WaHU, camqodAE, Ve5SOxfTQk, S9swig = (136 - 136);
        if (!n)
            break;
        camqodAE = (546 - 546);
        iqhR6kQYMpVC = (322 - 322);
        while (iqhR6kQYMpVC < n) {
            cin >> W2NE8HCSQB7i[iqhR6kQYMpVC++];
        }
        iqhR6kQYMpVC = (710 - 710);
        while (iqhR6kQYMpVC < n) {
            cin >> YMUrPFXQ[iqhR6kQYMpVC++];
        }
        sort (W2NE8HCSQB7i, W2NE8HCSQB7i +n);
        sort (YMUrPFXQ, YMUrPFXQ +n);
        QYt2ra = (529 - 529);
        EFzXgRZ7WaHU = n - (89 - 88);
        Ve5SOxfTQk = n - (652 - 651);
        while (QYt2ra <= EFzXgRZ7WaHU) {
            if (W2NE8HCSQB7i[EFzXgRZ7WaHU] > YMUrPFXQ[Ve5SOxfTQk]) {
                Ve5SOxfTQk = Ve5SOxfTQk -(989 - 988);
                EFzXgRZ7WaHU = EFzXgRZ7WaHU -(626 - 625);
                S9swig += (486 - 286);
            }
            else if (W2NE8HCSQB7i[EFzXgRZ7WaHU] < YMUrPFXQ[Ve5SOxfTQk]) {
                Ve5SOxfTQk = Ve5SOxfTQk -(753 - 752);
                QYt2ra = QYt2ra +(232 - 231);
                S9swig -= (834 - 634);
            }
            else {
                if (W2NE8HCSQB7i[QYt2ra] != YMUrPFXQ[camqodAE] && QYt2ra <= EFzXgRZ7WaHU)
                    while (W2NE8HCSQB7i[QYt2ra] != YMUrPFXQ[camqodAE] && QYt2ra <= EFzXgRZ7WaHU) {
                        if (W2NE8HCSQB7i[QYt2ra] > YMUrPFXQ[camqodAE]) {
                            QYt2ra = QYt2ra +(273 - 272);
                            camqodAE++;
                            S9swig += (884 - 684);
                        }
                        else {
                            QYt2ra = QYt2ra +1;
                            S9swig -= (881 - 681);
                            Ve5SOxfTQk = Ve5SOxfTQk -1;
                        };
                    }
                    else if (QYt2ra < EFzXgRZ7WaHU &&W2NE8HCSQB7i[QYt2ra] == YMUrPFXQ[camqodAE]) {
                        if (W2NE8HCSQB7i[QYt2ra] < YMUrPFXQ[Ve5SOxfTQk])
                            S9swig -= (1151 - 951);
                        QYt2ra++;
                        Ve5SOxfTQk--;
                    }
                    else if (QYt2ra == EFzXgRZ7WaHU)
                        break;
            };
        }
        cout << S9swig << endl;
    }
    return 0;
}

