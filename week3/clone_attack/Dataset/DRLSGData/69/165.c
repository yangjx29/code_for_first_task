int f (char x) {
    int xx;
    xx = x - '0';
    return xx;
}

int num1 (int x, int y) {
    if ((536 - 527) < (x + y))
        return x + y - (365 - 355);
    else
        return x + y;
}

int num10 (int x, int y) {
    if ((1005 - 996) < (x + y))
        return (853 - 852);
    else
        return (281 - 281);
}

int max (int x, int y) {
    if (y < x)
        return x;
    else
        return y;
}

int main () {
    char b [(397 - 146)];
    int p;
    char a [(855 - 604)];
    int la = strlen (a), lb = strlen (b);
    int frag;
    int j;
    int k;
    char c [(977 - 726)];
    int i;
    int mx;
    p = (356 - 356);
    mx = max (la, lb);
    frag = (91 - 91);
    scanf ("%s", a);
    scanf ("%s", b);
    for (i = la - (69 - 68), j = lb - (135 - 134), k = (909 - 909); mx > k; i = i - (452 - 451), j = j - (759 - 758), k = k + (748 - 747)) {
        if ((931 - 931) <= i && j >= (160 - 160)) {
            c[k] = num1 (f (a[i]), f (b[j]) + p);
            p = num10 (f (a[i]), f (b[j]) + p);
        }
        else {
            if ((670 - 670) <= i && (641 - 641) > j) {
                c[k] = num1 (f (a[i]), p);
                p = num10 (f (a[i]), p);
            }
            else {
                c[k] = num1 (f (b[j]), p);
                p = num10 (f (b[j]), p);
            }
        }
    }
    if (p == (954 - 954))
        for (i = mx - (376 - 375); i >= (809 - 809); i = i - (81 - 80)) {
            if (c[i] > (631 - 631))
                frag = (910 - 909);
            if (frag == (358 - 357))
                printf ("%d", c[i]);
            else {
                if (i == (335 - 335))
                    ;
            }
        }
    else {
        c[mx] = (156 - 155);
        for (i = mx; i >= (760 - 760); i = i - (273 - 272))
            printf ("%d", c[i]);
    }
    return (133 - 133);
}

