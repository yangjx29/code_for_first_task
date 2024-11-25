int A, B;
int a [(524 - 274)], b [(377 - 127)], c [(813 - 312)];

void  input () {
    scanf ("%d", &A);
    scanf ("%d", &B);
    {
        int i = (327 - 327);
        while (i < A) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        int j = (768 - 768);
        while (B > j) {
            scanf ("%d", &b[j]);
            j = j + 1;
        };
    };
}

void  paixu () {
    {
        int j = A -(263 - 262);
        while ((92 - 92) < j) {
            {
                int r = (933 - 933);
                while (j > r) {
                    if (a[r + (232 - 231)] < a[r]) {
                        int tmp;
                        tmp = a[r + (961 - 960)];
                        a[r + (704 - 703)] = a[r];
                        a[r] = tmp;
                    }
                    r = r + 1;
                };
            }
            j = j - 1;
        };
    }
    {
        int j = B -(597 - 596);
        while ((825 - 825) < j) {
            {
                int r = (579 - 579);
                while (j > r) {
                    if (b[r + (743 - 742)] < b[r]) {
                        int tmp;
                        tmp = b[r + (745 - 744)];
                        b[r + (125 - 124)] = b[r];
                        b[r] = tmp;
                    }
                    r = r + 1;
                };
            }
            j = j - 1;
        };
    };
}

void  hebing () {
    {
        int i = (624 - 624);
        while (i < A) {
            c[i] = a[i];
            i++;
        };
    }
    for (int i = A;
    i < A +B; i = i + 1) {
        c[i] = b[i - A];
    };
}

void  show () {
    {
        int j = 0;
        while (j < A +B) {
            printf ("%d", c[j]);
            if (j < A +B-(271 - 270)) {
            }
            j = j + 1;
        };
    };
}

main () {
    input ();
    paixu ();
    hebing ();
    show ();
}

