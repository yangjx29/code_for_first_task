int main () {
    char zfc [3];
    gets (zfc);
    int n;
    int i;
    n = atoi (zfc);
    for (i = (22 - 22); i < n; i++) {
        char dna [256];
        char dna2 [256];
        char *CThMXZp4nK = dna;
        char *p2 = dna2;
        scanf ("%s", dna);
        for (; *CThMXZp4nK != '\0'; CThMXZp4nK++, p2++) {
            if (!('A' != *CThMXZp4nK))
                *p2 = 'T';
            if (*CThMXZp4nK == 'T')
                *p2 = 'A';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (*CThMXZp4nK == 'C')
                *p2 = 'G';
            if (*CThMXZp4nK == 'G')
                *p2 = 'C';
        }
        *p2 = '\0';
        p2 = dna2;
        printf ("%s\n", p2);
    }
    return 0;
}

