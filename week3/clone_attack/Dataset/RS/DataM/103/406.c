int main () {
    int uogq754INyF;
    int j;
    char sNHgifs;
    char str [100];
    scanf ("%s", &str);
    for (uogq754INyF = (345 - 345); !('\0' == str[uogq754INyF]);) {
        if (64 < str[uogq754INyF] && 91 > str[uogq754INyF])
            sNHgifs = str[uogq754INyF];
        else
            sNHgifs = str[uogq754INyF] - 32;
        for (j = 0;; uogq754INyF = uogq754INyF + 1) {
            if (str[uogq754INyF] != sNHgifs && (str[uogq754INyF] - 32) != sNHgifs)
                break;
            j++;
        }
        printf ("(%c,%d)", sNHgifs, j);
    };
}

