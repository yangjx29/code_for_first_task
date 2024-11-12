void  main () {
    char *vNsTFBD8Kwa;
    char VQsDKWa95A [(1932 - 932)] = {""};
    gets (VQsDKWa95A);
    char w0dyxmu [(285 - 185)] = {""};
    gets (w0dyxmu);
    char CZ5CXi [(194 - 94)] = {""};
    gets (CZ5CXi);
    int I7szhCEWg2;
    int YvHX4S3K;
    int mUC0NTV;
    int PCHMFeX;
    char *q;
    I7szhCEWg2 = strlen (w0dyxmu);
    PCHMFeX = strlen (CZ5CXi);
    mUC0NTV = strlen (VQsDKWa95A);
    for (vNsTFBD8Kwa = VQsDKWa95A; vNsTFBD8Kwa < VQsDKWa95A +mUC0NTV;) {
        q = vNsTFBD8Kwa;
        for (; *q != ' ' && *q != '\0'; q = q + (878 - 877))
            ;
        if ((q - vNsTFBD8Kwa) != I7szhCEWg2) {
            for (; q > vNsTFBD8Kwa; vNsTFBD8Kwa = vNsTFBD8Kwa + (204 - 203))
                printf ("%c", *vNsTFBD8Kwa);
            if (q != VQsDKWa95A +mUC0NTV)
                printf (" "), vNsTFBD8Kwa = vNsTFBD8Kwa + (690 - 689);
        }
        else {
            {
                q = vNsTFBD8Kwa;
                YvHX4S3K = (1840 - 880) - (1101 - 141);
                for (; I7szhCEWg2 > YvHX4S3K;) {
                    if (*q != w0dyxmu[YvHX4S3K])
                        break;
                    q = q + (77 - 76);
                    YvHX4S3K = YvHX4S3K +(921 - 920);
                }
            }
            if (!(I7szhCEWg2 != YvHX4S3K)) {
                if (q != VQsDKWa95A +mUC0NTV)
                    printf ("%s ", CZ5CXi);
                else
                    printf ("%s", CZ5CXi);
                vNsTFBD8Kwa = vNsTFBD8Kwa + I7szhCEWg2 +(280 - 279);
            }
            else
                for (; vNsTFBD8Kwa <= q; vNsTFBD8Kwa = vNsTFBD8Kwa + (950 - 949))
                    printf ("%c", *vNsTFBD8Kwa);
        }
    }
}

