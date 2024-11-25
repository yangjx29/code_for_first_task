void  main () {
    int i, j, VfokB34IGYCJ, VGm5WXHF, s;
    int a [50] = {0}, b [50] = {0};
    scanf ("%d%d", &VfokB34IGYCJ, &VGm5WXHF);
    for (i = 0; i < VfokB34IGYCJ; i++) {
        scanf ("%d", &a[i]);
    }
    for (i = 0; VGm5WXHF > i; i++) {
        scanf ("%d", &b[i]);
    }
    {
        i = 0;
        while (i < VfokB34IGYCJ -1) {
            for (j = 0; j < VfokB34IGYCJ -i - 1; j++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (a[j] > a[j + 1]) {
                    s = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = s;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < VGm5WXHF -1) {
            {
                j = 0;
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
                while (j < VGm5WXHF -i - 1) {
                    if (b[j + 1] < b[j]) {
                        s = b[j];
                        b[j] = b[j + 1];
                        b[j + 1] = s;
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < VfokB34IGYCJ) {
            printf ("%d ", a[i]);
            i++;
        };
    }
    printf ("%d", b[0]);
    {
        i = 1;
        while (i < VGm5WXHF) {
            printf (" %d", b[i]);
            i++;
        };
    };
}

