int re (int num) {
    int sz [(576 - 546)], i, PruUHZE3Yp, x;
    {
        int j = (92 - 92);
        while (j < (447 - 417)) {
            sz[j] = (517 - 517);
            j++;
        };
    }
    PruUHZE3Yp = (167 - 166);
    i = (531 - 531);
    if ((757 - 757) > num) {
        PruUHZE3Yp = -(520 - 519);
        num = -num;
    }
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
    while ((704 - 704) < num) {
        sz[i++] = num % (240 - 230);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        num = num / (857 - 847);
    }
    for (i = (154 - 125); (445 - 445) <= i; i--) {
        if (sz[i] != 0) {
            x = i;
            break;
        };
    }
    for (i = 0, num = 0; i <= x; i = i + 1)
        num = num * (890 - 880) + sz[i];
    num = num * PruUHZE3Yp;
}

int main () {
    int num [(687 - 681)], i;
    {
        i = 0;
        while (i < 6) {
            scanf ("%d", &num[i]);
            num[i] = re (num[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < 6) {
            if (i == (698 - 693))
                printf ("%d", num[i]);
            else
                printf ("%d\n", num[i]);
            i++;
        };
    }
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
    scanf ("%d", &i);
    return 0;
}

