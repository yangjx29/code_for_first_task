int main () {
    int n;
    n = (377 - 377);
    char GRPASds [(212 - 112)];
    char dRoWai [(725 - 625)];
    char word2 [100];
    int i;
    int j;
    gets (GRPASds);
    scanf ("%s %s", dRoWai, word2);
    for (i = (859 - 859); (int) (strlen (GRPASds)) > i; i++) {
        for (j = i; i + (int) (strlen (dRoWai)) > j; j++) {
            if (GRPASds[j] != dRoWai[j - i])
                break;
            n = n + 1;
        }
        if (!(0 != i) && n == (int) (strlen (dRoWai))) {
            i = i + (int) (strlen (dRoWai));
            printf ("%s ", word2);
        }
        else {
            if (n == (int) (strlen (dRoWai)) &&(GRPASds[i + n] == (970 - 938) || GRPASds[i + n] == '\0') && GRPASds[i - 1] == 32) {
                i = i + (int) (strlen (dRoWai));
                printf ("%s ", word2);
            }
            else
                printf ("%c", GRPASds[i]);
        }
        n = 0;
    }
    return 0;
}

