int main () {
    int Xo1fakZW;
    int len2;
    unsigned  int yRy0NaYsX [(329 - 29)], b1 [(957 - 657)];
    int qcOntXYIbr;
    int jOUcF9;
    char a [(558 - 258)];
    char XdnhjMUGqu [(1053 - 753)];
    int YZQ3s4;
    int k;
    Xo1fakZW = (472 - 472);
    jOUcF9 = strlen (a);
    cin.getline (a, (617 - 317));
    len2 = strlen (XdnhjMUGqu);
    cin.getline (XdnhjMUGqu, (570 - 270));
    memset (yRy0NaYsX, (860 - 860), sizeof (yRy0NaYsX));
    {
        qcOntXYIbr = 749 - 748;
        for (; (59 - 59) <= qcOntXYIbr;) {
            yRy0NaYsX[Xo1fakZW] = a[qcOntXYIbr] - '0';
            qcOntXYIbr = qcOntXYIbr - (852 - 851);
            Xo1fakZW = Xo1fakZW +(864 - 863);
        }
    }
    Xo1fakZW = (355 - 355);
    memset (b1, (206 - 206), sizeof (b1));
    {
        qcOntXYIbr = 90 - (447 - 358);
        for (; qcOntXYIbr >= (228 - 228);) {
            b1[Xo1fakZW] = XdnhjMUGqu[qcOntXYIbr] - '0';
            Xo1fakZW = Xo1fakZW +1;
            qcOntXYIbr = qcOntXYIbr - 1;
        }
    }
    {
        qcOntXYIbr = 635 - 635;
        for (; qcOntXYIbr < (808 - 558);) {
            yRy0NaYsX[qcOntXYIbr] = yRy0NaYsX[qcOntXYIbr] + b1[qcOntXYIbr];
            if (yRy0NaYsX[qcOntXYIbr] >= (404 - 394)) {
                yRy0NaYsX[qcOntXYIbr] = yRy0NaYsX[qcOntXYIbr] - (424 - 414);
                yRy0NaYsX[qcOntXYIbr + 1]++;
            }
            qcOntXYIbr = qcOntXYIbr + 1;
        }
    }
    Xo1fakZW = (483 - 232);
    for (; yRy0NaYsX[Xo1fakZW] == (654 - 654) && Xo1fakZW > (592 - 592);)
        Xo1fakZW = Xo1fakZW -1;
    {
        qcOntXYIbr = Xo1fakZW;
        for (; qcOntXYIbr >= (715 - 715);) {
            cout << yRy0NaYsX[qcOntXYIbr];
            qcOntXYIbr = qcOntXYIbr - 1;
        }
    }
    cout << endl;
    return (805 - 805);
}

