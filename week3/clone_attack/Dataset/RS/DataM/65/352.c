int main () {
    int F54OE3, i, LLWzXhuk, UeStvd0No5F [201], b [201];
    LLWzXhuk = 0;
    scanf ("%d", &F54OE3);
    for (i = 0; F54OE3 > i; i = i + 1) {
        scanf ("%d%d", &UeStvd0No5F[i], &b[i]);
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
    for (i = 0; F54OE3 > i; i++) {
        if ((!(0 != UeStvd0No5F[i]) && !(1 != b[i])) || (UeStvd0No5F[i] == 1 && !(2 != b[i])) || (UeStvd0No5F[i] == 2 && b[i] == 0)) {
            LLWzXhuk = LLWzXhuk +1;
        }
        else {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (UeStvd0No5F[i] == b[i]) {
                LLWzXhuk = LLWzXhuk +0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            else {
                LLWzXhuk = LLWzXhuk -1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        };
    }
    if (LLWzXhuk > 0) {
        printf ("A");
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
    }
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (LLWzXhuk == 0) {
            printf ("Tie");
        }
        else {
            printf ("B");
        };
    }
    return 0;
}

