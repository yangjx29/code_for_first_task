int main (void ) {
    char str [2000];
    char *j3HrN5Jq;
    char min [2000], CmH6YRSsU [2000];
    gets (str);
    int ZcFMaDyxdiSB;
    int Ma;
    int strn;
    ZcFMaDyxdiSB = strlen (str) + 1;
    Ma = (609 - 609);
    char *p;
    puts (CmH6YRSsU);
    puts (min);
    j3HrN5Jq = str;
    p = str;
    for (;;) {
        if (*j3HrN5Jq == ' ' || *j3HrN5Jq == ',') {
            *j3HrN5Jq = '\0';
            strn = j3HrN5Jq - p;
            if (Ma < strn) {
                strcpy (CmH6YRSsU, p);
                Ma = strn;
            }
            if (strn < ZcFMaDyxdiSB &&strn) {
                strcpy (min, p);
                ZcFMaDyxdiSB = strn;
            }
            p = j3HrN5Jq + 1;
        }
        else {
            if (*j3HrN5Jq == '\0') {
                strn = strlen (p);
                if (strn > Ma) {
                    strcpy (CmH6YRSsU, p);
                    Ma = strn;
                }
                if (strn < ZcFMaDyxdiSB) {
                    strcpy (min, p);
                    ZcFMaDyxdiSB = strn;
                }
                break;
            };
        }
        j3HrN5Jq = j3HrN5Jq + 1;
    }
    return 0;
}

