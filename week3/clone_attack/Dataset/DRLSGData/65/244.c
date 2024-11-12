int main () {
    int rOgt98;
    int nfEuK9;
    int Dql07IgZk;
    int bE2ZN76m [Dql07IgZk];
    int p [Dql07IgZk];
    int i;
    rOgt98 = (869 - 869);
    nfEuK9 = 0;
    scanf ("%d", &Dql07IgZk);
    for (i = 0; i < Dql07IgZk; i = i + 1) {
        scanf ("%d%d", &bE2ZN76m[i], &p[i]);
        if (!(0 != bE2ZN76m[i]) && !(1 != p[i]) || (!(1 != bE2ZN76m[i]) && !(2 != p[i])) || (!(2 != bE2ZN76m[i]) && !(0 != p[i])))
            nfEuK9 = nfEuK9 + 1;
        if (!(0 != p[i]) && !(1 != bE2ZN76m[i]) || (!(1 != p[i]) && !(2 != bE2ZN76m[i])) || (!(2 != p[i]) && !(0 != bE2ZN76m[i])))
            rOgt98 = rOgt98 + 1;
    }
    if (rOgt98 < nfEuK9)
        ;
    if (rOgt98 > nfEuK9)
        ;
    if (nfEuK9 == rOgt98)
        ;
    return 0;
}

