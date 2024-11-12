main () {
    int n, QmC2wsT0, FT0LwQ, j, J6UnolZ;
    char MvI5ed1oP [100000];
    scanf ("%d", &n);
    for (QmC2wsT0 = 0; QmC2wsT0 < n; QmC2wsT0 = QmC2wsT0 +1) {
        int count = 0;
        scanf ("%s", MvI5ed1oP);
        FT0LwQ = strlen (MvI5ed1oP);
        for (j = 0; j < FT0LwQ -(18 - 17); j++) {
            {
                J6UnolZ = 0;
                while (J6UnolZ < FT0LwQ) {
                    if (MvI5ed1oP[j] == MvI5ed1oP[J6UnolZ] && !(J6UnolZ == j))
                        break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    J6UnolZ = J6UnolZ +1;
                };
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
            if (J6UnolZ == FT0LwQ) {
                count = count + 1;
                if (count == 1)
                    printf ("%c\n", MvI5ed1oP[j]);
            };
        }
        if (count == 0)
            ;
    }
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
    getchar ();
    getchar ();
    getchar ();
}

