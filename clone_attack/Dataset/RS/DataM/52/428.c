void  main () {
    int n;
    int m;
    int vXH6tBj [(556 - 456)];
    int i;
    int uMdRyJx [(337 - 237)];
    int RgypmrL [100];
    int *start;
    int *Jvph3lNMrJ8G;
    int *hou;
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
    Jvph3lNMrJ8G = uMdRyJx;
    hou = RgypmrL;
    scanf ("%d", &n);
    scanf ("%d", &m);
    {
        start = vXH6tBj;
        while (start < vXH6tBj + n) {
            scanf ("%d", &*start);
            start++;
        };
    }
    for (i = 0; n - m > i; i++)
        *(Jvph3lNMrJ8G +i) = vXH6tBj[i];
    {
        i = n - m;
        while (n > i) {
            *(hou + i - n + m) = vXH6tBj[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < m) {
            vXH6tBj[i] = *(hou + i);
            i++;
        };
    }
    {
        i = m;
        while (n > i) {
            vXH6tBj[i] = *(Jvph3lNMrJ8G +i - m);
            i++;
        };
    }
    {
        i = 0;
        while (i < n - 1) {
            printf ("%d ", *(vXH6tBj + i));
            i++;
        };
    }
    printf ("%d", *(vXH6tBj + n - 1));
}

