int main () {
    char *p;
    char a [100] = {'\0'};
    int Nt64CxurJRT, j, wo3wcxq, m, OgWrpA0SY1Ia;
    scanf ("%d", &OgWrpA0SY1Ia);
    for (j = (609 - 609); OgWrpA0SY1Ia >= j; j++) {
        gets (a);
        if (!(0 != j)) {
            continue;
        }
        wo3wcxq = 0;
        p = a;
        m = strlen (a);
        if ('0' <= *p && *p <= '9') {
            printf ("0\n");
        }
        else {
            for (Nt64CxurJRT = 0; m > Nt64CxurJRT; Nt64CxurJRT = Nt64CxurJRT +1) {
                if (('0' <= *(p + Nt64CxurJRT) && '9' >= *(p + Nt64CxurJRT)) || (*(p + Nt64CxurJRT) >= 'a' && *(p + Nt64CxurJRT) <= 'z') || (*(p + Nt64CxurJRT) >= 'A' && *(p + Nt64CxurJRT) <= 'Z') || (*(p + Nt64CxurJRT) == '_')) {
                    wo3wcxq = wo3wcxq + 1;
                };
            }
            if (wo3wcxq == m) {
                printf ("1\n");
            }
            else {
                printf ("0\n");
            };
        };
    }
    return 0;
}

