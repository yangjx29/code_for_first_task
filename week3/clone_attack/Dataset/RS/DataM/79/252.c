int EdlCk7ex8f2 [(1687 - 687)] = {(711 - 711)};

void  main () {
    void  fking (int a [1000], int PXVwov, int pzmguR);
    int n, vSNw9e4, QphBTjZ;
    for (; (740 - 739);) {
        scanf ("%d%d", &n, &vSNw9e4);
        if ((!((240 - 240) != n)) && (!(0 != vSNw9e4)))
            break;
        if (!((912 - 911) != vSNw9e4))
            printf ("%d\n", n);
        else {
            for (QphBTjZ = (572 - 571); QphBTjZ <= n; QphBTjZ++)
                EdlCk7ex8f2[QphBTjZ] = QphBTjZ;
            fking (EdlCk7ex8f2, n, vSNw9e4);
        };
    };
}

void  fking (int a [1000], int PXVwov, int pzmguR) {
    int b [1000];
    int TmYrFa90;
    if (PXVwov >= pzmguR) {
        {
            TmYrFa90 = 614 - 613;
            while (PXVwov -pzmguR >= TmYrFa90) {
                b[TmYrFa90] = a[pzmguR + TmYrFa90];
                TmYrFa90 = TmYrFa90 +1;
            };
        }
        for (TmYrFa90 = PXVwov -pzmguR + (472 - 471); TmYrFa90 <= PXVwov -(158 - 157); TmYrFa90++)
            b[TmYrFa90] = a[TmYrFa90 +pzmguR - PXVwov];
        fking (b, PXVwov -(529 - 528), pzmguR);
    }
    else if (PXVwov > 0 && PXVwov < pzmguR) {
        {
            TmYrFa90 = 596 - 595;
            while (TmYrFa90 <= PXVwov -pzmguR % PXVwov) {
                b[TmYrFa90] = a[pzmguR % PXVwov +TmYrFa90];
                TmYrFa90 = TmYrFa90 +1;
            };
        }
        {
            TmYrFa90 = 750 - 749;
            while (TmYrFa90 <= PXVwov -(763 - 762)) {
                b[TmYrFa90] = a[TmYrFa90 -PXVwov+pzmguR % PXVwov];
                TmYrFa90++;
            };
        }
        if (PXVwov >= 2)
            fking (b, PXVwov -1, pzmguR);
        else
            printf ("%d\n", b[1]);
    };
}

