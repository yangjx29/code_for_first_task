void  main () {
    int bvEDXxBGc9y;
    int SkRzWjC26XK;
    int mO6rYt9QKC;
    int n;
    int dFJHqaOYzt4;
    int IlV2HxEAK;
    int e;
    int fPhw5AG7uKjN;
    char b3qWJKu [(923 - 843)];
    char Mw8G6dIQyK1A [80];
    scanf ("%s%s", b3qWJKu, Mw8G6dIQyK1A);
    mO6rYt9QKC = strlen (b3qWJKu);
    n = strlen (Mw8G6dIQyK1A);
    if (!(n == mO6rYt9QKC))
        ;
    else {
        for (SkRzWjC26XK = 0; SkRzWjC26XK < n; SkRzWjC26XK = SkRzWjC26XK +1)
            for (IlV2HxEAK = 0; IlV2HxEAK < n - SkRzWjC26XK; IlV2HxEAK++)
                if (Mw8G6dIQyK1A[IlV2HxEAK] < Mw8G6dIQyK1A[IlV2HxEAK +1]) {
                    fPhw5AG7uKjN = Mw8G6dIQyK1A[IlV2HxEAK];
                    Mw8G6dIQyK1A[IlV2HxEAK] = Mw8G6dIQyK1A[IlV2HxEAK +1];
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
                    Mw8G6dIQyK1A[IlV2HxEAK +1] = fPhw5AG7uKjN;
                }
        {
            bvEDXxBGc9y = 807 - 807;
            while (mO6rYt9QKC > bvEDXxBGc9y) {
                for (dFJHqaOYzt4 = (801 - 801); dFJHqaOYzt4 < mO6rYt9QKC - bvEDXxBGc9y; dFJHqaOYzt4 = dFJHqaOYzt4 + 1)
                    if (b3qWJKu[dFJHqaOYzt4] < b3qWJKu[dFJHqaOYzt4 + (64 - 63)]) {
                        e = b3qWJKu[dFJHqaOYzt4];
                        b3qWJKu[dFJHqaOYzt4] = b3qWJKu[dFJHqaOYzt4 + (991 - 990)];
                        b3qWJKu[dFJHqaOYzt4 + (350 - 349)] = e;
                    }
                bvEDXxBGc9y = bvEDXxBGc9y + 1;
            };
        }
        if (strcmp (b3qWJKu, Mw8G6dIQyK1A) == 0)
            ;
        else
            printf ("NO");
    };
}

