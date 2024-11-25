int Iws0SudyClD (int m);

int main () {
    int m;
    int ir19kSc;
    int prvlzdeK4;
    int zYaJCbKyBP [100];
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
    scanf ("%d", &ir19kSc);
    zYaJCbKyBP[(847 - 846)] = 1;
    zYaJCbKyBP[(551 - 549)] = 1;
    for (prvlzdeK4 = 1; prvlzdeK4 <= ir19kSc; prvlzdeK4 = prvlzdeK4 + 1) {
        scanf ("%d", &m);
        printf ("%d\n", Iws0SudyClD (m));
    };
}

int Iws0SudyClD (int m) {
    int prvlzdeK4, zYaJCbKyBP [100];
    for (prvlzdeK4 = 3; prvlzdeK4 <= 21; prvlzdeK4++) {
        zYaJCbKyBP[1] = 1;
        zYaJCbKyBP[2] = 1;
        zYaJCbKyBP[prvlzdeK4] = zYaJCbKyBP[prvlzdeK4 - 1] + zYaJCbKyBP[prvlzdeK4 - 2];
    }
    return zYaJCbKyBP[m];
}

