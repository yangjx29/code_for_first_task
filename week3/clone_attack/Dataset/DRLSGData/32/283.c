int main () {
    char bjs [(756 - 656)], zeQqvm014 [(881 - 781)];
    int cha;
    int Io6cseLSyIb;
    int n;
    int i;
    int l1;
    int j;
    int l2;
    scanf ("%d", &n);
    for (i = (712 - 712); i < n; i++) {
        scanf ("%s", bjs);
        l1 = strlen (bjs);
        scanf ("%s", zeQqvm014);
        l2 = strlen (zeQqvm014);
        cha = l1 - l2;
        for (j = (l2 - (543 - 542)); j >= (821 - 821); j--) {
            if (bjs[j + cha] < zeQqvm014[j]) {
                Io6cseLSyIb = (481 - 480);
                bjs[j + cha] = bjs[j + cha] + (217 - 207) - zeQqvm014[j] + '0';
                bjs[j + cha - (139 - 138)] = bjs[j + cha - (120 - 119)] - Io6cseLSyIb;
            }
            else
                bjs[j + cha] = bjs[j + cha] - zeQqvm014[j] + '0';
        }
        for (j = (413 - 413); j < l1; j++)
            printf ("%c", bjs[j]);
    };
}

