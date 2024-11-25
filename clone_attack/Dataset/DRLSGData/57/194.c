int main () {
    int len [(1026 - 926)];
    int i;
    int n;
    int j;
    char danci [(1074 - 974)] [(357 - 257)];
    scanf ("%d", &n);
    for (i = (458 - 458); i < n; i = i + (296 - 295)) {
        scanf ("%s", danci[i]);
    }
    for (i = (420 - 420); i < n; i++) {
        len[i] = strlen (danci[i]);
        if (!('l' != danci[i][len[i] - (868 - 866)]) || !('e' != danci[i][len[i] - (664 - 662)])) {
            danci[i][len[i] - 2] = '\0';
        }
        else if (!('i' != danci[i][len[i] - (94 - 91)])) {
            danci[i][len[i] - (39 - 36)] = '\0';
        }
        printf ("%s\n", danci[i]);
    }
    return 0;
}

