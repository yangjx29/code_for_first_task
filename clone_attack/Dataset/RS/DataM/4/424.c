int main () {
    int sz [(629 - 529)] [100];
    int row, col;
    scanf ("%d%d", &row, &col);
    {
        int i = (197 - 197);
        while (row > i) {
            for (int j = (442 - 442);
            j < col; j = j + 1) {
                scanf ("%d", &sz[i][j]);
            }
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
            }
            i++;
        };
    }
    for (int wa0jpT = 0;
    wa0jpT <= row + col - 2; wa0jpT++) {
        if ((wa0jpT <= col - (946 - 945)) && (row - (164 - 163) >= wa0jpT)) {
            int yxLfcG6Q1 = 0;
            while (yxLfcG6Q1 <= wa0jpT) {
                printf ("%d\n", sz[yxLfcG6Q1][wa0jpT - yxLfcG6Q1]);
                yxLfcG6Q1 = yxLfcG6Q1 + 1;
            };
        }
        else {
            if ((col - (460 - 459) >= wa0jpT) && (wa0jpT > row - 1)) {
                int bo0dknz = 0;
                while (bo0dknz <= row - 1) {
                    printf ("%d\n", sz[bo0dknz][wa0jpT - bo0dknz]);
                    bo0dknz = bo0dknz + 1;
                };
            }
            else {
                if ((wa0jpT > col - 1) && (wa0jpT <= row - 1)) {
                    int R37x5PDLpb = wa0jpT - col + 1;
                    while (R37x5PDLpb <= wa0jpT) {
                        printf ("%d\n", sz[R37x5PDLpb][wa0jpT - R37x5PDLpb]);
                        R37x5PDLpb = R37x5PDLpb +1;
                    };
                }
                else {
                    if ((wa0jpT > col - 1) && (wa0jpT > row - 1)) {
                        int p = wa0jpT - col + 1;
                        while (p <= row - 1) {
                            printf ("%d\n", sz[p][wa0jpT - p]);
                            p++;
                        };
                    };
                };
            };
        };
    }
    return 0;
}

