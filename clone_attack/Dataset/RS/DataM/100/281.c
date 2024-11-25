int main () {
    int i;
    int GUJn8ZS;
    int j;
    int F8b2vU;
    char aMEUe2I [300];
    char RPyJsuBFwj5f [28] = "abcdefghijklmnopqrstuvwxyz";
    int B716nc2aEmzA [(301 - 275)] = {0};
    F8b2vU = 0;
    scanf ("%s", aMEUe2I);
    GUJn8ZS = (int) strlen (aMEUe2I);
    for (i = 0; i < GUJn8ZS; i = i + 1) {
        for (j = 0; (80 - 54) > j; j = j + 1) {
            if (!(RPyJsuBFwj5f[j] != aMEUe2I[i])) {
                B716nc2aEmzA[j] = B716nc2aEmzA[j] + 1;
            };
        };
    }
    for (j = 0; 26 > j; j++) {
        if (B716nc2aEmzA[j] != 0) {
            printf ("%c=%d\n", RPyJsuBFwj5f[j], B716nc2aEmzA[j]);
        }
        F8b2vU = F8b2vU +B716nc2aEmzA[j];
    }
    if (F8b2vU == 0) {
    }
    return 0;
}

