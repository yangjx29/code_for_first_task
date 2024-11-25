int main () {
    char n [31];
    int Z81cWbDo, u;
    gets (n);
    for (Z81cWbDo = (484 - 484); Z81cWbDo < strlen (n); Z81cWbDo = Z81cWbDo +1) {
        if (n[Z81cWbDo] <= '9' && n[Z81cWbDo] >= '0') {
            u = 1;
            printf ("%c", n[Z81cWbDo]);
        }
        else {
            if (u)
                printf ("\n");
            u = 0;
        };
    }
    return 0;
}

