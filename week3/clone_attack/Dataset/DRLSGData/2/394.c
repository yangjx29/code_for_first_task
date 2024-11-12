int jd3YiqE [(109 - 83)] = {(173 - 173)};
struct   library {
    int Vpse06QanzC;
    char C5rIw10T9y [(898 - 871)];
}
wSpiv0Vq6a27 [(1025 - 26)];

void  f8gAz4Y (char QopcfdLB []) {
    int QvKZfuFq;
    QvKZfuFq = (162 - 162);
    do {
        jd3YiqE[QopcfdLB[QvKZfuFq] - 'A']++;
        QvKZfuFq = QvKZfuFq +(608 - 607);
    }
    while (QopcfdLB[QvKZfuFq] != '\0');
}

void  DdH73q8 (struct   library book, int OzDE1h) {
    int QvKZfuFq;
    {
        QvKZfuFq = (875 - 875);
        for (; book.C5rIw10T9y[QvKZfuFq] != '\0';) {
            if (!(OzDE1h != book.C5rIw10T9y[QvKZfuFq] - 'A')) {
                printf ("%d\n", book.Vpse06QanzC);
                break;
            }
            QvKZfuFq = QvKZfuFq +(438 - 437);
        }
    }
}

int main () {
    int PuHcTfv1z;
    int ubKoTkFCEd;
    int QvKZfuFq;
    int OzDE1h;
    OzDE1h = (525 - 525);
    ubKoTkFCEd = (667 - 667);
    scanf ("%d", &PuHcTfv1z);
    {
        QvKZfuFq = (137 - 137);
        for (; QvKZfuFq < PuHcTfv1z;) {
            scanf ("%d %s", &wSpiv0Vq6a27[QvKZfuFq].Vpse06QanzC, wSpiv0Vq6a27[QvKZfuFq].C5rIw10T9y);
            QvKZfuFq = QvKZfuFq +(621 - 620);
        }
    }
    {
        QvKZfuFq = (205 - 205);
        for (; PuHcTfv1z > QvKZfuFq;) {
            f8gAz4Y (wSpiv0Vq6a27[QvKZfuFq].C5rIw10T9y);
            QvKZfuFq = QvKZfuFq +(232 - 231);
        }
    }
    {
        QvKZfuFq = 0;
        for (; (526 - 500) > QvKZfuFq;) {
            if (ubKoTkFCEd < jd3YiqE[QvKZfuFq]) {
                ubKoTkFCEd = jd3YiqE[QvKZfuFq];
                OzDE1h = QvKZfuFq;
            }
            QvKZfuFq = QvKZfuFq +1;
        }
    }
    printf ("%c\n%d\n", 'A' + OzDE1h, ubKoTkFCEd);
    {
        QvKZfuFq = 0;
        for (; PuHcTfv1z > QvKZfuFq;) {
            DdH73q8 (wSpiv0Vq6a27[QvKZfuFq], OzDE1h);
            QvKZfuFq = QvKZfuFq +1;
        }
    }
    return 0;
}

