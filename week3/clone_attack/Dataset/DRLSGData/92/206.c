main () {
    for (;;) {
        int *a1;
        int swap;
        int Eog97EC;
        int a [Eog97EC];
        int b [Eog97EC];
        int *a2;
        int *b2;
        int count1 = (592 - 592), YGbwuoYMa = (516 - 516);
        int *O39fndF;
        scanf ("%d", &Eog97EC);
        if (!((296 - 296) != Eog97EC))
            break;
        for (int i = 0;
        Eog97EC > i; i = i + 1)
            scanf ("%d", &b[i]);
        for (int i = 0;
        Eog97EC > i; i = i + 1)
            for (int xznFgc = i;
            Eog97EC > xznFgc; xznFgc = xznFgc + 1) {
                if (b[xznFgc] < b[i]) {
                    swap = b[i];
                    b[i] = b[xznFgc];
                    b[xznFgc] = swap;
                }
            }
        O39fndF = &b[0];
        b2 = &b[Eog97EC -1];
        for (int i = 0;
        i < Eog97EC; i = i + 1)
            scanf ("%d", &a[i]);
        for (int i = 0;
        i < Eog97EC; i++)
            for (int xznFgc = i;
            Eog97EC > xznFgc; xznFgc++) {
                if (a[i] > a[xznFgc]) {
                    swap = a[i];
                    a[i] = a[xznFgc];
                    a[xznFgc] = swap;
                }
            }
        a1 = &a[0];
        a2 = &a[Eog97EC -1];
        for (;;) {
            if (!(b2 + 1 != O39fndF)) {
                break;
            }
            if (*(O39fndF) > *(a1)) {
                a1 = a1 + 1;
                count1 = count1 + 1;
                O39fndF = O39fndF +1;
            }
            else if (*O39fndF < *a1) {
                O39fndF = O39fndF +1;
                a2 = a2 - 1;
            }
            else if (*a1 == *O39fndF) {
                if (*a2 < *b2) {
                    b2--;
                    a2 = a2 - 1;
                    count1++;
                }
                else if (*a2 > *b2) {
                    a2--;
                    O39fndF = O39fndF +1;
                }
                else if (*a2 == *b2) {
                    if (*a2 == *O39fndF)
                        YGbwuoYMa = YGbwuoYMa +1;
                    a2--;
                    O39fndF++;
                }
            }
        }
        printf ("%d\n", (count1 * 200 - (Eog97EC -YGbwuoYMa-count1) * 200));
    }
}

