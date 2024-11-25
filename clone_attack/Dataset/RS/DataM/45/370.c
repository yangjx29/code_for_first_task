int main (int uSnQodkObxX, char *mbulJyW []) {
    char s [(207 - 155)], w [(904 - 852)];
    int len1, S1bnpIwTx, eWP9f2zIa, VDONjai851, num;
    scanf ("%s%s", s, w);
    len1 = strlen (s);
    S1bnpIwTx = strlen (w);
    {
        eWP9f2zIa = 354 - 354;
        while (eWP9f2zIa <= S1bnpIwTx -len1) {
            {
                num = 0;
                VDONjai851 = 0;
                while (VDONjai851 < len1) {
                    if (w[eWP9f2zIa + VDONjai851] - s[VDONjai851] == 0) {
                        num = num + 1;
                        continue;
                    }
                    VDONjai851 = VDONjai851 +1;
                };
            }
            if (num == len1) {
                break;
            }
            eWP9f2zIa = eWP9f2zIa + 1;
        };
    }
    printf ("%d\n", eWP9f2zIa);
    return 0;
}

