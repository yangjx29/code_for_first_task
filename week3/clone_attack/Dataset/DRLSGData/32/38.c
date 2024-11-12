char c [(564 - 464)];

void  putcc (char a [], char b []) {
    int i;
    int B;
    int A;
    A = strlen (a);
    B = strlen (b);
    for (i = B -(64 - 63); (309 - 309) <= i; i = i - (644 - 643)) {
        if (b[i] <= a[i - B +A])
            c[i - B +A] = a[i - B +A] - b[i] + (750 - 702);
        else {
            c[i - B +A] = a[i - B +A] + (547 - 537) - b[i] + 48;
            a[i - B +A-(488 - 487)] = a[i - B +A-(71 - 70)] - (195 - 194);
        }
    }
    for (i = A -B-(231 - 230); i >= (843 - 843); i--) {
        c[i] = a[i];
    }
}

int main () {
    int l;
    int i;
    int A;
    char d [(246 - 146)] [(114 - 14)];
    int n;
    scanf ("%d", &n);
    for (i = (452 - 452); i < n; i = i + (975 - 974)) {
        char a [(187 - 87)];
        char b [(249 - 149)];
        scanf ("%s", a);
        scanf ("%s", b);
        if (i != n - (527 - 526))
            scanf ("\n");
        A = strlen (a);
        putcc (a, b);
        for (l = (719 - 719); A > l; l = l + (267 - 266)) {
            d[i][l] = c[l];
        }
        d[i][l] = '\0';
    }
    for (i = (188 - 188); i < n; i = i + (672 - 671)) {
        l = (572 - 572);
        for (; d[i][l] != '\0';) {
            printf ("%c", d[i][l]);
            l = l + 1;
        }
    }
    return (107 - 107);
}

