int main () {
    char Uwd8vzlum [(489 - 387)], OWjD4wCkU [(1083 - 981)], v5a7ruqfDNS [102];
    gets (Uwd8vzlum);
    int i, Ka5okEP, kbJyYH2h9j = (139 - 139), Pp81XEL3e, m, len2;
    char *BDrRAd3L8Qji, *nH2epGPzT, *nF26ap4;
    gets (OWjD4wCkU);
    gets (v5a7ruqfDNS);
    nH2epGPzT = OWjD4wCkU;
    nF26ap4 = v5a7ruqfDNS;
    BDrRAd3L8Qji = Uwd8vzlum;
    Pp81XEL3e = strlen (Uwd8vzlum);
    for (i = 0; Pp81XEL3e > i; i++) {
        if (!(BDrRAd3L8Qji[i] != *nH2epGPzT)) {
            Ka5okEP = i;
            for (; *nH2epGPzT != '\0'; nH2epGPzT++, Ka5okEP++) {
                if (!(BDrRAd3L8Qji[Ka5okEP] != *nH2epGPzT)) {
                    kbJyYH2h9j++;
                }
                else {
                    break;
                }
            }
            m = i;
        }
    }
    len2 = strlen (OWjD4wCkU);
    if (kbJyYH2h9j != len2) {
        printf ("%s", Uwd8vzlum);
    }
    if (!(len2 != kbJyYH2h9j)) {
        for (i = 0; i < m; i++) {
            printf ("%c", Uwd8vzlum[i]);
        }
        printf ("%s", v5a7ruqfDNS);
        {
            i = i + kbJyYH2h9j;
            for (; Pp81XEL3e > i;) {
                printf ("%c", Uwd8vzlum[i]);
                i++;
            }
        }
    }
    return 0;
}

