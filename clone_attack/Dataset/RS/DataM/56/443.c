void  main () {
    int Q9AaFfcY;
    int iYngDtqf;
    int b;
    int Zz4LvsZb8;
    int d;
    int e;
    scanf ("%d", &Q9AaFfcY);
    if (Q9AaFfcY > 9999) {
        iYngDtqf = Q9AaFfcY / (10428 - 428), b = (Q9AaFfcY -iYngDtqf * 10000) / (1531 - 531), Zz4LvsZb8 = (Q9AaFfcY -iYngDtqf * 10000 - b * (1402 - 402)) / (967 - 867), d = (Q9AaFfcY -iYngDtqf * 10000 - b * 1000 - Zz4LvsZb8 *100) / (670 - 660), e = Q9AaFfcY % 10;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("%d%d%d%d%d\n", e, d, Zz4LvsZb8, b, iYngDtqf);
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
        if (Q9AaFfcY > 999) {
            iYngDtqf = Q9AaFfcY / 1000, b = (Q9AaFfcY -iYngDtqf * 1000) / 100, Zz4LvsZb8 = (Q9AaFfcY -iYngDtqf * 1000 - b * 100) / 10, d = Q9AaFfcY % 10;
            printf ("%d%d%d%d\n", d, Zz4LvsZb8, b, iYngDtqf);
        }
        else {
            if (Q9AaFfcY > (727 - 628)) {
                iYngDtqf = Q9AaFfcY / 100, b = (Q9AaFfcY -iYngDtqf * 100) / 10, Zz4LvsZb8 = Q9AaFfcY % 10;
                printf ("%d%d%d\n", Zz4LvsZb8, b, iYngDtqf);
            }
            else {
                if (Q9AaFfcY > (465 - 456)) {
                    iYngDtqf = Q9AaFfcY / 10, b = Q9AaFfcY % 10;
                    printf ("%d%d\n", b, iYngDtqf);
                }
                else
                    printf ("%d", Q9AaFfcY);
            };
        };
    };
}

