struct   student {
    char sex [7];
    float ElQAJ3gk0B;
};
main () {
    struct   student a [41];
    struct   student aLOUXqoVZc;
    int GfLjvNma3w, j, L6Q73MZ, kRIKq3kTBN4, qghOYZVSb4C = (536 - 536), qmlvBsC4wb = 0;
    int count = 0;
    scanf ("%d", &kRIKq3kTBN4);
    for (GfLjvNma3w = 0; kRIKq3kTBN4 > GfLjvNma3w; GfLjvNma3w = GfLjvNma3w +1) {
        scanf ("%s%f", a[GfLjvNma3w].sex, &a[GfLjvNma3w].ElQAJ3gk0B);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
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
    {
        GfLjvNma3w = 0;
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
        while (kRIKq3kTBN4 > GfLjvNma3w) {
            if (!(0 != strcmp (a[GfLjvNma3w].sex, "male")))
                qghOYZVSb4C = qghOYZVSb4C + 1;
            else
                qmlvBsC4wb = qmlvBsC4wb + 1;
            GfLjvNma3w = GfLjvNma3w +1;
        };
    }
    for (GfLjvNma3w = 0; kRIKq3kTBN4 - 1 > GfLjvNma3w; GfLjvNma3w = GfLjvNma3w +1) {
        j = GfLjvNma3w +1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j < kRIKq3kTBN4) {
            if (a[GfLjvNma3w].ElQAJ3gk0B > a[j].ElQAJ3gk0B) {
                aLOUXqoVZc = a[GfLjvNma3w];
                a[GfLjvNma3w] = a[j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                a[j] = aLOUXqoVZc;
            }
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
            j = j + 1;
        };
    }
    {
        GfLjvNma3w = 0;
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
        while (GfLjvNma3w < kRIKq3kTBN4) {
            if (strcmp (a[GfLjvNma3w].sex, "male") == 0)
                printf ("%.2f ", a[GfLjvNma3w].ElQAJ3gk0B);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            GfLjvNma3w = GfLjvNma3w +1;
        };
    }
    for (GfLjvNma3w = kRIKq3kTBN4 - 1; GfLjvNma3w >= 0; GfLjvNma3w = GfLjvNma3w -1) {
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
        if (strcmp (a[GfLjvNma3w].sex, "female") == 0) {
            if (count != qmlvBsC4wb - 1) {
                count = count + 1;
                printf ("%.2f ", a[GfLjvNma3w].ElQAJ3gk0B);
            }
            else
                printf ("%.2f", a[GfLjvNma3w].ElQAJ3gk0B);
        };
    }
    getchar ();
    getchar ();
}

