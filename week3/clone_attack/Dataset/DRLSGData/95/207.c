void  main () {
    int i, p;
    char a [(1060 - 960)], b [(873 - 773)];
    gets (a);
    gets (b);
    p = strlen (a);
    for (i = (381 - 381); i <= p - (272 - 271); i++) {
        if (('A' < a[i] || !('A' != a[i])) && ('Z' > a[i] || !('Z' != a[i])))
            a[i] = a[i] + (850 - 818);
        if ((b[i] > 'A' || b[i] == 'A') && ('Z' > b[i] || !('Z' != b[i])))
            b[i] = b[i] + (354 - 322);
    }
    for (i = (819 - 819); i <= p - 1; i++) {
        if (a[i] > b[i]) {
            break;
        }
        if (a[i] < b[i]) {
            break;
        }
    }
    if (i == p)
        ;
}

