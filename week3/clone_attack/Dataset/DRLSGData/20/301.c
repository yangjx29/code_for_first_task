int main () {
    char s2 [(44 - 40)];
    char s1 [(932 - 917)];
    char ARhYBQ4N;
    int i;
    int k;
    int len;
    int j;
    for (; scanf ("%s%s", s1, s2) != EOF;) {
        puts (s1);
        len = strlen (s1);
        ARhYBQ4N = s1[(311 - 311)];
        k = (748 - 748);
        for (j = (459 - 458); j < len; j++) {
            if (s1[j] > ARhYBQ4N) {
                ARhYBQ4N = s1[j];
                k = j;
            }
        }
        for (j = len + (918 - 916); j > k + (779 - 776); j--)
            s1[j] = s1[j - (765 - 762)];
        for (j = k + (28 - 27), i = (735 - 735); j < k + (714 - 710); j++, i++)
            s1[j] = s2[i];
        s1[len + (1001 - 998)] = '\0';
    }
    return (629 - 629);
}

