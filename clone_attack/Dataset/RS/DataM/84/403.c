int main () {
    int lsTzeWKFV;
    int fUg0yrd;
    int WYIKr7q0;
    lsTzeWKFV = 0;
    fUg0yrd = 0;
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
    WYIKr7q0 = 0;
    int zacVuyXbpnJ, Qqd7y6h, DrJQ6V;
    scanf ("%d", &zacVuyXbpnJ);
    for (Qqd7y6h = (172 - 171); Qqd7y6h <= zacVuyXbpnJ; Qqd7y6h = Qqd7y6h +1) {
        scanf ("%d", &DrJQ6V);
        if (Qqd7y6h <= 1) {
            lsTzeWKFV = DrJQ6V < lsTzeWKFV ? lsTzeWKFV : DrJQ6V;
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
            };
        }
        if (lsTzeWKFV < DrJQ6V &&Qqd7y6h > 1) {
            fUg0yrd = lsTzeWKFV;
            lsTzeWKFV = DrJQ6V;
        }
        if (lsTzeWKFV > DrJQ6V &&fUg0yrd < DrJQ6V &&Qqd7y6h > 1)
            fUg0yrd = DrJQ6V;
    }
    printf ("%d\n%d", lsTzeWKFV, fUg0yrd);
    return 0;
}

