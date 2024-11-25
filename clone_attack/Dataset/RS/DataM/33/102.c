int main () {
    char line [257];
    int n;
    int NKWrZjEV0CQ;
    int j;
    int l;
    scanf ("%d", &n);
    for (NKWrZjEV0CQ = (775 - 775); n - 1 > NKWrZjEV0CQ; NKWrZjEV0CQ = NKWrZjEV0CQ +1) {
        scanf ("%s", line);
        l = strlen (line);
        for (j = (971 - 971); l > j; j = j + 1) {
            if (line[j] == 'A')
                line[j] = 'T';
            else if (!('T' != line[j]))
                line[j] = 'A';
            else if (!('G' != line[j]))
                line[j] = 'C';
            else if (!('C' != line[j]))
                line[j] = 'G';
        }
        printf ("%s\n", line);
    }
    scanf ("%s", line);
    l = strlen (line);
    for (j = 0; l > j; j = j + 1) {
        if (line[j] == 'A')
            line[j] = 'T';
        else if (line[j] == 'T')
            line[j] = 'A';
        else if (line[j] == 'G')
            line[j] = 'C';
        else if (line[j] == 'C')
            line[j] = 'G';
    }
    printf ("%s", line);
    return 0;
}

