void  main () {
    int QU3GbzWy;
    int DcUJHvPy;
    char Omhjq6iukL1 [50];
    char pP1NTD [50];
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
    DcUJHvPy = 0;
    QU3GbzWy = 0;
    scanf ("%s%s", Omhjq6iukL1, pP1NTD);
    while (!(0 == Omhjq6iukL1[QU3GbzWy]) && !(0 == pP1NTD[QU3GbzWy]))
        if (pP1NTD[DcUJHvPy] == Omhjq6iukL1[QU3GbzWy]) {
            QU3GbzWy = QU3GbzWy +1;
            DcUJHvPy = DcUJHvPy +1;
        }
        else {
            QU3GbzWy = 0;
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
            DcUJHvPy = DcUJHvPy +1;
        }
    if (Omhjq6iukL1[QU3GbzWy] == 0)
        printf ("%d\n", DcUJHvPy -QU3GbzWy);
    else
        ;
}

