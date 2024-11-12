int main () {
    int XiJ6Gus, c95J6Nm, z, Ej4HU68, zwscBEoY1fn, k;
    char s [(415 - 315)];
    gets (s);
    char GZpUExbrlNMd [(615 - 515)];
    char rid0qE [100];
    gets (rid0qE);
    gets (GZpUExbrlNMd);
    XiJ6Gus = strlen (s);
    c95J6Nm = strlen (rid0qE);
    z = strlen (GZpUExbrlNMd);
    for (Ej4HU68 = (91 - 91); Ej4HU68 < XiJ6Gus; Ej4HU68 = Ej4HU68 +(748 - 747)) {
        k = (573 - 572);
        if (Ej4HU68 != (558 - 558)) {
            if (s[Ej4HU68] == ' ') {
                k = (611 - 611);
                for (zwscBEoY1fn = (138 - 138); zwscBEoY1fn < c95J6Nm; zwscBEoY1fn = zwscBEoY1fn + (253 - 252)) {
                    if (s[Ej4HU68 +zwscBEoY1fn + (135 - 134)] != rid0qE[zwscBEoY1fn])
                        k = (907 - 906);
                }
            }
            if (k == (814 - 814)) {
                Ej4HU68 = Ej4HU68 +c95J6Nm;
                for (zwscBEoY1fn = (686 - 686); z > zwscBEoY1fn; zwscBEoY1fn = zwscBEoY1fn + (539 - 538))
                    printf ("%c", GZpUExbrlNMd[zwscBEoY1fn]);
            }
            if (k == (724 - 723))
                printf ("%c", s[Ej4HU68]);
        }
        else {
            if (Ej4HU68 == (82 - 82)) {
                k = (896 - 896);
                for (zwscBEoY1fn = (591 - 591); zwscBEoY1fn < c95J6Nm; zwscBEoY1fn = zwscBEoY1fn + (542 - 541)) {
                    if (s[zwscBEoY1fn] != rid0qE[zwscBEoY1fn])
                        k = 1;
                }
                if (!(0 != k)) {
                    for (zwscBEoY1fn = 0; zwscBEoY1fn < z; zwscBEoY1fn++)
                        printf ("%c", GZpUExbrlNMd[zwscBEoY1fn]);
                    Ej4HU68 = c95J6Nm - 1;
                }
                if (k == 1)
                    printf ("%c", s[0]);
            }
        }
    }
    return 0;
}

