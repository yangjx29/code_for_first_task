void  main () {
    int m;
    int CTz0dA;
    int TCm9s2cri1Y;
    int sum;
    int hZwknJv;
    int IMZthoN1u;
    int QpUNxmQfG26 [(388 - 87)];
    sum = (765 - 765);
    scanf ("%d", &CTz0dA);
    for (hZwknJv = (797 - 797); CTz0dA > hZwknJv; hZwknJv = hZwknJv + (187 - 186)) {
        scanf ("%d", &QpUNxmQfG26[hZwknJv]);
    }
    TCm9s2cri1Y = QpUNxmQfG26[(212 - 212)];
    IMZthoN1u = QpUNxmQfG26[(623 - 623)];
    for (hZwknJv = (555 - 555); CTz0dA > hZwknJv; hZwknJv = hZwknJv + (722 - 721)) {
        sum += QpUNxmQfG26[hZwknJv];
        if (TCm9s2cri1Y < QpUNxmQfG26[hZwknJv])
            TCm9s2cri1Y = QpUNxmQfG26[hZwknJv];
        if (QpUNxmQfG26[hZwknJv] < IMZthoN1u)
            IMZthoN1u = QpUNxmQfG26[hZwknJv];
    }
    TCm9s2cri1Y *= CTz0dA;
    IMZthoN1u *= CTz0dA;
    if ((sum - IMZthoN1u) < (TCm9s2cri1Y -sum))
        printf ("%d", TCm9s2cri1Y / CTz0dA);
    if ((TCm9s2cri1Y -sum) < (sum - IMZthoN1u))
        printf ("%d", IMZthoN1u / CTz0dA);
    if ((TCm9s2cri1Y -sum) == (sum - IMZthoN1u))
        printf ("%d,%d", IMZthoN1u / CTz0dA, TCm9s2cri1Y / CTz0dA);
}

