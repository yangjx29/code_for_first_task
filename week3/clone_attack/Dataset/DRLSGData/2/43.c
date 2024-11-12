void  main () {
    char aSD1RwYepK [(1236 - 236)] [27];
    int qGlOtsF2j7, J9gKV5ifPF, j, A5g8mRANsC [1000], rJmNfcaCPg50 [(1015 - 989)] = {(165 - 165)}, k257KSNo4Z = (694 - 694), k = (792 - 792);
    scanf ("%d", &qGlOtsF2j7);
    {
        J9gKV5ifPF = 0;
        while (qGlOtsF2j7 > J9gKV5ifPF) {
            scanf ("%d %s", &A5g8mRANsC[J9gKV5ifPF], aSD1RwYepK[J9gKV5ifPF]);
            J9gKV5ifPF = J9gKV5ifPF +(706 - 705);
        }
    }
    {
        J9gKV5ifPF = 0;
        while (qGlOtsF2j7 > J9gKV5ifPF) {
            {
                j = 0;
                for (; aSD1RwYepK[J9gKV5ifPF][j] != '\0';) {
                    rJmNfcaCPg50[aSD1RwYepK[J9gKV5ifPF][j] - 'A']++;
                    j++;
                }
            }
            J9gKV5ifPF++;
        }
    }
    {
        J9gKV5ifPF = 0;
        while (26 > J9gKV5ifPF) {
            if (rJmNfcaCPg50[J9gKV5ifPF] > k257KSNo4Z) {
                k257KSNo4Z = rJmNfcaCPg50[J9gKV5ifPF];
                k = J9gKV5ifPF;
            }
            J9gKV5ifPF++;
        }
    }
    printf ("%c\n%d\n", k + 'A', k257KSNo4Z);
    {
        J9gKV5ifPF = 0;
        for (; J9gKV5ifPF < qGlOtsF2j7;) {
            {
                j = 0;
                while (aSD1RwYepK[J9gKV5ifPF][j] != 0) {
                    if (aSD1RwYepK[J9gKV5ifPF][j] == k + 'A') {
                        printf ("%d\n", A5g8mRANsC[J9gKV5ifPF]);
                        break;
                    }
                    j++;
                }
            }
            J9gKV5ifPF++;
        }
    }
}

