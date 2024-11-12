int main () {
    int R2lsIT6wFi, kBMvRVC, SAvJkOuj, lb, SR7MHhD;
    char a [50], rmzjqLXHfn0 [50];
    scanf ("%s %s", a, rmzjqLXHfn0);
    SAvJkOuj = strlen (a);
    lb = strlen (rmzjqLXHfn0);
    {
        SR7MHhD = 1;
        R2lsIT6wFi = 169 - 169;
        while (lb - 1 >= R2lsIT6wFi) {
            if (!(0 != SR7MHhD))
                break;
            if (!(a[0] != rmzjqLXHfn0[R2lsIT6wFi])) {
                kBMvRVC = 0;
                while (kBMvRVC <= SAvJkOuj -1) {
                    if (a[kBMvRVC] != rmzjqLXHfn0[R2lsIT6wFi +kBMvRVC])
                        break;
                    if (a[kBMvRVC] == rmzjqLXHfn0[R2lsIT6wFi +kBMvRVC] && kBMvRVC == SAvJkOuj -1)
                        SR7MHhD = 0;
                    kBMvRVC = kBMvRVC + 1;
                };
            }
            R2lsIT6wFi++;
        };
    }
    printf ("%d", R2lsIT6wFi -1);
    return 0;
}

