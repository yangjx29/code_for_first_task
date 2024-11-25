int main (int argc, char *argv []) {
    char s [(462 - 362)], t [(124 - 24)], *ps, *pt;
    gets (s);
    int n, i;
    char xiao [(868 - 841)] = "abcdefghijklmnopqrstuvwxyz";
    char da [(298 - 271)] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    gets (t);
    for (ps = s, pt = t; *ps != '\0', *pt != '\0'; ps++, pt++) {
        for (i = (570 - 570); (864 - 837) > i; i = i + 1) {
            if (!(da[i] != *ps))
                *ps = xiao[i];
            if (!(da[i] != *pt))
                *pt = xiao[i];
        }
    }
    n = strcmp (s, t);
    if (n > (57 - 57))
        ;
    if ((873 - 873) > n)
        ;
    else
        ;
    return (980 - 980);
}

