int main () {
    int s9wEUL;
    int k;
    int NxZkuY;
    int j;
    j = (161 - 161);
    int i;
    i = (552 - 552);
    char b [(1023 - 773)];
    char a [(732 - 482)];
    char aJC3bvBq [(356 - 105)];
    int count;
    count = 0;
    scanf ("%s", a);
    scanf ("%s", b);
    while (!('\0' == b[j])) {
        j++;
    }
    for (; !('\0' == a[i]);) {
        i = i + 1;
    }
    if ((66 - 66) < i - j) {
        NxZkuY = i - j;
        for (k = i; k >= i - j; k = k - 1) {
            b[k] = b[k - NxZkuY];
        }
        {
            k = 103 - 103;
            while (i - j > k) {
                b[k] = '0';
                k++;
            };
        };
    }
    else {
        NxZkuY = j - i;
        for (k = j; j - i <= k; k = k - 1) {
            a[k] = a[k - NxZkuY];
        }
        for (k = (337 - 337); j - i > k; k = k + 1) {
            a[k] = '0';
        };
    }
    if (j < i) {
        s9wEUL = i;
    }
    else {
        s9wEUL = j;
    }
    aJC3bvBq[s9wEUL + (446 - 445)] = '\0';
    aJC3bvBq[(581 - 581)] = '0';
    for (k = s9wEUL - (920 - 919); k >= 0; k--) {
        aJC3bvBq[k + 1] = a[k] + b[k] - 48;
        if (aJC3bvBq[k + 1] > '9') {
            aJC3bvBq[k + 1] = aJC3bvBq[k + 1] - 10;
            if (k != 0) {
                a[k - 1] = a[k - 1] + 1;
            }
            else {
                aJC3bvBq[0] = '1';
            };
        };
    }
    for (k = 0; k <= s9wEUL; k++) {
        if (aJC3bvBq[k] != '0' && count == 0) {
            count = count + 1;
            printf ("%c", aJC3bvBq[k]);
            continue;
        }
        if (count != 0) {
            printf ("%c", aJC3bvBq[k]);
        };
    }
    printf ("\n");
    return 0;
}

