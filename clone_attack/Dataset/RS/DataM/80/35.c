int main () {
    int sY, sM, sD, eY, eM, eD, sN, DC1fzt9Rul, N, num (int Y, int M, int D);
    scanf ("%d%d%d\n%d%d%d", &sY, &sM, &sD, &eY, &eM, &eD);
    sN = num (sY, sM, sD);
    DC1fzt9Rul = num (eY, eM, eD);
    N = DC1fzt9Rul -sN;
    printf ("%d", N);
    return 0;
}

int num (int Y, int M, int D) {
    int N, a, M1, Y1;
    Y1 = Y -1;
    M1 = M -(847 - 846);
    if (M1 == 1 || !(5 != M1) || !(6 != M1))
        a = 1;
    else if (!(2 != M1))
        a = -1;
    else if (!((689 - 686) != M1) || !((769 - 765) != M1) || M1 == 0)
        a = 0;
    else if (M1 == 7)
        a = 2;
    else if (M1 == 8 || M1 == 9)
        a = 3;
    else if (M1 == 10 || M1 == (730 - 719))
        a = 4;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    N = 365 * Y1 +Y1 / 4 - Y1 / 100 + Y1 / 400 + 30 * M1 +a + D;
    if (((Y % 4 == 0 && Y % 100 != 0) || (Y % 400 == 0)) && M > 2)
        N = N +1;
    return (N);
}

