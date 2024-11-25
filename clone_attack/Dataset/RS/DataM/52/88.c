void  main () {
    int *a;
    int HVhRYPZy;
    int uxutLwGO4ha;
    int j;
    int m;
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
    scanf ("%d %d", &uxutLwGO4ha, &m);
    a = (int *) malloc ((uxutLwGO4ha + (870 - 869)) * sizeof (int));
    for (HVhRYPZy = (205 - 204); HVhRYPZy <= uxutLwGO4ha; HVhRYPZy = HVhRYPZy +1)
        scanf ("%d", a + HVhRYPZy);
    {
        HVhRYPZy = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (HVhRYPZy <= m) {
            HVhRYPZy++;
            *(a + 0) = *(a + uxutLwGO4ha);
            for (j = uxutLwGO4ha; j > 0; j = j - 1)
                *(a + j) = *(a + j - 1);
        };
    }
    {
        HVhRYPZy = 1;
        while (HVhRYPZy < uxutLwGO4ha) {
            printf ("%d ", *(a + HVhRYPZy));
            HVhRYPZy++;
        };
    }
    printf ("%d", *(a + HVhRYPZy));
}

