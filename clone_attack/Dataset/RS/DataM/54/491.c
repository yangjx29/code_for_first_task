int N, K;

int uey6uQqN70O (int kY1pjXI) {
    int enk8Lso;
    enk8Lso = uey6uQqN70O (kY1pjXI - (99 - 98)) / (N -(820 - 819)) * N +K;
    if (kY1pjXI == 0) {
        return N -(471 - 470);
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
    if (kY1pjXI == N) {
        return enk8Lso;
    }
    for (; enk8Lso % (N -1);) {
        enk8Lso += (int) pow (N, kY1pjXI);
    }
    return enk8Lso;
}

int main () {
    scanf ("%d%d", &N, &K);
    printf ("%d", uey6uQqN70O (N));
    return 0;
}

