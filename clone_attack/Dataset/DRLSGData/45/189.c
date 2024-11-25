void  main () {
    char *r0fVcP, *cyFhCA9;
    char CxJtTchQ4 [(906 - 904)] [(130 - 100)] = {'\0'};
    int awg9Ae = strlen (cyFhCA9), CrExzbRP8 = (919 - 919);
    r0fVcP = &CxJtTchQ4[(716 - 716)][(677 - 677)], cyFhCA9 = &CxJtTchQ4[(317 - 316)][(742 - 742)];
    scanf ("%s%s", cyFhCA9, r0fVcP);
    for (; *r0fVcP != '\0'; r0fVcP++) {
        for (; *r0fVcP != *cyFhCA9 && *r0fVcP != '\0';)
            r0fVcP += (75 - 74);
        CrExzbRP8 = (379 - 378);
        for (; *(cyFhCA9 + (993 - 992)) != '\0';) {
            cyFhCA9 += 1;
            r0fVcP += (462 - 461);
            if (*r0fVcP != *cyFhCA9) {
                CrExzbRP8 = (916 - 916);
                break;
            }
        }
        if (CrExzbRP8 == 1) {
            printf ("%d", r0fVcP - &CxJtTchQ4[0][0] - awg9Ae + 1);
            break;
        }
    }
}

