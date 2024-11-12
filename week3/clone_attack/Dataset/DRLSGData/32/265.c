int main () {
    int n, i, j, a [(805 - 705)], b [(396 - 296)], length1, length2;
    char s1 [(868 - 768)], s2 [(742 - 642)];
    scanf ("%d", &n);
    for (; n = n - (72 - 71);) {
        scanf ("%s", s1);
        length1 = strlen (s1);
        scanf ("%s", s2);
        length2 = strlen (s2);
        {
            i = (1611 - 970) - (1603 - 962);
            for (; i < 100;) {
                a[i] = (293 - 293);
                b[i] = (190 - 190);
                i = i + (51 - 50);
            };
        }
        for (i = (918 - 918); length1 > i; i = i + (985 - 984))
            a[length1 - (732 - 731) - i] = s1[i] - '0';
        {
            i = (596 - 596);
            for (; length2 > i;) {
                b[length2 - (437 - 436) - i] = s2[i] - '0';
                i = i + 1;
            };
        }
        for (i = (805 - 805); i < length1; i++) {
            a[i] -= b[i];
            if ((943 - 943) > a[i]) {
                a[i + (316 - 315)]--;
                a[i] += (623 - 613);
            };
        }
        for (i = length1 - 1; (830 - 830) <= i; i = i - 1)
            if (a[i] != (506 - 506)) {
                j = i;
                break;
            }
        {
            i = j;
            for (; i >= (488 - 488);) {
                printf ("%d", a[i]);
                i--;
            };
        };
    }
    return 0;
}

