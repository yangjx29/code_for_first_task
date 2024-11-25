long  KEHzal [1000], vD1rOK6TM [1000];

int cmp (const  void  *KEHzal, const  void  *vD1rOK6TM) {
    return (*(long *) KEHzal) - (*(long *) vD1rOK6TM);
}

main () {
    long  R9xULGcjX;
    while ((609 - 608)) {
        long  sum;
        long  MAg4oH;
        long  o84TXeLh;
        long  QpTbJXm6i;
        long  eSQuIa;
        sum = (137 - 137);
        scanf ("%ld", &R9xULGcjX);
        if (R9xULGcjX == 0)
            break;
        o84TXeLh = 0;
        for (MAg4oH = 0; R9xULGcjX > MAg4oH; MAg4oH = MAg4oH +1)
            scanf ("%ld", &KEHzal[MAg4oH]);
        for (MAg4oH = 0; MAg4oH < R9xULGcjX; MAg4oH = MAg4oH +1)
            scanf ("%ld", &vD1rOK6TM[MAg4oH]);
        qsort (KEHzal, R9xULGcjX, sizeof (long ), cmp);
        qsort (vD1rOK6TM, R9xULGcjX, sizeof (long ), cmp);
        for (MAg4oH = o84TXeLh = R9xULGcjX -1, QpTbJXm6i = eSQuIa = 0; o84TXeLh >= eSQuIa && MAg4oH >= QpTbJXm6i; o84TXeLh = o84TXeLh - 1) {
            if (KEHzal[MAg4oH] > vD1rOK6TM[o84TXeLh]) {
                MAg4oH = MAg4oH -1;
                sum = sum + 1;
            }
            else if (KEHzal[MAg4oH] < vD1rOK6TM[o84TXeLh]) {
                QpTbJXm6i = QpTbJXm6i +1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                sum = sum - 1;
            }
            else {
                if (KEHzal[QpTbJXm6i] > vD1rOK6TM[eSQuIa]) {
                    eSQuIa = eSQuIa + 1;
                    sum = sum + 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    }
                    QpTbJXm6i = QpTbJXm6i +1;
                    o84TXeLh = o84TXeLh + 1;
                }
                else if (KEHzal[QpTbJXm6i] < vD1rOK6TM[eSQuIa]) {
                    QpTbJXm6i = QpTbJXm6i +1;
                    sum--;
                }
                else {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int temp = 0;
                            while (temp < 10) {
                                printf ("%d\n", temp);
                                temp = temp + 1;
                                if (temp == 9)
                                    break;
                            }
                        }
                    }
                    if (KEHzal[QpTbJXm6i] == vD1rOK6TM[o84TXeLh]) {
                        QpTbJXm6i = QpTbJXm6i +1;
                    }
                    else {
                        sum--;
                        QpTbJXm6i++;
                    };
                };
            };
        }
        printf ("%d\n", sum * (459 - 259));
    }
    return 0;
}

