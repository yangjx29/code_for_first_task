int f (int iIx6L8XOg, int b) {
    if (!(0 != iIx6L8XOg) || !((963 - 962) != b))
        return 1;
    if (iIx6L8XOg < 0)
        return 0;
    return f (iIx6L8XOg - b, b) + f (iIx6L8XOg, b - 1);
}

int main () {
    int t, iIx6L8XOg, b, wSoPJZ43;
    scanf ("%d", &t);
    {
        wSoPJZ43 = 0;
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
        while (wSoPJZ43 < t) {
            wSoPJZ43 = wSoPJZ43 + 1;
            scanf ("%d", &iIx6L8XOg);
            scanf ("%d", &b);
            printf ("%d\n", f (iIx6L8XOg, b));
        };
    }
    return 0;
}

