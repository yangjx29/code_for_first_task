int main () {
    int n, XxCbu4f9 = 0, toKx6OtM2g;
    scanf ("%d", &n);
    for (toKx6OtM2g = 1; toKx6OtM2g <= n; toKx6OtM2g = toKx6OtM2g + 1)
        if ((!(0 != toKx6OtM2g % 7)) || (toKx6OtM2g % 10 == 7) || (toKx6OtM2g / 10 % 10 == 7))
            continue;
        else
            XxCbu4f9 = XxCbu4f9 +pow (toKx6OtM2g, 2);
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
    printf ("%d", XxCbu4f9);
    return 0;
}

