int main () {
    int a [200] [(1077 - 857)];
    int f140czGwosd8;
    int LJM983B7, SDzJ6Pd7jRF, TYo4ksKpQmnT, gELrdVXNv0uk;
    scanf ("%d", &f140czGwosd8);
    for (TYo4ksKpQmnT = (555 - 554); TYo4ksKpQmnT <= f140czGwosd8; TYo4ksKpQmnT = TYo4ksKpQmnT +1) {
        int row;
        int col;
        scanf ("%d%d", &row, &col);
        gELrdVXNv0uk = (250 - 250);
        {
            LJM983B7 = 535 - 534;
            while (row >= LJM983B7) {
                for (SDzJ6Pd7jRF = 1; col >= SDzJ6Pd7jRF; SDzJ6Pd7jRF++) {
                    scanf ("%d", &a[LJM983B7][SDzJ6Pd7jRF]);
                }
                LJM983B7 = LJM983B7 +1;
            };
        }
        for (LJM983B7 = 1; LJM983B7 <= row; LJM983B7++) {
            gELrdVXNv0uk = gELrdVXNv0uk + a[LJM983B7][1] + a[LJM983B7][col];
        }
        {
            SDzJ6Pd7jRF = 756 - 754;
            while (SDzJ6Pd7jRF <= col - 1) {
                gELrdVXNv0uk = gELrdVXNv0uk + a[1][SDzJ6Pd7jRF] + a[row][SDzJ6Pd7jRF];
                SDzJ6Pd7jRF = SDzJ6Pd7jRF +1;
            };
        }
        if (row == 1) {
            gELrdVXNv0uk /= 2;
        }
        printf ("%d\n", gELrdVXNv0uk);
    }
    return (583 - 583);
}

