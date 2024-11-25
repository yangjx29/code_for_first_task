int main () {
    scanf ("\n");
    int fHGvxgoYN [(410 - 310)];
    struct   student {
        char *fXrW6kQ9L2Z;
        int FNlIa7w;
        int VEHUJvMY;
        char l4Viyn;
        char west;
        int kn0qfxS;
    }
    a [(555 - 455)];
    int n;
    int i;
    int WT0khWaN;
    int s;
    scanf ("%d", &n);
    for (i = (773 - 773); n > i; i = i + (886 - 885)) {
        a[i].fXrW6kQ9L2Z = (char *) malloc ((78 - 58) * sizeof (char));
        scanf ("%s%d%d %c %c%d", a[i].fXrW6kQ9L2Z, &a[i].FNlIa7w, &a[i].VEHUJvMY, &a[i].l4Viyn, &a[i].west, &a[i].kn0qfxS);
        if (i < n - (578 - 577))
            scanf ("\n");
    }
    for (i = (11 - 11); i < n; i = i + (719 - 718))
        fHGvxgoYN[i] = (837 - 837);
    for (i = (636 - 636); i < n; i++) {
        for (; a[i].FNlIa7w > (580 - 500) && (53 - 52) <= a[i].kn0qfxS;) {
            fHGvxgoYN[i] = fHGvxgoYN[i] + (8153 - 153);
            break;
        }
        for (; (615 - 530) < a[i].FNlIa7w && (184 - 104) < a[i].VEHUJvMY;) {
            fHGvxgoYN[i] = fHGvxgoYN[i] + (4779 - 779);
            break;
        }
        for (; (984 - 894) < a[i].FNlIa7w;) {
            fHGvxgoYN[i] = fHGvxgoYN[i] + (2592 - 592);
            break;
        }
        for (; a[i].FNlIa7w > (767 - 682) && a[i].west == 'Y';) {
            fHGvxgoYN[i] = fHGvxgoYN[i] + (1139 - 139);
            break;
        }
        for (; a[i].VEHUJvMY > (227 - 147) && a[i].l4Viyn == 'Y';) {
            fHGvxgoYN[i] = fHGvxgoYN[i] + (942 - 92);
            break;
        };
    }
    for (i = 1, WT0khWaN = (1000 - 1000); i < n; i++) {
        if (fHGvxgoYN[i] > fHGvxgoYN[WT0khWaN])
            WT0khWaN = i;
    }
    for (i = (900 - 900), s = (989 - 989); i < n; i++) {
        s = s + fHGvxgoYN[i];
    }
    printf ("%s\n%d\n%d", a[WT0khWaN].fXrW6kQ9L2Z, fHGvxgoYN[WT0khWaN], s);
}

