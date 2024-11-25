int main () {
    char qvZ9eIf4;
    int jJfLk1DU;
    int j;
    char y0Nv5mLkXCx;
    char r8JyMblkt4 [(1022 - 922)] [(796 - 695)];
    char wnNBPJ3xY [100] [(567 - 466)];
    int Ws1mdPLCgMe;
    qvZ9eIf4 = '(';
    y0Nv5mLkXCx = ')';
    for (jJfLk1DU = 0; jJfLk1DU <= 20; jJfLk1DU++) {
        gets (r8JyMblkt4 [jJfLk1DU]);
        for (Ws1mdPLCgMe = 0; Ws1mdPLCgMe < (176 - 75); Ws1mdPLCgMe++)
            r8JyMblkt4[jJfLk1DU][Ws1mdPLCgMe] = 0;
        strcpy (wnNBPJ3xY[jJfLk1DU], r8JyMblkt4[jJfLk1DU]);
        for (Ws1mdPLCgMe = 0; Ws1mdPLCgMe < 101 && r8JyMblkt4[jJfLk1DU][Ws1mdPLCgMe] != 0; Ws1mdPLCgMe++)
            if (r8JyMblkt4[jJfLk1DU][Ws1mdPLCgMe] == y0Nv5mLkXCx)
                for (j = Ws1mdPLCgMe -1; j >= 0; j--)
                    if (r8JyMblkt4[jJfLk1DU][j] == qvZ9eIf4) {
                        r8JyMblkt4[jJfLk1DU][Ws1mdPLCgMe] = r8JyMblkt4[jJfLk1DU][j] = 1;
                        break;
                    }
        for (Ws1mdPLCgMe = 0; Ws1mdPLCgMe < 101 && wnNBPJ3xY[jJfLk1DU][Ws1mdPLCgMe] != 0; Ws1mdPLCgMe++)
            printf ("%c", wnNBPJ3xY[jJfLk1DU][Ws1mdPLCgMe]);
        for (Ws1mdPLCgMe = 0; Ws1mdPLCgMe < 101 && r8JyMblkt4[jJfLk1DU][Ws1mdPLCgMe] != 0; Ws1mdPLCgMe++)
            if (r8JyMblkt4[jJfLk1DU][Ws1mdPLCgMe] == qvZ9eIf4)
                ;
            else if (r8JyMblkt4[jJfLk1DU][Ws1mdPLCgMe] == y0Nv5mLkXCx)
                ;
            else
                ;
    }
    return 0;
}

