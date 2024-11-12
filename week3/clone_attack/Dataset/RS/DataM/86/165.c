int main () {
    int x29NXKByCG47;
    int c9l0pLJgoMNB;
    int UHsuV2mIeg;
    int WEYPBA70nXMO;
    int iUfHy7F;
    int cflOUaMZBz [10];
    int s;
    x29NXKByCG47 = 60;
    scanf ("%d", &c9l0pLJgoMNB);
    for (UHsuV2mIeg = (338 - 338); UHsuV2mIeg < c9l0pLJgoMNB; UHsuV2mIeg = UHsuV2mIeg +1) {
        scanf ("%d", &iUfHy7F);
        if (!(0 != iUfHy7F))
            printf ("%d\n", x29NXKByCG47);
        else if (iUfHy7F > 0) {
            for (WEYPBA70nXMO = 0; WEYPBA70nXMO < iUfHy7F; WEYPBA70nXMO = WEYPBA70nXMO +1) {
                scanf ("%d", &cflOUaMZBz[WEYPBA70nXMO]);
                if ((cflOUaMZBz[WEYPBA70nXMO] + 3 * (WEYPBA70nXMO +1)) <= 60)
                    s = cflOUaMZBz[WEYPBA70nXMO] + 60 - (cflOUaMZBz[WEYPBA70nXMO] + 3 * (WEYPBA70nXMO +1));
                else if ((cflOUaMZBz[WEYPBA70nXMO] + 3 * WEYPBA70nXMO) <= 60)
                    s = cflOUaMZBz[WEYPBA70nXMO];
            }
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
            printf ("%d\n", s);
        };
    }
    return 0;
}

