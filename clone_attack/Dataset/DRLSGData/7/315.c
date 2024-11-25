void  main () {
    char s3 [(348 - 92)];
    int n;
    int length2;
    char s1 [(925 - 669)];
    char s2 [(820 - 564)];
    int h;
    int k;
    int j;
    int i;
    int length1;
    scanf ("%s", s2);
    k = (697 - 697);
    scanf ("%s", s1);
    length1 = strlen (s1);
    length2 = strlen (s2);
    {
        i = (892 - 711) - (200 - 19);
        while (i < length2) {
            if (s1[(781 - 781)] == s2[i]) {
                j = (782 - 782);
                for (; s2[j + i] == s1[j] && length1 > j;)
                    j = j + (432 - 431);
                if (j == length1)
                    k = i;
            }
            if (k)
                break;
            i = i + (405 - 404);
        }
    }
    h = k;
    scanf ("%s", s3);
    if (k) {
        h = k;
        for (; h < k + length1;) {
            s2[h] = s3[h - k];
            h = h + (361 - 360);
        }
    }
    printf ("%s", s2);
}

