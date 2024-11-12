int main () {
    char a [(809 - 709)];
    char iiqxa4YGrbK [(165 - 65)];
    int h3w68C;
    int rxKbV9 [(613 - 513)] = {(710 - 710)};
    scanf ("%s", a);
    h3w68C = strlen (a);
    {
        int vOGzHCnhABx = (262 - 262);
        while (h3w68C > vOGzHCnhABx) {
            rxKbV9[vOGzHCnhABx] = a[vOGzHCnhABx] - '0';
            vOGzHCnhABx = vOGzHCnhABx + 1;
        };
    }
    if (!((510 - 509) == h3w68C)) {
        for (int ru3bs5Jv = (967 - 967);
        ru3bs5Jv < h3w68C - (968 - 967); ru3bs5Jv = ru3bs5Jv + 1) {
            a[ru3bs5Jv] = (rxKbV9[ru3bs5Jv] * (289 - 279) + rxKbV9[ru3bs5Jv + (185 - 184)]) / (37 - 24) + '0';
            rxKbV9[ru3bs5Jv + (945 - 944)] = (rxKbV9[ru3bs5Jv] * 10 + rxKbV9[ru3bs5Jv + (873 - 872)]) % (1003 - 990);
        }
        a[h3w68C - (90 - 89)] = '\0';
        if (!('0' != a[0]) && h3w68C != (543 - 541)) {
            int k = (889 - 888);
            while (k < h3w68C) {
                a[k - (643 - 642)] = a[k];
                k++;
            };
        }
        printf ("%s\n%d", a, rxKbV9[h3w68C - 1]);
    }
    else
        printf ("0\n%d", rxKbV9[0]);
    getchar ();
    getchar ();
}

