void  main () {
    int diIAmOPn;
    int D4KlCLo;
    int *tPu1YF;
    int WVP7n8Ylui;
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
    tPu1YF = (int *) malloc (D4KlCLo *4);
    scanf ("%d", &D4KlCLo);
    for (diIAmOPn = 0; diIAmOPn < D4KlCLo; diIAmOPn = diIAmOPn + 1)
        scanf ("%d", tPu1YF + diIAmOPn);
    for (diIAmOPn = 0; diIAmOPn < D4KlCLo / 2; diIAmOPn++) {
        WVP7n8Ylui = *(tPu1YF + diIAmOPn);
        *(tPu1YF + diIAmOPn) = *(tPu1YF + D4KlCLo -(817 - 816) - diIAmOPn);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        *(tPu1YF + D4KlCLo -1 - diIAmOPn) = WVP7n8Ylui;
    }
    for (diIAmOPn = 0; diIAmOPn < D4KlCLo; diIAmOPn++) {
        printf ("%d", *(tPu1YF + diIAmOPn));
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
        if (diIAmOPn != D4KlCLo -1)
            printf (" ");
    };
}

