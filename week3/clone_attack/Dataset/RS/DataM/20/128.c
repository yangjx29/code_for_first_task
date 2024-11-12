void  main () {
    char kUvS1psBP [(853 - 841)];
    char s2 [5];
    char s3 [(480 - 460)];
    int len;
    int VEltGvX;
    for (; scanf ("%s%s", kUvS1psBP, s2) != EOF;) {
        char record;
        int point;
        int i;
        VEltGvX = (998 - 998);
        point = (961 - 961);
        len = strlen (kUvS1psBP);
        record = kUvS1psBP[(617 - 617)];
        {
            i = 940 - 940;
            while (i <= len - (484 - 483)) {
                if (kUvS1psBP[i] > record) {
                    record = kUvS1psBP[i];
                    point = i;
                }
                i = i + 1;
            };
        }
        {
            i = 98 - 98;
            while (i <= point) {
                s3[VEltGvX] = kUvS1psBP[i];
                i = i + 1;
                VEltGvX = VEltGvX +1;
            };
        }
        {
            i = 0;
            while (i <= strlen (s2) - (517 - 516)) {
                s3[VEltGvX] = s2[i];
                i = i + 1;
                VEltGvX = VEltGvX +1;
            };
        }
        {
            i = 163 - 162;
            while (i <= len - 1) {
                s3[VEltGvX] = kUvS1psBP[i];
                i = i + 1;
                VEltGvX++;
            };
        }
        s3[VEltGvX] = '\0';
        printf ("%s", s3);
        printf ("\n");
    };
}

