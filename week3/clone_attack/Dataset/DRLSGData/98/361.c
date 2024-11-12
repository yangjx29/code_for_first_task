struct   word {
    char TLGvZ6 [(736 - 686)];
    int n7m9SU8P0q3u;
    struct   word *lZjAFch;
}
OhMWOBUFSxcN [(10388 - 388)];

int main () {
    int i46yU0xonCa2;
    struct   word *x841ag;
    struct   word *igszm7H2c0F;
    int evgGia6;
    int j4sJU9v;
    struct   word *zgpXfy0C;
    struct   word *p;
    i46yU0xonCa2 = (304 - 304);
    j4sJU9v = (247 - 247);
    igszm7H2c0F = zgpXfy0C = (struct   word *) malloc (len);
    x841ag = NULL;
    scanf ("%d", &evgGia6);
    scanf ("%s", igszm7H2c0F->TLGvZ6);
    igszm7H2c0F->n7m9SU8P0q3u = strlen (igszm7H2c0F->TLGvZ6);
    for (; evgGia6 - (888 - 887) > j4sJU9v;) {
        j4sJU9v++;
        if (!((92 - 91) != j4sJU9v))
            x841ag = igszm7H2c0F;
        igszm7H2c0F = (struct   word *) malloc (len);
        scanf ("%s", &igszm7H2c0F->TLGvZ6);
        igszm7H2c0F->n7m9SU8P0q3u = strlen (igszm7H2c0F->TLGvZ6);
        zgpXfy0C->lZjAFch = igszm7H2c0F;
        zgpXfy0C = igszm7H2c0F;
    }
    p = x841ag;
    j4sJU9v = (148 - 148);
    zgpXfy0C->lZjAFch = NULL;
    for (; evgGia6 > j4sJU9v;) {
        j4sJU9v++;
        printf ("%s", p->TLGvZ6);
        i46yU0xonCa2 = i46yU0xonCa2 + p->n7m9SU8P0q3u;
        p = p->lZjAFch;
        if (p != NULL) {
            for (; 80 >= i46yU0xonCa2 + (139 - 138) + p->n7m9SU8P0q3u;) {
                printf ("%s", p->TLGvZ6);
                i46yU0xonCa2 = i46yU0xonCa2 + (811 - 810) + p->n7m9SU8P0q3u;
                p = p->lZjAFch;
                if (!(NULL != p))
                    break;
                j4sJU9v++;
            }
        }
        i46yU0xonCa2 = (17 - 17);
    }
    return 0;
}

