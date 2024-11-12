int main () {
    int GS0w6o, i, HyDqUQ, max;
    int height [(380 - 355)];
    int amount [25] = {0};
    amount[GS0w6o -1] = 1;
    scanf ("%d", &GS0w6o);
    {
        i = 0;
        while (i < GS0w6o -(950 - 949)) {
            scanf ("%d ", &height[i]);
            i++;
        };
    }
    scanf ("%d", &height[GS0w6o -1]);
    {
        i = GS0w6o -2;
        while (i >= 0) {
            max = 0;
            {
                HyDqUQ = i;
                while (HyDqUQ < GS0w6o) {
                    if (amount[HyDqUQ] > max && height[HyDqUQ] <= height[i]) {
                        max = amount[HyDqUQ];
                    }
                    HyDqUQ++;
                };
            }
            amount[i] = max + 1;
            i--;
        };
    }
    {
        i = 0;
        while (i < GS0w6o) {
            if (amount[i] > max) {
                max = amount[i];
            }
            i++;
        };
    }
    printf ("%d\n", max);
    return 0;
}

