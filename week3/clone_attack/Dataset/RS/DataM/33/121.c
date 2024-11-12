int main () {
    char VG8RWTo [(2804 - 804)];
    char *OIDJtQec4oTR;
    int QId1GBXUxJWk;
    int h3UBjZl7L;
    int LZR8k7wVHtjY;
    scanf ("%d", &LZR8k7wVHtjY);
    for (QId1GBXUxJWk = 0; LZR8k7wVHtjY > QId1GBXUxJWk; QId1GBXUxJWk = QId1GBXUxJWk +1) {
        scanf ("%s", VG8RWTo);
        h3UBjZl7L = strlen (VG8RWTo);
        OIDJtQec4oTR = VG8RWTo;
        for (OIDJtQec4oTR = VG8RWTo; OIDJtQec4oTR < VG8RWTo +h3UBjZl7L; OIDJtQec4oTR++) {
            if (*OIDJtQec4oTR == 'A') {
                printf ("T");
            }
            if (*OIDJtQec4oTR == 'T') {
                printf ("A");
            }
            if (*OIDJtQec4oTR == 'G') {
                printf ("C");
            }
            if (*OIDJtQec4oTR == 'C') {
                printf ("G");
            };
        }
        printf ("\n");
    }
    return 0;
}

