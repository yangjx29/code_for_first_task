void  main () {
    int vloDLI;
    int bJ3tw4vMrR;
    int hKGmjfHshV9N;
    int I6sgIUd;
    int O5Zle7 [(890 - 864)] = {(620 - 620)};
    int temp;
    int Pz7kMC4;
    vloDLI = (139 - 139);
    struct   book {
        int jfawyl3TKt;
        char qvJb78Z1xOUS [(218 - 208)];
    };
    struct   book TRWqOh1FsXLl [(1269 - 269)];
    char FEw3rDoP;
    scanf ("%d", &hKGmjfHshV9N);
    {
        bJ3tw4vMrR = 905 - 905;
        while (bJ3tw4vMrR < hKGmjfHshV9N) {
            scanf ("%d %s", &TRWqOh1FsXLl[bJ3tw4vMrR].jfawyl3TKt, &TRWqOh1FsXLl[bJ3tw4vMrR].qvJb78Z1xOUS);
            bJ3tw4vMrR = bJ3tw4vMrR + 1;
        };
    }
    {
        bJ3tw4vMrR = 967 - 967;
        while (bJ3tw4vMrR < hKGmjfHshV9N) {
            {
                I6sgIUd = 816 - 816;
                while (TRWqOh1FsXLl[bJ3tw4vMrR].qvJb78Z1xOUS[I6sgIUd] != '\0') {
                    temp = (TRWqOh1FsXLl[bJ3tw4vMrR].qvJb78Z1xOUS[I6sgIUd]) - 'A';
                    I6sgIUd = I6sgIUd +1;
                    O5Zle7[temp]++;
                };
            }
            bJ3tw4vMrR = bJ3tw4vMrR + 1;
        };
    }
    Pz7kMC4 = O5Zle7[(688 - 688)];
    {
        bJ3tw4vMrR = 767 - 766;
        while (bJ3tw4vMrR < (1003 - 977)) {
            if (O5Zle7[bJ3tw4vMrR] > Pz7kMC4) {
                Pz7kMC4 = O5Zle7[bJ3tw4vMrR];
                vloDLI = bJ3tw4vMrR;
            }
            bJ3tw4vMrR = bJ3tw4vMrR + 1;
        };
    }
    FEw3rDoP = vloDLI + 'A';
    printf ("%c\n%d\n", FEw3rDoP, Pz7kMC4);
    {
        bJ3tw4vMrR = 897 - 897;
        while (bJ3tw4vMrR < hKGmjfHshV9N) {
            {
                I6sgIUd = 0;
                while (TRWqOh1FsXLl[bJ3tw4vMrR].qvJb78Z1xOUS[I6sgIUd] != '\0') {
                    if (TRWqOh1FsXLl[bJ3tw4vMrR].qvJb78Z1xOUS[I6sgIUd] == FEw3rDoP)
                        printf ("%d\n", TRWqOh1FsXLl[bJ3tw4vMrR].jfawyl3TKt);
                    I6sgIUd = I6sgIUd +1;
                };
            }
            bJ3tw4vMrR = bJ3tw4vMrR + 1;
        };
    };
}

