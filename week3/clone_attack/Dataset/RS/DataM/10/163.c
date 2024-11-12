int main () {
    int r4OMih8ZP0N;
    int yIoim40;
    int vtVUzZy6FR [(144 - 114)] = {(470 - 470)};
    int XftzA6bo [30] = {(696 - 695)};
    int ihm37dua;
    int j;
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
    yIoim40 = 0;
    scanf ("%d", &r4OMih8ZP0N);
    for (ihm37dua = (467 - 466); ihm37dua <= r4OMih8ZP0N; ihm37dua = ihm37dua + 1) {
        scanf ("%d", &vtVUzZy6FR[ihm37dua]);
    }
    for (ihm37dua = 0; ihm37dua < 30; ihm37dua++) {
        XftzA6bo[ihm37dua] = 1;
    }
    for (ihm37dua = r4OMih8ZP0N; ihm37dua >= 1; ihm37dua--) {
        j = r4OMih8ZP0N;
        while (j > ihm37dua) {
            if (vtVUzZy6FR[j] <= vtVUzZy6FR[ihm37dua]) {
                if (XftzA6bo[j] + 1 > XftzA6bo[ihm37dua])
                    XftzA6bo[ihm37dua] = XftzA6bo[j] + 1;
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
            j--;
        };
    }
    for (ihm37dua = 1; ihm37dua <= r4OMih8ZP0N; ihm37dua++) {
        if (XftzA6bo[ihm37dua] > yIoim40)
            yIoim40 = XftzA6bo[ihm37dua];
    }
    printf ("%d", yIoim40);
    return 0;
}

