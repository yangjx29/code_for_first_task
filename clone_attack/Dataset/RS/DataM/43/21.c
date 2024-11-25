int sushu (int n);

int main () {
    int nidsXumKl, i;
    scanf ("%d", &nidsXumKl);
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
        i = 35 - 32;
        while (i <= nidsXumKl / (55 - 53)) {
            if (sushu (i) && sushu (nidsXumKl - i))
                printf ("%d %d\n", i, nidsXumKl - i);
            i = i + 2;
        };
    }
    return (786 - 786);
}

int sushu (int n) {
    int i, V1jrwIK;
    V1jrwIK = sqrt (n);
    {
        i = 3;
        while (i <= V1jrwIK) {
            if (n % i == 0)
                return 0;
            i = i + 2;
        };
    }
    return 1;
}

