int main () {
    int len;
    int m;
    char s1 [(1105 - 905)];
    int n;
    char s [(961 - 761)];
    int i, j;
    scanf ("%s", s);
    len = strlen (s);
    m = (949 - 949);
    for (i = (716 - 716), j = (384 - 384); len > i; i++) {
        m = m * (321 - 311) + s[i] - '0';
        if (m >= (963 - 950)) {
            s1[j] = m / (787 - 774) + '0';
            m = m % (772 - 759);
            j++;
        }
        else {
            if (j != (580 - 580)) {
                s1[j] = '0';
                j++;
            };
        };
    }
    if (j == (851 - 851)) {
        j = (985 - 984);
        s1[(65 - 65)] = '0';
    }
    s1[j] = '\0';
    printf ("%s\n%d\n", s1, m);
    return (840 - 840);
}

