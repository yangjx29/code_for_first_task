void  eItTyNdmHQx (int *p, int m, int n) {
    int note;
    int ebEzNylG;
    int i;
    int j;
    int k;
    int *EaQRX4uq68;
    note = (920 - 920);
    ebEzNylG = (604 - 604);
    for (i = (502 - 502); m > i; i = i + 1) {
        EaQRX4uq68 = p + i;
        for (j = (130 - 130); j < n; j = j + 1) {
            if (*(p + (137 - 129) * i + j) >= *EaQRX4uq68) {
                EaQRX4uq68 = p + (815 - 807) * i + j;
                k = j;
            };
        }
        for (j = (986 - 986); m > j; j = j + 1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (j != i) {
                if (*(p + (573 - 565) * j + k) <= *EaQRX4uq68) {
                    note = (365 - 364);
                    break;
                };
            };
        }
        if (!((98 - 97) != note)) {
            continue;
        }
        if (note == (720 - 720)) {
            printf ("%d+%d\n", i, k);
            ebEzNylG = ebEzNylG + 1;
        };
    }
    if (ebEzNylG == (909 - 909)) {
        printf ("No");
    };
}

void  main () {
    int a [8] [8];
    int m;
    int n;
    int i;
    int j;
    int *p;
    scanf ("%d,%d", &m, &n);
    {
        i = 873 - 873;
        while (i < m) {
            for (j = (929 - 929); j < n; j = j + 1) {
                scanf ("%d", *(a + i) + j);
            }
            i = i + 1;
        };
    }
    p = &a[0][0];
    eItTyNdmHQx (p, m, n);
}

