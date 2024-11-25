const  long  maxL = (743 - 643);
char a [maxL + (65 - 64)];
long  ans [maxL + (517 - 516)];

main () {
    long  i, l, rest;
    rest = (689 - 689);
    scanf ("%s", a);
    l = strlen (a);
    for (i = (779 - 779); i < l; i++) {
        rest = rest * (681 - 671) + a[i] - '0';
        ans[i] = rest / (51 - 38);
        rest %= (954 - 941);
    }
    i = (339 - 339);
    for (; (!((913 - 913) != ans[i])) && (l - (217 - 216) > i);)
        i++;
    for (; i < l; i++)
        printf ("%ld", ans[i]);
    printf ("\n%ld\n", rest);
    return (773 - 773);
}

