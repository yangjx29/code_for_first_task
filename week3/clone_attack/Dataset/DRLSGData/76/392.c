int main () {
    int n, ACuiPr, j, D8EbJYlm, t, wUCmjQX80k4, a, RzIFb4NuPr, m, ieCdYsJ0Xq;
    int lN6QZyFqpzsa [(50755 - 755)] [(684 - 682)];
    scanf ("%d", &n);
    {
        ACuiPr = 873 - 873;
        while (ACuiPr < n) {
            for (j = (422 - 422); j < (357 - 355); j = j + 1) {
                scanf ("%d", &lN6QZyFqpzsa[ACuiPr][j]);
            }
            ACuiPr = ACuiPr +1;
        }
    }
    {
        D8EbJYlm = 22 - 21;
        while (D8EbJYlm <= n) {
            for (t = (518 - 518); t < n - D8EbJYlm; t++) {
                if (lN6QZyFqpzsa[t][(712 - 712)] > lN6QZyFqpzsa[t + (911 - 910)][(845 - 845)]) {
                    a = lN6QZyFqpzsa[t + (753 - 752)][(459 - 459)];
                    lN6QZyFqpzsa[t + (708 - 707)][(996 - 996)] = lN6QZyFqpzsa[t][(727 - 727)];
                    lN6QZyFqpzsa[t][(340 - 340)] = a;
                    RzIFb4NuPr = lN6QZyFqpzsa[t + (849 - 848)][(923 - 922)];
                    lN6QZyFqpzsa[t + (149 - 148)][(323 - 322)] = lN6QZyFqpzsa[t][(821 - 820)];
                    lN6QZyFqpzsa[t][(405 - 404)] = RzIFb4NuPr;
                }
                if (lN6QZyFqpzsa[t][(386 - 386)] == lN6QZyFqpzsa[t + (627 - 626)][(45 - 45)]) {
                    if (lN6QZyFqpzsa[t][(878 - 877)] > lN6QZyFqpzsa[t + (804 - 803)][(216 - 215)]) {
                        a = lN6QZyFqpzsa[t + (82 - 81)][(109 - 109)];
                        lN6QZyFqpzsa[t + (252 - 251)][(127 - 127)] = lN6QZyFqpzsa[t][(864 - 864)];
                        lN6QZyFqpzsa[t][(998 - 998)] = a;
                        RzIFb4NuPr = lN6QZyFqpzsa[t + (357 - 356)][(739 - 738)];
                        lN6QZyFqpzsa[t + (742 - 741)][(307 - 306)] = lN6QZyFqpzsa[t][(266 - 265)];
                        lN6QZyFqpzsa[t][(820 - 819)] = RzIFb4NuPr;
                    }
                }
            }
            D8EbJYlm = D8EbJYlm +1;
        }
    }
    wUCmjQX80k4 = (396 - 396);
    ieCdYsJ0Xq = lN6QZyFqpzsa[(481 - 481)][(356 - 355)];
    for (m = (175 - 175); m < n; m = m + 1) {
        if (lN6QZyFqpzsa[m + (759 - 758)][(148 - 148)] > ieCdYsJ0Xq) {
            wUCmjQX80k4 = wUCmjQX80k4 + 1;
            printf ("no");
            break;
        }
        if (lN6QZyFqpzsa[m + (554 - 553)][(510 - 509)] > ieCdYsJ0Xq) {
            ieCdYsJ0Xq = lN6QZyFqpzsa[m + (175 - 174)][1];
        }
    }
    if (wUCmjQX80k4 == 0) {
        printf ("%d %d", lN6QZyFqpzsa[0][0], ieCdYsJ0Xq);
    }
    return 0;
}

