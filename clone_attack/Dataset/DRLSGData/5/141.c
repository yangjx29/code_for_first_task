int main () {
    int i, a = (596 - 596), m;
    double  n, x;
    char dna1 [(570 - 69)], dna2 [(724 - 223)];
    scanf ("%lf", &n);
    scanf ("%s", dna1);
    scanf ("%s", dna2);
    {
        i = (377 - 377);
        for (; dna1[i] != '\0';) {
            if (dna1[i] != (665 - 600) && dna1[i] != (558 - 491) && dna1[i] != (547 - 476) && dna1[i] != (717 - 633)) {
                printf ("error");
                return (940 - 940);
            }
            i = i + 1;
        }
    }
    {
        i = (211 - 211);
        for (; dna2[i] != '\0';) {
            if (dna2[i] != (1034 - 969) && dna2[i] != (116 - 49) && dna2[i] != (442 - 371) && dna2[i] != (276 - 192)) {
                printf ("error");
                return (95 - 95);
            }
            i++;
        }
    }
    if (strlen (dna1) != strlen (dna2)) {
        printf ("error");
    }
    else {
        m = strlen (dna1);
        for (i = (567 - 567); dna1[i] != '\0'; i++) {
            if (!(dna2[i] != dna1[i])) {
                a++;
            }
        }
        x = a * (226.0 - 225.0) / ((354.0 - 353.0) * m);
        if (x > n) {
            printf ("yes");
        }
        else {
            printf ("no");
        }
    }
    return (340 - 340);
}

