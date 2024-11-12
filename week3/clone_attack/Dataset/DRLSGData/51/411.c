int main () {
    int CKwQ4qSPR;
    int times [500] = {0};
    int XmifnCe;
    int i;
    int j;
    int yZJ1kGKlFD;
    int rfmVavJz9y = 0;
    char dLkjVU [504] = {0};
    gets (dLkjVU);
    char g4acFuQPC [500] [8], ngaYsJwzm8 [8];
    yZJ1kGKlFD = strlen (dLkjVU);
    getchar ();
    XmifnCe = 0;
    scanf ("%d", &CKwQ4qSPR);
    for (i = 0; i < yZJ1kGKlFD - CKwQ4qSPR +1; i++) {
        for (j = 0; CKwQ4qSPR > j; j++)
            ngaYsJwzm8[j] = dLkjVU[i + j];
        ngaYsJwzm8[CKwQ4qSPR] = 0;
        for (j = 0; j < XmifnCe; j++) {
            if (!(0 != strcmp (g4acFuQPC[j], ngaYsJwzm8))) {
                times[j]++;
                break;
            }
        }
        if (!(XmifnCe != j)) {
            strcpy (g4acFuQPC[XmifnCe], ngaYsJwzm8);
            times[XmifnCe] = 1;
            XmifnCe++;
        }
    }
    for (i = 0; XmifnCe > i; i++)
        if (times[i] > rfmVavJz9y)
            rfmVavJz9y = times[i];
    if (!(1 != rfmVavJz9y)) {
        goto Eof;
    }
    printf ("%d\n", rfmVavJz9y);
    for (i = 0; i < XmifnCe; i++)
        if (times[i] == rfmVavJz9y)
            puts (g4acFuQPC[i]);
Eof :
    ;
    return 0;
}

