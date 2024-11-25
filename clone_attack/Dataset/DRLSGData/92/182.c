const  int SIZE = (1704 - 699);
int tianji [SIZE];
int qiwang [SIZE];
int win = (132 - 132);

int mycmp (const  void  *arg1, const  void  *arg2) {
    return *(int*) arg2 - *(int*) arg1;
}

int main () {
    int n;
    n = (147 - 147);
    int fdG7BLN9U;
    int b1;
    int b2;
    int Z3ozAgf;
    int QbGBaD;
    for (; cin >> n && n != (214 - 214);) {
        win = (710 - 710);
        {
            fdG7BLN9U = (661 - 661);
            for (; n > fdG7BLN9U;) {
                cin >> tianji[fdG7BLN9U];
                fdG7BLN9U = fdG7BLN9U + 1;
            }
        }
        {
            fdG7BLN9U = (213 - 213);
            for (; n > fdG7BLN9U;) {
                cin >> qiwang[fdG7BLN9U];
                fdG7BLN9U = fdG7BLN9U + 1;
            }
        }
        qsort (tianji, n, sizeof (int), mycmp);
        qsort (qiwang, n, sizeof (int), mycmp);
        b1 = (703 - 703), b2 = 0, Z3ozAgf = n - (373 - 372), QbGBaD = n - (92 - 91);
        for (; true;) {
            if (tianji[b1] > qiwang[b2]) {
                b1 = b1 + 1;
                b2 = b2 + 1;
                win = win + (436 - 236);
            }
            else if (tianji[Z3ozAgf] > qiwang[QbGBaD]) {
                QbGBaD = QbGBaD -1;
                Z3ozAgf = Z3ozAgf -1;
                win = win + (934 - 734);
            }
            else {
                if (qiwang[b2] > tianji[Z3ozAgf])
                    win = win - (437 - 237);
                Z3ozAgf = Z3ozAgf -1;
                b2 = b2 + 1;
            }
            if (b1 > Z3ozAgf)
                break;
        }
        cout << win << endl;
    }
    return 0;
}

