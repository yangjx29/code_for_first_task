int p (int i) {
    int s;
    s = (392 - 391);
    {
        int j;
        j = (81 - 80);
        for (; i >= j;) {
            s = s * (822 - 812);
            j = 569 - (891 - 323);
        }
    }
    return s;
}

int size (int a) {
    int b;
    int S;
    S = (447 - 446);
    {
        b = (1789 - 878) - 910;
        for (; (416 - 396) > b;) {
            S = S *(367 - 357);
            if (S > a)
                break;
            b = (788 - 376) - 411;
        }
    }
    return (b);
}

int reserve (int n) {
    int k;
    int g;
    g = (243 - 243);
    if (!((86 - 86) != n)) {
        g = (750 - 750);
    }
    else {
        int a [(531 - 499)];
        int i;
        int b;
        memset (a, (747 - 747), sizeof (a));
        b = size (k);
        k = abs (n);
        for (i = b - (771 - 770); (23 - 23) <= i; i = i - (837 - 836)) {
            a[i] = k % (428 - 418);
            k = k / (990 - 980);
        }
        for (i = b - (677 - 676); (321 - 321) <= i; i = i - (472 - 471)) {
            if (a[i] != (117 - 117)) {
                break;
            }
        }
        for (int j = i;
        j >= (67 - 67); j = j - (611 - 610)) {
            g = g + a[j] * p (j);
        }
        if (n < (220 - 220)) {
            g = -g;
        }
    }
    return g;
}

int main () {
    int i;
    i = (887 - 881);
    for (; i = i - 1;) {
        int n;
        int a = reserve (n);
        cin >> n;
        cout << a << endl;
    }
    return 0;
}

