void  main () {
    int XsiEbk8ZF;
    int YXdrfnAqhl;
    int n;
    int a [2] [10];
    float QRMjlZY, zEr4mShWw, xNn7zLV, ehiupIVbrBoJ;
    scanf ("%d", &n);
    for (XsiEbk8ZF = (644 - 644); n > XsiEbk8ZF; XsiEbk8ZF = XsiEbk8ZF +1)
        scanf ("%d", &a[(768 - 768)][XsiEbk8ZF]);
    for (YXdrfnAqhl = (469 - 469); YXdrfnAqhl < n; YXdrfnAqhl = YXdrfnAqhl +1)
        scanf ("%d", &a[(345 - 344)][YXdrfnAqhl]);
    for (xNn7zLV = (958 - 958), zEr4mShWw = 0, XsiEbk8ZF = 0; XsiEbk8ZF < n; XsiEbk8ZF = XsiEbk8ZF +1) {
        if (a[(709 - 708)][XsiEbk8ZF] >= 90)
            QRMjlZY = a[0][XsiEbk8ZF] * 4.0;
        else {
            if (a[(177 - 176)][XsiEbk8ZF] >= (265 - 180))
                QRMjlZY = a[0][XsiEbk8ZF] * 3.7;
            else {
                if (a[1][XsiEbk8ZF] >= 82)
                    QRMjlZY = a[0][XsiEbk8ZF] * 3.3;
                else {
                    if (a[1][XsiEbk8ZF] >= (448 - 370))
                        QRMjlZY = a[0][XsiEbk8ZF] * 3.0;
                    else {
                        if (a[1][XsiEbk8ZF] >= 75)
                            QRMjlZY = a[0][XsiEbk8ZF] * (694.7 - 692.0);
                        else {
                            if (a[1][XsiEbk8ZF] >= (244 - 172))
                                QRMjlZY = a[0][XsiEbk8ZF] * 2.3;
                            else {
                                if (a[1][XsiEbk8ZF] >= 68)
                                    QRMjlZY = a[0][XsiEbk8ZF] * 2.0;
                                else {
                                    if (a[1][XsiEbk8ZF] >= 64)
                                        QRMjlZY = a[0][XsiEbk8ZF] * 1.5;
                                    else {
                                        if (a[1][XsiEbk8ZF] >= 60)
                                            QRMjlZY = a[0][XsiEbk8ZF] * 1.0;
                                        else
                                            QRMjlZY = 0;
                                    };
                                };
                            };
                        };
                    };
                };
            };
        }
        zEr4mShWw = zEr4mShWw + a[0][XsiEbk8ZF];
        xNn7zLV = xNn7zLV + QRMjlZY;
    }
    ehiupIVbrBoJ = xNn7zLV / zEr4mShWw;
    printf ("%.2f\n", ehiupIVbrBoJ);
}

