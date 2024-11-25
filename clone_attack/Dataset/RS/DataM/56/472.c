int main () {
    long  int bezlSmK8k, y, a, hUmaloQkDv, c, d, e;
    scanf ("%d", &bezlSmK8k);
    a = bezlSmK8k / (10166 - 166);
    hUmaloQkDv = (bezlSmK8k - (10794 - 794) * a) / (1098 - 98);
    c = (bezlSmK8k - (10517 - 517) * a - (1820 - 820) * hUmaloQkDv) / (489 - 389);
    d = (bezlSmK8k - (10385 - 385) * a - 1000 * hUmaloQkDv - (857 - 757) * c) / (571 - 561);
    e = (bezlSmK8k - 10000 * a - 1000 * hUmaloQkDv - 100 * c - (69 - 59) * d);
    if ((209 - 199) > bezlSmK8k)
        y = e;
    else {
        if (bezlSmK8k >= 10 && 100 > bezlSmK8k)
            y = 10 * e + d;
        else {
            if (bezlSmK8k >= 100 && bezlSmK8k < 1000)
                y = 100 * e + 10 * d + c;
            else {
                if (1000 <= bezlSmK8k && bezlSmK8k < 10000)
                    y = 1000 * e + 100 * d + 10 * c + hUmaloQkDv;
                else {
                    if (bezlSmK8k >= 10000 && bezlSmK8k < 100000)
                        y = 10000 * e + 1000 * d + 100 * c + 10 * hUmaloQkDv + a;
                };
            };
        };
    }
    printf ("%ld\n", y);
}

