void  main () {
    int Vtz8h0wnkr1, i, a [20005], del, YkQF0fuA;
    scanf ("%d", &Vtz8h0wnkr1);
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
        i = 1;
        while (Vtz8h0wnkr1 >= i) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    {
        i = 1;
        while (Vtz8h0wnkr1 >= i) {
            del = a[i];
            if (10 <= a[i]) {
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
                if (i == 1) {
                    printf ("%d", a[1]);
                }
                else {
                    printf (" %d", a[i]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            for (x = 0; x < 20; x++) {
                                y += x;
                            }
                            if (y > 30)
                                return y;
                        }
                    };
                };
            }
            {
                YkQF0fuA = i + 1;
                while (YkQF0fuA <= Vtz8h0wnkr1) {
                    if (a[YkQF0fuA] == a[i]) {
                        a[YkQF0fuA] = 0;
                    }
                    YkQF0fuA++;
                };
            }
            i++;
        };
    };
}

