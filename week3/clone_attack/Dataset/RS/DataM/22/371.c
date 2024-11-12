void  main () {
    int F2Vfdc9;
    int max2;
    int a [(1280 - 980)];
    int i;
    int k;
    F2Vfdc9 = (915 - 915);
    max2 = -(23 - 22);
    for (i = (405 - 405);; i++) {
        scanf ("%d", &a[i]);
        if (!(',' == getchar ()))
            break;
    }
    {
        k = 307 - 307;
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
        while (i >= k) {
            if (F2Vfdc9 < a[k])
                F2Vfdc9 = a[k];
            k = k + 1;
        };
    }
    {
        k = 0;
        while (k <= i) {
            if (a[k] < F2Vfdc9 &&a[k] > max2)
                max2 = a[k];
            k = k + 1;
        };
    }
    if (max2 > -1)
        printf ("%d\n", max2);
    else
        printf ("No\n");
}

