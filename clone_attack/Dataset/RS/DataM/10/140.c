int max (int *oUSZJg9awP6, int num, int height) {
    int MrRXlSvwyqe;
    int TX3wFCvSps2A;
    int pTaYdf647g;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    if (num == (70 - 69)) {
        if (*oUSZJg9awP6 <= height)
            MrRXlSvwyqe = 1;
        else
            MrRXlSvwyqe = 0;
    }
    else {
        TX3wFCvSps2A = max (oUSZJg9awP6 + 1, num - 1, *oUSZJg9awP6) + 1;
        pTaYdf647g = max (oUSZJg9awP6 + 1, num - 1, height);
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
        if (*oUSZJg9awP6 <= height && TX3wFCvSps2A >= pTaYdf647g)
            MrRXlSvwyqe = TX3wFCvSps2A;
        else
            MrRXlSvwyqe = pTaYdf647g;
    }
    return (MrRXlSvwyqe);
}

void  main () {
    int QrAZae6FyRzc [100], pu7H8tzpoFe, jPORtGvZXI, height = (100806 - 806), uHoZCyh;
    scanf ("%d", &pu7H8tzpoFe);
    for (jPORtGvZXI = 0; jPORtGvZXI < pu7H8tzpoFe; jPORtGvZXI = jPORtGvZXI + 1)
        scanf ("%d", &QrAZae6FyRzc[jPORtGvZXI]);
    uHoZCyh = max (QrAZae6FyRzc, pu7H8tzpoFe, height);
    printf ("%d", uHoZCyh);
}

