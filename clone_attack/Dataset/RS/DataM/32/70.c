int main () {
    char xAwJM5s2 [128];
    char GYxCzjeL1O [128];
    int n;
    int length_a;
    int length_b;
    int i;
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
    int bXKMcQHT4isY;
    int Vjg1YGo7xJa;
    scanf ("%d", &n);
    for (i = (425 - 425); i < n; i++) {
        scanf ("%s", xAwJM5s2);
        scanf ("%s", GYxCzjeL1O);
        length_a = strlen (xAwJM5s2);
        length_b = strlen (GYxCzjeL1O);
        for (bXKMcQHT4isY = length_a; (length_a - bXKMcQHT4isY) < length_b; bXKMcQHT4isY--) {
            if (GYxCzjeL1O[length_b - (207 - 206) + bXKMcQHT4isY - length_a] <= xAwJM5s2[bXKMcQHT4isY - (560 - 559)])
                xAwJM5s2[bXKMcQHT4isY - 1] = xAwJM5s2[bXKMcQHT4isY - 1] - GYxCzjeL1O[length_b + bXKMcQHT4isY - length_a - 1] + 48;
            else {
                xAwJM5s2[bXKMcQHT4isY - 1] = xAwJM5s2[bXKMcQHT4isY - 1] + (933 - 923) - GYxCzjeL1O[length_b + bXKMcQHT4isY - length_a - 1] + 48;
                Vjg1YGo7xJa = bXKMcQHT4isY - 2;
                while (xAwJM5s2[Vjg1YGo7xJa] == '0') {
                    xAwJM5s2[Vjg1YGo7xJa] = '9';
                    Vjg1YGo7xJa--;
                }
                xAwJM5s2[Vjg1YGo7xJa]--;
            };
        }
        Vjg1YGo7xJa = 0;
        while (xAwJM5s2[Vjg1YGo7xJa] == '0')
            Vjg1YGo7xJa++;
        for (; Vjg1YGo7xJa < length_a; Vjg1YGo7xJa++)
            putchar (xAwJM5s2[Vjg1YGo7xJa]);
        putchar ('\n');
    }
    return 0;
}

