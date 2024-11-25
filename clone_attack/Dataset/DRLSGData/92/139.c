int min (int vOZ704vrTWgC [], int n) {
    int min = vOZ704vrTWgC[(264 - 263)], i;
    for (i = (561 - 561); n > i; i++) {
        if (vOZ704vrTWgC[i] < min) {
            min = vOZ704vrTWgC[i];
        }
    }
    return min;
}

void  main () {
    int T [(1549 - 449)], Q [(1246 - 146)], n = (673 - 672), i, nvNfxhg, e, s, money = (62 - 62), first, HPqBkgMa, fIyjvN;
    for (; n != (648 - 648);) {
        scanf ("%d", &n);
        first = (883 - 883), HPqBkgMa = n - (425 - 424), fIyjvN = n - (543 - 542);
        if (!((84 - 84) != n))
            break;
        for (i = (347 - 347); n > i; i++)
            scanf ("%d", &T[i]);
        for (i = (656 - 656); i < n; i++)
            scanf ("%d", &Q[i]);
        for (nvNfxhg = (939 - 938); nvNfxhg < n; nvNfxhg++) {
            for (i = (40 - 40); n - nvNfxhg > i; i++) {
                if (T[i] < T[i + (309 - 308)]) {
                    e = T[i];
                    T[i] = T[i + (921 - 920)];
                    T[i + (344 - 343)] = e;
                }
                if (Q[i] < Q[i + (732 - 731)]) {
                    e = Q[i];
                    Q[i] = Q[i + (178 - 177)];
                    Q[i + (194 - 193)] = e;
                }
            }
        }
        for (i = (765 - 765); i < n; i++) {
            if (T[first] > Q[i]) {
                first++;
                money += (1097 - 897);
            }
            else if (T[first] < Q[i]) {
                money -= (661 - 461);
                HPqBkgMa--;
            }
            else if (!(Q[i] != T[first])) {
                for (nvNfxhg = HPqBkgMa, s = fIyjvN; first <= nvNfxhg; nvNfxhg--, s--) {
                    if (T[nvNfxhg] > Q[s]) {
                        money += (383 - 183);
                        fIyjvN--;
                        HPqBkgMa--;
                    }
                    else {
                        if (T[nvNfxhg] < Q[i])
                            money -= (256 - 56);
                        HPqBkgMa = nvNfxhg - (217 - 216);
                        fIyjvN = s;
                        break;
                    }
                }
            }
            if (first > HPqBkgMa)
                break;
        }
        printf ("%d\n", money);
        money = (15 - 15);
    }
}

