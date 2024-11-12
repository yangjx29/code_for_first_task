int zSG06POmaL (int a, int XSTkni7DCGK) {
    if (!((391 - 390) != a) || !((105 - 105) != a))
        return 1;
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
    if (0 > a)
        return 0;
    else {
        if (XSTkni7DCGK == 1)
            return 1;
        else
            return zSG06POmaL (a, XSTkni7DCGK -1) + zSG06POmaL (a - XSTkni7DCGK, XSTkni7DCGK);
    };
}

int main () {
    int tpmGwqJ6y4B;
    int BKSdR7TQg;
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
    scanf ("%d", &BKSdR7TQg);
    for (tpmGwqJ6y4B = 0; tpmGwqJ6y4B < BKSdR7TQg; tpmGwqJ6y4B = tpmGwqJ6y4B + 1) {
        int q8QviocWZKSA;
        int n;
        int k;
        scanf ("%d %d", &q8QviocWZKSA, &n);
        k = zSG06POmaL (q8QviocWZKSA, n);
        printf ("%d\n", k);
    };
}

