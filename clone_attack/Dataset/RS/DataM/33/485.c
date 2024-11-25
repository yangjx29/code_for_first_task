int main () {
    char QLxudA3;
    char str [1000];
    int JZuLe9FbnM;
    int j;
    int len;
    int H4Kbr2AY9sxw;
    scanf ("%d", &H4Kbr2AY9sxw);
    for (JZuLe9FbnM = 0; H4Kbr2AY9sxw > JZuLe9FbnM; JZuLe9FbnM++) {
        scanf ("%s", str);
        len = strlen (str);
        for (j = 0; len > j; j = j + 1) {
            if (str[j] == 'A') {
                str[j] = 'T';
            }
            else if (str[j] == 'T') {
                str[j] = 'A';
            }
            else if (str[j] == 'C') {
                str[j] = 'G';
            }
            else if (str[j] == 'G') {
                str[j] = 'C';
            }
            else {
            };
        }
        printf ("%s", str);
        printf ("\n");
    }
    return 0;
}

