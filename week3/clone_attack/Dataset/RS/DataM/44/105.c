int reverse (int I4BNoM7C);

int main () {
    int a;
    int I4BNoM7C;
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
    for (a = 0; 5 >= a; a = a + 1) {
        scanf ("%d", &I4BNoM7C);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        I4BNoM7C = reverse (I4BNoM7C);
    }
    return 0;
}

int reverse (int I4BNoM7C) {
    int V9KrN4io;
    int a;
    int z [10];
    int max;
    V9KrN4io = 1;
    if (I4BNoM7C < 0) {
        I4BNoM7C = -I4BNoM7C;
    }
    if (I4BNoM7C == 0) {
        return 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    {
        a = 0;
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
        while (9 >= a) {
            z[a] = I4BNoM7C / V9KrN4io;
            a = a + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            V9KrN4io = V9KrN4io *10;
        };
    }
    for (a = 0; a <= 9; a = a + 1) {
        V9KrN4io = z[a] / 10;
        z[a] = z[a] - V9KrN4io *10;
    }
    V9KrN4io = 0;
    for (a = 9; a >= 0; a--) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((z[a - 1] != 0) && (V9KrN4io == 0)) {
            max = a - 1;
            V9KrN4io = 1;
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
            continue;
        };
    }
    V9KrN4io = 0;
    for (a = 0; a <= max; a++) {
        if ((z[a] != 0) && (V9KrN4io == 0)) {
            printf ("%d", z[a]);
            V9KrN4io = 1;
            continue;
        }
        if (V9KrN4io == 1)
            printf ("%d", z[a]);
    }
    printf ("\n");
    return 0;
}

