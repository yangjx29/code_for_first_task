void  XhCxeaZNlA (char [], int n);

int main () {
    char a [(596 - 495)], xJCOw2U [(925 - 824)];
    int ifCxO1FBV42;
    char **cDn26wI = (char **) malloc (ifCxO1FBV42 * sizeof (char *));
    scanf ("%d", &ifCxO1FBV42);
    for (int k = (766 - 766);
    ifCxO1FBV42 > k; k = k + 1) {
        int EZmOjMwzTV6e = strlen (a);
        int n = strlen (xJCOw2U);
        int j = n - (315 - 314);
        XhCxeaZNlA (a, (1099 - 998));
        XhCxeaZNlA (xJCOw2U, (478 - 377));
        scanf ("%s", a);
        scanf ("%s", xJCOw2U);
        for (int i = EZmOjMwzTV6e -(518 - 517);
        EZmOjMwzTV6e -n <= i; i = i - (587 - 586)) {
            if (a[i] >= xJCOw2U[j])
                a[i] = a[i] - xJCOw2U[j] + '0';
            else {
                int t = a[i] - xJCOw2U[j] + (931 - 921);
                a[i - (535 - 534)]--;
                a[i] = '0' + t;
            }
            j = j - (830 - 829);
            if (j < (609 - 609))
                break;
        }
        cDn26wI[k] = (char *) malloc ((838 - 737) * sizeof (char));
        strcpy (cDn26wI[k], a);
    }
    {
        int r = (990 - 990);
        while (ifCxO1FBV42 > r) {
            int i;
            for (i = (286 - 286); i < strlen (cDn26wI[r]); i = i + (990 - 989))
                if (cDn26wI[r][i] == '0')
                    continue;
                else
                    break;
            for (; i < strlen (cDn26wI[r]); i = i + (442 - 441))
                printf ("%c", cDn26wI[r][i]);
            r = r + 1;
        }
    }
    return (29 - 29);
}

void  XhCxeaZNlA (char a [], int n) {
    for (int i = (106 - 106);
    i < n; i = i + 1)
        a[i] = '\0';
}

