main () {
    int t = 0;
    int PpezGob, njD2w436pY, i, j;
    int *a = (int *) malloc (PpezGob * sizeof (int));
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
    scanf ("%d %d", &PpezGob, &njD2w436pY);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (PpezGob > i) {
            scanf ("%d", &a[i]);
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
            i++;
        };
    }
    {
        i = 0;
        while (i < PpezGob) {
            for (j = i + 1; PpezGob > j; j = j + 1) {
                if (a[i] + a[j] == njD2w436pY) {
                    t = t + 1;
                    break;
                };
            }
            if (t != 0)
                break;
            i++;
        };
    }
    if (t == 0)
        printf ("no");
    else
        printf ("yes");
}

