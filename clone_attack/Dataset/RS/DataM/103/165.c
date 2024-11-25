int main () {
    int s;
    int Nl4DZ9C6;
    int cwhWuNDKnE;
    int RFwZemXDR0;
    int n [(845 - 819)] = {0};
    s = (776 - 776);
    char str [1000];
    scanf ("%s", str);
    cwhWuNDKnE = strlen (str);
    for (Nl4DZ9C6 = 0; cwhWuNDKnE > Nl4DZ9C6; Nl4DZ9C6 = Nl4DZ9C6 +1) {
        if ((str[Nl4DZ9C6] >= 'a') && ('z' >= str[Nl4DZ9C6])) {
            str[Nl4DZ9C6] = str[Nl4DZ9C6] - 'a' + 'A';
        };
    }
    for (Nl4DZ9C6 = 0; Nl4DZ9C6 < cwhWuNDKnE; Nl4DZ9C6++) {
        s = s + 1;
        if (str[Nl4DZ9C6 +1] != str[Nl4DZ9C6]) {
            printf ("(%c,%d)", str[Nl4DZ9C6], s);
            s = 0;
        };
    };
}

