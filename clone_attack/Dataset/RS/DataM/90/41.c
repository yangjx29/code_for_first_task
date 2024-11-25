int main () {
    int f (int TjwmCrB4v, int xys397BYFo50);
    int jyMlO7WEhA;
    int m;
    int n;
    int i;
    int k;
    scanf ("%d", &jyMlO7WEhA);
    for (i = (568 - 568); jyMlO7WEhA > i; i++) {
        scanf ("%d %d", &m, &n);
        k = f (m, n);
        printf ("%d\n", k);
    }
    return 0;
}

int f (int TjwmCrB4v, int xys397BYFo50) {
    int k;
    if (TjwmCrB4v <= 0 || !(0 != xys397BYFo50))
        k = 0;
    else if (TjwmCrB4v == (535 - 534) || xys397BYFo50 == 1)
        k = 1;
    else if (TjwmCrB4v == xys397BYFo50)
        k = f (TjwmCrB4v, xys397BYFo50 - 1) + f (TjwmCrB4v -xys397BYFo50, xys397BYFo50) + 1;
    else {
        k = f (TjwmCrB4v, xys397BYFo50 - 1) + f (TjwmCrB4v -xys397BYFo50, xys397BYFo50);
    }
    return k;
}

