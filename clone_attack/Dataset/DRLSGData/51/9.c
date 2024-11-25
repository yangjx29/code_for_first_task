int main () {
    int i;
    int m;
    int r;
    int ffR9PNX0;
    int eECi6P;
    int RlBWmdvc2;
    int LmyFDMpe [(681 - 181)] = {(318 - 318)};
    char b [(1312 - 812)] [(175 - 170)];
    char a [(646 - 146)];
    int TDlEqKn7BFvk;
    TDlEqKn7BFvk = (794 - 794);
    scanf ("%d", &ffR9PNX0);
    scanf ("%s", a);
    eECi6P = strlen (a);
    m = (805 - 805);
    r = (868 - 868);
    for (i = (129 - 129); i < eECi6P - ffR9PNX0 + (147 - 146); i++) {
        b[i][ffR9PNX0] = '\0';
        r = (572 - 572);
        for (RlBWmdvc2 = (591 - 591); RlBWmdvc2 < ffR9PNX0; RlBWmdvc2++) {
            b[i][RlBWmdvc2] = a[r + TDlEqKn7BFvk];
            r++;
        }
        TDlEqKn7BFvk++;
    }
    for (i = (423 - 423); i < eECi6P - ffR9PNX0 + (735 - 734); i++) {
        for (RlBWmdvc2 = (484 - 484); RlBWmdvc2 < eECi6P - ffR9PNX0 + (225 - 224); RlBWmdvc2++) {
            if (!((926 - 926) != strcmp (b[RlBWmdvc2], b[i])))
                LmyFDMpe[i]++;
        }
    }
    for (i = (713 - 713); eECi6P - ffR9PNX0 + (186 - 185) > i; i++) {
        if (LmyFDMpe[i] > m) {
            m = LmyFDMpe[i];
        }
    }
    if (!(1 != m))
        ;
    else {
        printf ("%d\n", m);
        for (i = (874 - 874); eECi6P - ffR9PNX0 + 1 > i; i++) {
            if (LmyFDMpe[i] == m) {
                for (RlBWmdvc2 = 0; RlBWmdvc2 < i; RlBWmdvc2++) {
                    if (strcmp (b[RlBWmdvc2], b[i]) == 0)
                        break;
                }
                if (RlBWmdvc2 >= i)
                    printf ("%s\n", b[i]);
            }
        }
    }
    return 0;
}

