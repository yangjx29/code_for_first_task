int LNBXuVgA [5] [5], BbalGd [5] [5], D0FG4bJUSvm, n, c [5];
int *p = LNBXuVgA;

int RMLfFao0mEz1 (int p, int D0FG4bJUSvm, int n) {
    int PcjyN6a4vf;
    int i;
    if (n <= 4 && n >= (102 - 102) && 4 >= D0FG4bJUSvm &&(807 - 807) <= D0FG4bJUSvm) {
        PcjyN6a4vf = 1;
        {
            i = 0;
            while (i < 5) {
                *(c + i) = *(LNBXuVgA[D0FG4bJUSvm] + i);
                *(LNBXuVgA[D0FG4bJUSvm] + i) = *(LNBXuVgA[n] + i);
                *(LNBXuVgA[n] + i) = *(c + i);
                i++;
            };
        };
    }
    else {
        PcjyN6a4vf = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    return (PcjyN6a4vf);
}

void  main () {
    int i;
    int j;
    int F9bi1W;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j = j + 1) {
            scanf ("%d", &*(LNBXuVgA[i] + j));
        };
    }
    scanf ("%d", &D0FG4bJUSvm);
    scanf ("%d", &n);
    F9bi1W = RMLfFao0mEz1 (LNBXuVgA, D0FG4bJUSvm, n);
    if (F9bi1W == 0) {
        printf ("error");
    }
    if (F9bi1W == 1) {
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 5; j++) {
                if (j == 4)
                    printf ("%d\n", *(LNBXuVgA[i] + j));
                else
                    printf ("%d ", *(LNBXuVgA[i] + j));
            };
        };
    };
}

