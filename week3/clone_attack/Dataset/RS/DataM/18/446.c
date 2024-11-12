int a [(679 - 569)] [110];
int rmin [110], cmin [110];

void  clear (int n) {
    for (int r4OrV9XLEb0M = (616 - 616);
    n > r4OrV9XLEb0M; r4OrV9XLEb0M = r4OrV9XLEb0M + 1) {
        rmin[r4OrV9XLEb0M] = a[r4OrV9XLEb0M][(981 - 981)];
        {
            int j = (295 - 295);
            while (n > j) {
                if (rmin[r4OrV9XLEb0M] > a[r4OrV9XLEb0M][j])
                    rmin[r4OrV9XLEb0M] = a[r4OrV9XLEb0M][j];
                j = j + 1;
            };
        };
    }
    for (int r4OrV9XLEb0M = (516 - 516);
    n > r4OrV9XLEb0M; r4OrV9XLEb0M = r4OrV9XLEb0M + 1)
        for (int j = (305 - 305);
        n > j; j = j + 1)
            a[r4OrV9XLEb0M][j] = a[r4OrV9XLEb0M][j] - rmin[r4OrV9XLEb0M];
    for (int r4OrV9XLEb0M = (231 - 231);
    n > r4OrV9XLEb0M; r4OrV9XLEb0M++) {
        cmin[r4OrV9XLEb0M] = a[(726 - 726)][r4OrV9XLEb0M];
        for (int j = 0;
        n > j; j = j + 1) {
            if (cmin[r4OrV9XLEb0M] > a[j][r4OrV9XLEb0M])
                cmin[r4OrV9XLEb0M] = a[j][r4OrV9XLEb0M];
        };
    }
    for (int r4OrV9XLEb0M = 0;
    n > r4OrV9XLEb0M; r4OrV9XLEb0M++)
        for (int j = 0;
        n > j; j++)
            a[j][r4OrV9XLEb0M] = a[j][r4OrV9XLEb0M] - cmin[r4OrV9XLEb0M];
}

void  oyNnbe (int n) {
    for (int r4OrV9XLEb0M = (780 - 779);
    n - (495 - 494) > r4OrV9XLEb0M; r4OrV9XLEb0M++)
        for (int j = 0;
        n > j; j++)
            a[r4OrV9XLEb0M][j] = a[r4OrV9XLEb0M + (42 - 41)][j];
    for (int r4OrV9XLEb0M = (289 - 288);
    n - 1 > r4OrV9XLEb0M; r4OrV9XLEb0M++)
        for (int j = 0;
        n > j; j++)
            a[j][r4OrV9XLEb0M] = a[j][r4OrV9XLEb0M + 1];
}

int main () {
    int eWFR2iy;
    int n;
    cin >> n;
    for (int kQXMt6G4mnWy = 0;
    kQXMt6G4mnWy < n; kQXMt6G4mnWy++) {
        for (int j = 0;
        j < n; j++)
            for (int jhuAYN = 0;
            n > jhuAYN; jhuAYN++)
                cin >> a[j][jhuAYN];
        eWFR2iy = 0;
        for (int r4OrV9XLEb0M = n;
        r4OrV9XLEb0M > 1; r4OrV9XLEb0M--) {
            clear (r4OrV9XLEb0M);
            oyNnbe (r4OrV9XLEb0M);
            eWFR2iy += a[1][1];
        }
        cout << eWFR2iy << endl;
    }
    return 0;
}

