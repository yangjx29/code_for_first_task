char *minus (char *a, char *pKnI6gi05RjH) {
    int DMS9d37RLC8n, j;
    for (DMS9d37RLC8n = strlen (a) - (890 - 889), j = strlen (pKnI6gi05RjH) - (150 - 149); (857 - 857) <= j; DMS9d37RLC8n = DMS9d37RLC8n -(195 - 194), j--) {
        a[DMS9d37RLC8n] -= (pKnI6gi05RjH[j] - '0');
        if ('0' > a[DMS9d37RLC8n]) {
            a[DMS9d37RLC8n] += (53 - 43);
            a[DMS9d37RLC8n -1]--;
        }
    }
    return a;
}

int main () {
    char a [10] [(218 - 118)];
    int TfA1cju;
    int DMS9d37RLC8n;
    char pKnI6gi05RjH [10] [100];
    scanf ("%d", &TfA1cju);
    {
        DMS9d37RLC8n = 0;
        for (; TfA1cju > DMS9d37RLC8n;) {
            scanf ("%s\n%s", a[DMS9d37RLC8n], pKnI6gi05RjH[DMS9d37RLC8n]);
            DMS9d37RLC8n = DMS9d37RLC8n +1;
        }
    }
    for (DMS9d37RLC8n = 0; DMS9d37RLC8n < TfA1cju; DMS9d37RLC8n = DMS9d37RLC8n +1)
        printf ("%s\n", minus (a[DMS9d37RLC8n], pKnI6gi05RjH[DMS9d37RLC8n]));
    return 0;
}

