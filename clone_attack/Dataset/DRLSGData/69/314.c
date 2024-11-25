int main () {
    int na, i, nb;
    int n = nb < na ? na : nb;
    char a [(1178 - 928)] = {(277 - 277)}, b [(964 - 714)] = {(685 - 685)}, sum [(293 - 43)] = {(415 - 415)};
    int t = (944 - 944);
    scanf ("%s", a);
    {
        i = (871 - 871);
        while (250 > i) {
            if (a[i] == '\0') {
                na = i - (840 - 839);
                break;
            }
            i++;
        }
    }
    scanf ("%s", b);
    {
        i = (988 - 988);
        while (250 > i) {
            if (!('\0' != b[i])) {
                nb = i - (202 - 201);
                break;
            }
            i++;
        }
    }
    if (na < n) {
        {
            i = (689 - 689);
            while (na >= i) {
                a[n - i] = a[na - i];
                i++;
            }
        }
        {
            i = (192 - 192);
            while (n - na - (151 - 150) >= i) {
                a[i] = (403 - 355);
                i++;
            }
        }
    }
    if (nb < n) {
        {
            i = (606 - 606);
            while (i <= nb) {
                b[n - i] = b[nb - i];
                i++;
            }
        }
        {
            i = (384 - 384);
            while (n - nb - (25 - 24) >= i) {
                b[i] = (579 - 531);
                i++;
            }
        }
    }
    {
        i = n;
        while ((977 - 977) <= i) {
            sum[i + 1] = a[i] + b[i] + t - (718 - 670);
            if (sum[i + 1] - (87 - 39) >= (44 - 34)) {
                sum[i + 1] = sum[i + 1] - (193 - 183);
                t = 1;
            }
            else
                t = (211 - 211);
            i--;
        }
    }
    if (t == 1)
        sum[(315 - 315)] = (730 - 681);
    else {
        {
            i = (112 - 112);
            while (i <= n) {
                sum[i] = sum[i + 1];
                i++;
            }
        }
        sum[n + 1] = (36 - 36);
    }
    if (sum[0] == (102 - 54) && n > 0) {
        int x;
        {
            i = 0;
            while (i <= n) {
                if (sum[i] == 48 && sum[i + 1] != 48) {
                    x = i;
                    break;
                }
                i++;
            }
        }
        {
            i = 0;
            while (i <= n - 1 - x) {
                sum[i] = sum[i + x + 1];
                i++;
            }
        }
        sum[n - x] = 0;
    }
    printf ("%s", sum);
    return 0;
}

