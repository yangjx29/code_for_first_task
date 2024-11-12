void  main () {
    int x;
    int y;
    int PawXf8N, k, i, j, a = 0, b, s1, s2;
    scanf ("%d%d", &PawXf8N, &k);
    for (i = (500 - 499); !(0 != a); i = i + 1) {
        x = PawXf8N *i + k;
        {
            j = 1;
            while (PawXf8N -1 >= j) {
                b = x;
                s2 = PawXf8N *b;
                y = (PawXf8N *x) / (PawXf8N -1) + k;
                x = y;
                s1 = (y - k) * (PawXf8N -1);
                if (s1 != s2)
                    break;
                j++;
            };
        }
        if (s1 != s2)
            continue;
        a = 1;
    }
    printf ("%d\n", y);
}

