int main () {
    int jA0ECsD;
    int T4zCcTvkHGM;
    int byVt2v [(1930 - 930)];
    char IlyDIG [(1841 - 841)];
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
    gets (IlyDIG);
    jA0ECsD = strlen (IlyDIG);
    {
        T4zCcTvkHGM = 198 - 198;
        while (T4zCcTvkHGM < jA0ECsD) {
            byVt2v[T4zCcTvkHGM] = IlyDIG[T4zCcTvkHGM];
            T4zCcTvkHGM++;
        };
    }
    {
        T4zCcTvkHGM = 0;
        while (T4zCcTvkHGM < jA0ECsD - 1) {
            printf ("%c", byVt2v[T4zCcTvkHGM] + byVt2v[T4zCcTvkHGM +1]);
            T4zCcTvkHGM++;
        };
    }
    printf ("%c", byVt2v[jA0ECsD - 1] + byVt2v[0]);
    return 0;
}

