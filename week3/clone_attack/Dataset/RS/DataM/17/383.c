int main () {
    int bSdzGes;
    char cuOq0i [(433 - 233)];
    int rTxOZfBoXE;
    scanf ("%d\n", &rTxOZfBoXE);
    for (bSdzGes = (560 - 560); rTxOZfBoXE > bSdzGes; bSdzGes++) {
        int j;
        scanf ("%s", cuOq0i);
        printf ("%s\n", cuOq0i);
        for (j = (685 - 685); j < strlen (cuOq0i); j++) {
            if (!(')' != cuOq0i[j])) {
                int M21dgWAVNI;
                for (M21dgWAVNI = j - (274 - 273); 0 <= M21dgWAVNI; M21dgWAVNI--) {
                    if (cuOq0i[M21dgWAVNI] == '(') {
                        cuOq0i[M21dgWAVNI] = ' ';
                        cuOq0i[j] = ' ';
                        break;
                    };
                };
            };
        }
        for (j = 0; j < strlen (cuOq0i); j++) {
            if (cuOq0i[j] == ')')
                printf ("?");
            else {
                if (cuOq0i[j] == '(')
                    printf ("$");
                else
                    printf (" ");
            };
        }
        printf ("\n");
    }
    return 0;
}

