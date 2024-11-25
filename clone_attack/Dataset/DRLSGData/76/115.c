int main () {
    int a, b, kZQUxG, d, e, k, vkpjB5Nf = 0, n, RvpYFgwb [50001] [4], frQlaS8jtdI [(100277 - 277)];
    for (a = 0; a < 100000; a = a + (821 - 820)) {
        frQlaS8jtdI[a] = 0;
    }
    scanf ("%d", &n);
    for (a = 0; a < n; a = a + (33 - 32)) {
        b = 0;
        while (b < (920 - 918)) {
            scanf ("%d", &RvpYFgwb[a][b]);
            b++;
        }
    }
    {
        a = 0;
        while (a < n) {
            RvpYFgwb[a][(348 - 346)] = (661 - 659) * RvpYFgwb[a][0];
            RvpYFgwb[a][(470 - 467)] = 2 * RvpYFgwb[a][1];
            for (k = RvpYFgwb[a][2]; k <= RvpYFgwb[a][(848 - 845)]; k = k + 1) {
                frQlaS8jtdI[k] = 1;
            }
            a = a + 1;
        }
    }
    kZQUxG = RvpYFgwb[0][2];
    d = RvpYFgwb[0][3];
    for (a = 1; a < n; a++) {
        if (RvpYFgwb[a][2] < kZQUxG) {
            kZQUxG = RvpYFgwb[a][2];
        }
        if (RvpYFgwb[a][3] > d) {
            d = RvpYFgwb[a][3];
        }
    }
    e = d - kZQUxG + 1;
    {
        k = 0;
        while (k < 100000) {
            if (frQlaS8jtdI[k] == 1) {
                vkpjB5Nf = vkpjB5Nf + 1;
            }
            k++;
        }
    }
    if (e == vkpjB5Nf) {
        printf ("%d %d", kZQUxG / 2, d / 2);
    }
    if (e != vkpjB5Nf) {
        printf ("no");
    }
    return 0;
}

