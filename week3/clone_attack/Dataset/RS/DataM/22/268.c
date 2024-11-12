int GIJ3Uzs6GqT [300] = {0};
int LuUvfp6;

void  main () {
    int rS1w5mpi7B;
    rS1w5mpi7B = 0;
    char o1iTnSJcmU2;
    while ((o1iTnSJcmU2 = getchar ()) != '\n') {
        if (o1iTnSJcmU2 >= '0' && o1iTnSJcmU2 <= '9')
            GIJ3Uzs6GqT[rS1w5mpi7B] = 10 * GIJ3Uzs6GqT[rS1w5mpi7B] + o1iTnSJcmU2 - '0';
        else
            rS1w5mpi7B = rS1w5mpi7B + 1;
    }
    LuUvfp6 = rS1w5mpi7B + 1;
    if (LuUvfp6 == 1)
        ;
    else {
        int ON9mSis = 0;
        {
            rS1w5mpi7B = 0;
            while (rS1w5mpi7B < LuUvfp6) {
                if (GIJ3Uzs6GqT[rS1w5mpi7B] > ON9mSis)
                    ON9mSis = GIJ3Uzs6GqT[rS1w5mpi7B];
                rS1w5mpi7B = rS1w5mpi7B + 1;
            };
        }
        for (rS1w5mpi7B = 0; rS1w5mpi7B < LuUvfp6; rS1w5mpi7B = rS1w5mpi7B + 1) {
            if (GIJ3Uzs6GqT[rS1w5mpi7B] == ON9mSis)
                GIJ3Uzs6GqT[rS1w5mpi7B] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
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
        ON9mSis = 0;
        for (rS1w5mpi7B = 0; rS1w5mpi7B < LuUvfp6; rS1w5mpi7B = rS1w5mpi7B + 1) {
            if (GIJ3Uzs6GqT[rS1w5mpi7B] > ON9mSis)
                ON9mSis = GIJ3Uzs6GqT[rS1w5mpi7B];
        }
        if (ON9mSis != 0)
            printf ("%d", ON9mSis);
        else
            ;
    };
}

