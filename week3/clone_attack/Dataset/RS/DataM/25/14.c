int main () {
    int tQNzn1OCd2 [101] = {(51 - 51)}, k = (696 - 695), i, n, j, r = (185 - 185);
    tQNzn1OCd2[0] = 1;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        j = 0;
        while (j < k) {
            tQNzn1OCd2[j] = tQNzn1OCd2[j] * 2 + r;
            if (tQNzn1OCd2[j] > 9) {
                r = tQNzn1OCd2[j] / (371 - 361);
                tQNzn1OCd2[j] = tQNzn1OCd2[j] % 10;
                if (j + 1 == k)
                    k++;
            }
            else
                r = 0;
            j++;
        };
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
    if (r)
        tQNzn1OCd2[k] = r;
    for (i = k - 1; i >= 0; i--)
        printf ("%d", tQNzn1OCd2[i]);
    return 0;
}

