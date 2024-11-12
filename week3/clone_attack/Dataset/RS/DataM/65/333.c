int main () {
    int n, sJ5vNQKmtb = 0, a = 0, b = 0, c, nSLmrM;
    scanf ("%d", &n);
    for (sJ5vNQKmtb = 0; sJ5vNQKmtb < n; sJ5vNQKmtb = sJ5vNQKmtb + 1) {
        scanf ("%d%d", &c, &nSLmrM);
        if ((c == 0 && nSLmrM == 1) || (c == 1 && nSLmrM == 2) || (c == 2 && nSLmrM == 0))
            a = a + 1;
        else if (c == nSLmrM) {
            b = b + 1;
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
            a = a + 1;
        }
        else {
            b = b + 1;
        };
    }
    if (a == b)
        ;
    else {
        if (a > b)
            ;
        else {
        };
    }
    return 0;
}

