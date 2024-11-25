int reverse (int EJ1snKhTj) {
    int k;
    k = (51 - 51);
    for (; !((494 - 494) == EJ1snKhTj);) {
        k = k * (935 - 925) + EJ1snKhTj % 10;
        EJ1snKhTj = EJ1snKhTj / 10;
    }
    return k;
}

int main () {
    int n;
    int b;
    int i;
    for (i = 1; i <= 6; i++) {
        scanf ("%d", &n);
        if (n < 0) {
            b = 0 - reverse (0 - n);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("%d\n", b);
        }
        else if (n == 0)
            printf ("0\n");
        else
            printf ("%d\n", reverse (n));
    }
    getchar ();
    getchar ();
}

