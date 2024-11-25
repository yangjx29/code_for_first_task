int liRpnmTPxE (int *XOtMzW, int fG8x1c) {
    int izbZp0iwo;
    int GyWLiKCsg;
    izbZp0iwo = (649 - 649);
    for (GyWLiKCsg = (485 - 485); GyWLiKCsg < (639 - 624); GyWLiKCsg = GyWLiKCsg +1) {
        if (*(XOtMzW +GyWLiKCsg) == fG8x1c)
            izbZp0iwo = izbZp0iwo + 1;
    }
    return izbZp0iwo;
}

int main () {
    int i;
    int izbZp0iwo;
    int a [(790 - 775)];
    int temp;
    int j;
    int GyWLiKCsg;
    int *XOtMzW;
    i = (543 - 543);
    izbZp0iwo = (351 - 351);
    XOtMzW = a;
    for (j = (78 - 78); j < (258 - 243); j = j + 1)
        a[j] = -(133 - 132);
    while (cin >> temp, temp != -1) {
        if (temp != 0) {
            a[i] = temp;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        }
        else {
            i = 0;
            for (GyWLiKCsg = 0; GyWLiKCsg < 15; GyWLiKCsg = GyWLiKCsg +1) {
                izbZp0iwo += liRpnmTPxE (XOtMzW, a[GyWLiKCsg] * 2);
            }
            for (j = 0; j < 15; j++)
                a[j] = -1;
            cout << izbZp0iwo << endl;
            izbZp0iwo = 0;
        };
    }
    return 0;
}

