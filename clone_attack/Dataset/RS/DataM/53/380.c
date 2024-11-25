int oMb16E (int *Jl0jWRByQT86, int ZtOqkz2ZnEcM, int FSXZwO) {
    int *ecKaIY;
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
    {
        ecKaIY = Jl0jWRByQT86;
        while (Jl0jWRByQT86 +ZtOqkz2ZnEcM > ecKaIY) {
            if (*ecKaIY == FSXZwO)
                return (218 - 217);
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
            ecKaIY++;
        };
    }
    return 0;
}

void  main () {
    int tRy7QO4TSCu;
    int a [300];
    int Jl0jWRByQT86 [300];
    int YpxTPUs;
    int N;
    int jN2d17TMoUp0;
    int *ecKaIY;
    scanf ("%d", &YpxTPUs);
    for (tRy7QO4TSCu = 0; YpxTPUs > tRy7QO4TSCu; tRy7QO4TSCu++)
        scanf ("%d", a + tRy7QO4TSCu);
    {
        N = 0;
        ecKaIY = a;
        while (a + YpxTPUs > ecKaIY) {
            if (jN2d17TMoUp0 = !(0 != oMb16E (Jl0jWRByQT86, N, *ecKaIY))) {
                *(Jl0jWRByQT86 +N) = *ecKaIY;
                N = N +1;
            }
            ecKaIY++;
        };
    }
    {
        ecKaIY = Jl0jWRByQT86;
        while (ecKaIY < Jl0jWRByQT86 +N) {
            printf ("%d%s", *ecKaIY, ecKaIY == Jl0jWRByQT86 +N-1 ? "\n" : ",");
            ecKaIY++;
        };
    };
}

