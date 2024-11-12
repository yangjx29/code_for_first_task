int main () {
    int SAx4CS, PRpyxI0gztKA;
    int *rHQhP2J6rMVu;
    int n;
    SAx4CS = 0;
    scanf ("%d", &n);
    rHQhP2J6rMVu = (int *) malloc (sizeof (int) * n);
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
    PRpyxI0gztKA = n;
    for (; PRpyxI0gztKA = PRpyxI0gztKA -1;) {
        scanf ("%d", &rHQhP2J6rMVu[SAx4CS]);
        SAx4CS++;
    }
    {
        SAx4CS = 0;
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
        while (SAx4CS <= (n - 1) / 2) {
            PRpyxI0gztKA = rHQhP2J6rMVu[SAx4CS];
            rHQhP2J6rMVu[SAx4CS] = rHQhP2J6rMVu[n - 1 - SAx4CS];
            rHQhP2J6rMVu[n - 1 - SAx4CS] = PRpyxI0gztKA;
            SAx4CS++;
        };
    }
    {
        SAx4CS = 0;
        while (SAx4CS < n) {
            if (SAx4CS != 0)
                printf (" ");
            printf ("%d", rHQhP2J6rMVu[SAx4CS]);
            SAx4CS++;
        };
    }
    printf ("\n");
    return 0;
}

