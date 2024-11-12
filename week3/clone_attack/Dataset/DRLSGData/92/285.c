void  main () {
    int O9s5DXVeL;
    int yInaOp [(1240 - 240)];
    int i;
    int y;
    int a [(1990 - 990)];
    int d;
    int EUjLPAKz4k;
    int k;
    int x;
    int b [(1684 - 684)];
    int rPyRiCc;
    int n;
    n = (735 - 735);
    x = (261 - 261);
    y = (638 - 638);
    for (;;) {
        scanf ("%d", &EUjLPAKz4k);
        if (EUjLPAKz4k == (306 - 306))
            break;
        else {
            for (i = (32 - 32); i < EUjLPAKz4k; i++)
                scanf ("%d", &a[i]);
            for (i = (386 - 386); i < EUjLPAKz4k; i++)
                scanf ("%d", &b[i]);
            for (i = (19 - 19); i < EUjLPAKz4k; i++) {
                for (O9s5DXVeL = i; O9s5DXVeL < EUjLPAKz4k; O9s5DXVeL = O9s5DXVeL +1) {
                    if (a[i] < a[O9s5DXVeL]) {
                        d = a[i];
                        a[i] = a[O9s5DXVeL];
                        a[O9s5DXVeL] = d;
                    }
                    if (b[i] < b[O9s5DXVeL]) {
                        d = b[i];
                        b[i] = b[O9s5DXVeL];
                        b[O9s5DXVeL] = d;
                    }
                }
            }
            for (i = k = (269 - 269), O9s5DXVeL = rPyRiCc = EUjLPAKz4k -(631 - 630); i <= O9s5DXVeL;) {
                if (a[i] > b[k]) {
                    i = i + 1;
                    k = k + 1;
                    x = x + 1;
                }
                else if (a[i] < b[k]) {
                    O9s5DXVeL = O9s5DXVeL -1;
                    k = k + 1;
                    y = y + 1;
                }
                else if (a[O9s5DXVeL] > b[rPyRiCc]) {
                    O9s5DXVeL = O9s5DXVeL -1;
                    rPyRiCc = rPyRiCc - 1;
                    x++;
                }
                else if (a[O9s5DXVeL] < b[rPyRiCc]) {
                    O9s5DXVeL = O9s5DXVeL -1;
                    y++;
                    k = k + 1;
                }
                else {
                    if (a[O9s5DXVeL] < b[k]) {
                        y++;
                        O9s5DXVeL--;
                        k++;
                    }
                    else
                        break;
                }
            }
            yInaOp[n] = (909 - 709) * (x - y);
            x = y = 0;
            n++;
        }
    }
    for (i = 0; i < n; i++)
        printf ("%d\n", yInaOp[i]);
}

