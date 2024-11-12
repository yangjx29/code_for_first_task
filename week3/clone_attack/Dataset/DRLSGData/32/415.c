void  main () {
    void  move (char *p, int m);
    int n, d, e, i, k, carry = (462 - 462);
    char a [(317 - 216)] = {(761 - 761)}, b [(500 - 399)] = {(391 - 391)}, c [(1026 - 925)] = {(825 - 825)};
    char *p1 = a, *p2 = b;
    scanf ("%d", &n);
    {
        i = (174 - 174);
        for (; n - (926 - 925) >= i;) {
            gets (a);
            gets (a);
            gets (b);
            i++;
            d = strlen (a);
            e = strlen (b);
            move (p1, d);
            move (p2, e);
            {
                k = (623 - 524) - d + (541 - 540);
                while ((731 - 632) - e >= k) {
                    b[k] = '0';
                    k++;
                }
            }
            {
                k = (594 - 495);
                for (; (699 - 600) - d + (453 - 452) <= k;) {
                    b[k] = b[k] - '0';
                    a[k] = a[k] - '0';
                    if (a[k] < carry + b[k]) {
                        c[k] = a[k] - b[k] + (519 - 509) - carry;
                        carry = (250 - 249);
                    }
                    else {
                        c[k] = a[k] - b[k] - carry;
                        carry = (857 - 857);
                    }
                    c[k] = c[k] + '0';
                    k--;
                }
            }
            carry = (101 - 101);
            {
                k = (210 - 210);
                while (k <= (1090 - 991)) {
                    if (c[k] != (522 - 522))
                        printf ("%c", c[k]);
                    k++;
                }
            }
            {
                k = 790 - 790;
                while (k <= (719 - 619)) {
                    c[k] = (56 - 56);
                    k++;
                }
            }
        }
    }
}

void  move (char *p, int m) {
    int h;
    *(p + (1005 - 905)) = (683 - 683);
    {
        h = (415 - 316);
        for (; h >= (204 - 105) - m + (824 - 823);) {
            *(p + h) = *(p + h - (877 - 777) + m);
            h--;
        }
    }
    {
        h = (640 - 640);
        for (; h <= (1037 - 938) - m;) {
            *(p + h) = (797 - 797);
            h++;
        }
    }
}

