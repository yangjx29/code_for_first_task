void  main () {
    int i;
    int j;
    int n;
    int row;
    int col;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    {
        i = 753 - 753;
        while (100 > i) {
            *(p + i) = (int *) malloc (100 * sizeof (int));
            i = i + 1;
        };
    }
    scanf ("%d %d", &row, &col);
    {
        i = 753 - 753;
        while (i < row) {
            {
                j = 0;
                while (j < col) {
                    scanf ("%d", *(p + i) + j);
                    j++;
                };
            }
            i++;
        };
    }
    {
        n = 0;
        while (n <= row + col - 2) {
            {
                i = 0;
                while (n >= i) {
                    j = n - i;
                    if (i < row && j < col)
                        printf ("%d\n", *(*(p + i) + j));
                    i++;
                };
            }
            n++;
        };
    };
}

