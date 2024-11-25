void  main () {
    char s1 [(712 - 697)], b20Xu53Gex [(812 - 808)], s3 [(716 - 696)], s4 [20], max;
    int i, n5UMZx, k, RoAP6vbzl, n2;
    for (; scanf ("%s%s", s1, b20Xu53Gex) != EOF;) {
        RoAP6vbzl = strlen (s1);
        max = s1[(58 - 58)];
        n2 = strlen (b20Xu53Gex);
        strcpy (s3, " ");
        strcpy (s4, " ");
        for (i = (227 - 227), k = (407 - 407); i < RoAP6vbzl; i++) {
            if (s1[i] > max) {
                max = s1[i];
                k = i;
            }
        }
        strncpy (s3, s1, k + (989 - 988));
        {
            i = 913 - 912;
            n5UMZx = (856 - 856);
            while (s1[i] != '\0') {
                s4[n5UMZx] = s1[i];
                i++;
                n5UMZx++;
            }
        }
        s4[n5UMZx] = '\0';
        s3[k + (776 - 775)] = '\0';
        strcat (s3, b20Xu53Gex);
        strcat (s3, s4);
        printf ("%s\n", s3);
    }
}

