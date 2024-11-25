int main () {
    int jmLKZp;
    int hZt1Xb;
    int QHVvFNygA [(598 - 498)] [100];
    int PU7C64l;
    int wrAG0RMCQjN;
    int j;
    scanf ("%d %d", &jmLKZp, &hZt1Xb);
    for (wrAG0RMCQjN = (115 - 115); jmLKZp > wrAG0RMCQjN; wrAG0RMCQjN++) {
        for (PU7C64l = 0; hZt1Xb > PU7C64l; PU7C64l = PU7C64l +1) {
            scanf ("%d", &(QHVvFNygA[wrAG0RMCQjN][PU7C64l]));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        };
    }
    for (PU7C64l = 0; PU7C64l < 201; PU7C64l = PU7C64l +1) {
        wrAG0RMCQjN = 0;
        j = PU7C64l;
        while (j >= 0) {
            if (0 <= j && hZt1Xb > j && 0 <= wrAG0RMCQjN && wrAG0RMCQjN < jmLKZp)
                printf ("%d\n", QHVvFNygA[wrAG0RMCQjN][j]);
            wrAG0RMCQjN = wrAG0RMCQjN + 1;
            j--;
        };
    }
    return 0;
}

