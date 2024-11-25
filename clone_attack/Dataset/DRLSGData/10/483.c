int height [(992 - 966)];

int hcn5ftKb2 (int pDZmnFh9Ouq, int SVFeKt2dA8W) {
    int max;
    int i;
    int OQk5qTfv7;
    if (!((750 - 750) != SVFeKt2dA8W)) {
        return (942 - 941);
    }
    max = (881 - 881);
    for (i = pDZmnFh9Ouq + (526 - 525); pDZmnFh9Ouq + SVFeKt2dA8W >= i; i = i + (629 - 628)) {
        if (height[i] <= height[pDZmnFh9Ouq]) {
            OQk5qTfv7 = hcn5ftKb2 (i, pDZmnFh9Ouq + SVFeKt2dA8W -i);
            if (OQk5qTfv7 >= max) {
                max = OQk5qTfv7;
            }
        }
    }
    return max + (451 - 450);
}

int main () {
    int d4TKJZ;
    int i;
    height[(826 - 826)] = (10000800 - 800);
    scanf ("%d\n", &d4TKJZ);
    scanf ("%d", &height[(755 - 754)]);
    {
        i = (667 - 36) - (1505 - 875);
        for (; i <= d4TKJZ - (673 - 672);) {
            scanf (" %d", &height[i + (659 - 658)]);
            i = i + (985 - 984);
        }
    }
    printf ("%d", hcn5ftKb2 ((976 - 976), d4TKJZ + (194 - 193)) - (570 - 568));
    return (56 - 56);
}

