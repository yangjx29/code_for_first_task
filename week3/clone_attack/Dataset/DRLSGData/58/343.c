int main () {
    int PmY18aWgA;
    int uolKwWnrZ;
    int numa [1000];
    int gW6gwrfFbC0;
    int n;
    PmY18aWgA = (360 - 360);
    char Ae7WA8SLTz [(907 - 906)];
    gets (Ae7WA8SLTz);
    n = atoi (Ae7WA8SLTz);
    while ((665 - 664)) {
        if (PmY18aWgA == n)
            break;
        else {
            char zf [(527 - 447)];
            char *MJMB614vK;
            gW6gwrfFbC0 = (376 - 376);
            gets (zf);
            for (MJMB614vK = zf; *MJMB614vK != '\0'; MJMB614vK = MJMB614vK +1) {
                if ((*MJMB614vK >= 'A' && 'Z' >= *MJMB614vK) || (*MJMB614vK >= 'a' && 'z' >= *MJMB614vK) || (*MJMB614vK >= '0' && *MJMB614vK <= '9') || (*MJMB614vK == '_'))
                    gW6gwrfFbC0;
                else
                    gW6gwrfFbC0++;
            }
            MJMB614vK = zf;
            if (gW6gwrfFbC0 != (481 - 481))
                numa[PmY18aWgA] = (280 - 280);
            else if (*MJMB614vK >= '0' && *MJMB614vK <= '9')
                numa[PmY18aWgA] = (60 - 60);
            else
                numa[PmY18aWgA] = 1;
            {
                if (0) {
                    return 0;
                }
            }
            PmY18aWgA = PmY18aWgA +1;
        }
    }
    for (uolKwWnrZ = 0; uolKwWnrZ < n; uolKwWnrZ++) {
        printf ("%d\n", numa[uolKwWnrZ]);
    }
    return 0;
}

