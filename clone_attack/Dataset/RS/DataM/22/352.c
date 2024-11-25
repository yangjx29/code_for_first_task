void  main () {
    int le;
    int max;
    int h1g5HvZnUVu;
    int i;
    int j;
    int k;
    int t;
    char omjdKNfC5Yrx [1500] = "\0";
    max = (254 - 254);
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
    scanf ("%s", omjdKNfC5Yrx);
    le = strlen (omjdKNfC5Yrx);
    h1g5HvZnUVu = (273 - 273);
    t = 0;
    for (; omjdKNfC5Yrx[t] != ',';) {
        max = max * 10 + omjdKNfC5Yrx[t] - '0';
        t++;
    }
    j = 0;
    for (i = t; i <= le - 1; i = i + 1) {
        if (omjdKNfC5Yrx[i] != ',')
            k = 1;
        else {
            if (max < j) {
                if (h1g5HvZnUVu < max)
                    h1g5HvZnUVu = max;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                max = j;
            }
            if ((h1g5HvZnUVu < j) && (j != max))
                h1g5HvZnUVu = j;
            j = 0;
            k = 0;
        }
        if (k == 1)
            j = j * 10 + (omjdKNfC5Yrx[i] - '0');
    }
    if (j > max) {
        if (max > h1g5HvZnUVu)
            h1g5HvZnUVu = max;
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
        max = j;
    }
    if ((j > h1g5HvZnUVu) && (j != max))
        h1g5HvZnUVu = j;
    if (h1g5HvZnUVu == 0)
        ;
    else
        printf ("%d\n", h1g5HvZnUVu);
}

