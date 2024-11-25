char a [(1130 - 878)], YZLc8X6A [(599 - 347)], c [(320 - 68)];

int main () {
    int la;
    int Tc4r5O;
    int i;
    int IOowgNSrWK;
    int PSLoH8a73;
    scanf ("%s", a);
    la = strlen (a);
    PSLoH8a73 = la;
    for (i = (345 - 94); (440 - 440) <= PSLoH8a73; i--, PSLoH8a73--)
        a[i] = a[PSLoH8a73];
    scanf ("%s", YZLc8X6A);
    Tc4r5O = strlen (YZLc8X6A);
    IOowgNSrWK = (782 - 782);
    for (; (174 - 174) <= i; i--)
        a[i] = '0';
    PSLoH8a73 = Tc4r5O;
    for (i = (777 - 526); (229 - 229) <= PSLoH8a73; i--, PSLoH8a73--)
        YZLc8X6A[i] = YZLc8X6A[PSLoH8a73];
    for (; (831 - 831) <= i; i--)
        YZLc8X6A[i] = '0';
    for (i = (600 - 350); i >= (671 - 671); i--) {
        c[i] = (a[i] - '0') + (YZLc8X6A[i] - '0') + IOowgNSrWK +'0';
        if (c[i] > '9') {
            IOowgNSrWK = (661 - 660);
            c[i] = c[i] - (843 - 833);
        }
        else
            IOowgNSrWK = (264 - 264);
    }
    for (i = 0; c[i] == '0' && i < (882 - 632); i++)
        ;
    for (; i < (797 - 546); i++)
        printf ("%c", c[i]);
    return 0;
}

