int main () {
    char nQXq4V [300];
    int zn5eIN9C;
    int b;
    int HyDB23msqel;
    int QYszgw;
    int k;
    int m;
    int JXY7g5P;
    scanf ("%d", &JXY7g5P);
    {
        QYszgw = 0;
        while (QYszgw < JXY7g5P) {
            scanf ("%s", nQXq4V);
            for (k = 0; k < strlen (nQXq4V); k = k + 1) {
                switch (nQXq4V[k]) {
                case 'A' :
                    printf ("T");
                    break;
                case 'T' :
                    printf ("A");
                    break;
                case 'C' :
                    printf ("G");
                    break;
                case 'G' :
                    printf ("C");
                    break;
                };
            }
            QYszgw = QYszgw +1;
            printf ("\n");
        };
    }
    return 0;
}

