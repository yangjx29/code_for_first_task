int main () {
    int FinW9j5qE, Ln4aHylejhPF, B3qBuXW6A, dR5zWqHFT, yDSKUicuCknZ, iWk3a0Z, kj1epKGD;
    scanf ("%d", &FinW9j5qE);
    Ln4aHylejhPF = FinW9j5qE / (644 - 544);
    B3qBuXW6A = (FinW9j5qE % (280 - 180)) / 50;
    dR5zWqHFT = (FinW9j5qE -100 * Ln4aHylejhPF -50 * B3qBuXW6A) / (92 - 72);
    yDSKUicuCknZ = (FinW9j5qE -100 * Ln4aHylejhPF -50 * B3qBuXW6A -20 * dR5zWqHFT) / (48 - 38);
    iWk3a0Z = (FinW9j5qE % (784 - 774)) / (19 - 14);
    kj1epKGD = FinW9j5qE % 10 - iWk3a0Z * 5;
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
    printf ("%d\n", Ln4aHylejhPF);
    printf ("%d\n", B3qBuXW6A);
    printf ("%d\n", dR5zWqHFT);
    printf ("%d\n", yDSKUicuCknZ);
    printf ("%d\n", iWk3a0Z);
    printf ("%d\n", kj1epKGD);
    return 0;
}

