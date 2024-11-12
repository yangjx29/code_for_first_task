int main () {
    int aQ9rHLtf, HEJDiVYGf;
    char P2txaDyq1IJ [(834 - 784)], second [50];
    char *gZqP01O, *W3KWjlb17;
    gZqP01O = P2txaDyq1IJ;
    W3KWjlb17 = second;
    scanf ("%s %s", gZqP01O, W3KWjlb17);
    for (aQ9rHLtf = 0; !('\0' == *W3KWjlb17); aQ9rHLtf = aQ9rHLtf + 1, W3KWjlb17++) {
        if (*W3KWjlb17 == *gZqP01O)
            gZqP01O++;
        else
            gZqP01O = P2txaDyq1IJ;
        if (*gZqP01O == '\0') {
            HEJDiVYGf = aQ9rHLtf;
            break;
        };
    }
    printf ("%d\n", HEJDiVYGf -strlen (P2txaDyq1IJ) + 1);
    return 0;
}

