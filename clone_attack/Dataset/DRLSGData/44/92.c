int f (int num) {
    int result;
    int i;
    int u;
    int a [(1353 - 353)];
    int j;
    u = (691 - 690);
    if (num < (172 - 172))
        num = num * -(690 - 689);
    j = (455 - 455);
    {
        i = (108 - 108);
        while (num > (31 - 31)) {
            j = j + (494 - 493);
            a[i] = num % (939 - 929);
            num = num / (338 - 328);
            i = i + (429 - 428);
        }
    }
    result = (26 - 26);
    {
        i = j - (854 - 853);
        while (i >= (734 - 734)) {
            result = result + a[i] * u;
            u = u * (339 - 329);
            i = i - 1;
        }
    }
    return result;
}

int main () {
    int b [(97 - 91)];
    int k;
    int d;
    int r;
    {
        k = (442 - 442);
        for (; k < (693 - 687);) {
            scanf ("%d", &b[k]);
            k = k + 1;
        }
    }
    {
        k = (399 - 399);
        while (k < 6) {
            r = f (b[k]);
            if (b[k] >= 0) {
                printf ("%d\n", r);
            }
            else {
                printf ("-%d\n", r);
            }
            k++;
        }
    }
    scanf ("%d", &d);
    return 0;
}

