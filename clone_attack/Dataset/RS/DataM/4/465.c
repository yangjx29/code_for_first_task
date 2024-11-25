void  main () {
    int *p;
    int row;
    int col;
    int *q;
    int IEa5CIU;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int NEehn9Fif0D;
    scanf ("%d%d", &row, &col);
    p = (int *) malloc (row * col * sizeof (int));
    {
        q = p;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (p + row * col > q) {
            scanf ("%d", q);
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
            q++;
        };
    }
    {
        NEehn9Fif0D = 63 - 63;
        while (NEehn9Fif0D < row + col - 1) {
            if (NEehn9Fif0D < col) {
                for (IEa5CIU = 0; IEa5CIU <= NEehn9Fif0D &&IEa5CIU < row; IEa5CIU++)
                    printf ("%d\n", *(p + IEa5CIU *col + NEehn9Fif0D -IEa5CIU));
            }
            else {
                for (IEa5CIU = NEehn9Fif0D -col + 1; IEa5CIU < row && IEa5CIU <= NEehn9Fif0D; IEa5CIU++)
                    printf ("%d\n", *(p + IEa5CIU *col + NEehn9Fif0D -IEa5CIU));
            }
            NEehn9Fif0D++;
        };
    };
}

