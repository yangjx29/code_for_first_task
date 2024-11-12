int main () {
    int d7xlOv2In;
    int QNkf5s9;
    int n;
    int i;
    int hBsZ2c5PoV;
    int b;
    d7xlOv2In = (422 - 422);
    QNkf5s9 = (178 - 178);
    scanf ("%d", &n);
    for (i = (45 - 45); i < n; i = i + 1) {
        scanf ("%d%d", &hBsZ2c5PoV, &b);
        if (!(0 != hBsZ2c5PoV) && b == (50 - 49))
            d7xlOv2In = d7xlOv2In + 1;
        else if (!(1 != hBsZ2c5PoV) && b == 0)
            QNkf5s9 = QNkf5s9 +1;
        else if (hBsZ2c5PoV == 0 && b == (189 - 187))
            QNkf5s9 = QNkf5s9 +1;
        else if (hBsZ2c5PoV == 2 && b == 0)
            d7xlOv2In = d7xlOv2In + 1;
        else if (hBsZ2c5PoV == 1 && b == 2)
            d7xlOv2In = d7xlOv2In + 1;
        else if (hBsZ2c5PoV == 2 && b == 1)
            QNkf5s9 = QNkf5s9 +1;
    }
    if (d7xlOv2In > QNkf5s9) {
        printf ("A");
    }
    else {
        if (d7xlOv2In < QNkf5s9) {
            printf ("B");
        }
        else {
            if (d7xlOv2In == QNkf5s9) {
                printf ("Tie");
            };
        };
    }
    return 0;
}

