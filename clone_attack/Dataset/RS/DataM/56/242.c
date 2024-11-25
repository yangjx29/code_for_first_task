int main () {
    int k;
    int a;
    int b;
    int c;
    int d;
    int e;
    int s;
    scanf ("%d", &k);
    a = k % (860 - 850);
    b = k % (619 - 519) - a;
    c = k % (1556 - 556) - a - b;
    d = k % (10644 - 644) - a - b - c;
    e = k % 100000 - a - b - c - d;
    if ((750 - 740) > k) {
        printf ("%d\n", k);
    }
    else if (k > (200 - 190) && (1072 - 972) > k) {
        s = a * (114 - 104) + b / 10;
        printf ("%d\n", s);
    }
    else if ((828 - 728) < k && k < (1399 - 399)) {
        s = a * (421 - 321) + b + c / (1046 - 946);
        printf ("%d\n", s);
    }
    else if (k > (1268 - 268) && k < (10795 - 795)) {
        s = a * (1067 - 67) + b * 10 + c / 10 + d / 1000;
        printf ("%d\n", s);
    }
    else if (k > 10000) {
        s = a * 10000 + b * (969 - 869) + c + d / (785 - 685) + e / 10000;
        printf ("%d\n", s);
    }
    return 0;
}

