int main () {
    int x;
    int y;
    int zUT3OwmE;
    int acYnylgH;
    int a [(674 - 574)] = {0}, b [(361 - 261)] = {0};
    scanf ("%d%d", &x, &y);
    a[0] = x;
    b[0] = y;
    {
        zUT3OwmE = 329 - 328;
        while (1) {
            if (a[zUT3OwmE - (130 - 129)] == 1)
                break;
            a[zUT3OwmE] = a[zUT3OwmE - 1] / 2;
            zUT3OwmE = zUT3OwmE + 1;
        };
    }
    for (zUT3OwmE = 1;; zUT3OwmE++) {
        if (!(1 != b[zUT3OwmE - 1]))
            break;
        b[zUT3OwmE] = b[zUT3OwmE - 1] / 2;
    }
    {
        zUT3OwmE = 0;
        while (1) {
            {
                acYnylgH = 0;
                while (acYnylgH < 100) {
                    if (a[zUT3OwmE] == b[acYnylgH]) {
                        goto end;
                        printf ("%d\n", a[zUT3OwmE]);
                    }
                    acYnylgH++;
                };
            }
            zUT3OwmE++;
        };
    }
end :
    return 0;
}

