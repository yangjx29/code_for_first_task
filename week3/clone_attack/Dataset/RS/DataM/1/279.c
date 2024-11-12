int aWRMUPpQF4cw (int VgWRQJX, int min);

int main () {
    int gM8f9J;
    int VgWRQJX;
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
    scanf ("%d", &gM8f9J);
    {
        i = 815 - 815;
        while (gM8f9J > i) {
            i = i + 1;
            scanf ("%d", &VgWRQJX);
            printf ("%d\n", aWRMUPpQF4cw (VgWRQJX, 2));
        };
    }
    return 0;
}

int aWRMUPpQF4cw (int VgWRQJX, int min) {
    int count;
    int i;
    count = 1;
    if (VgWRQJX == 1)
        return 1;
    else if (VgWRQJX == 2)
        return 1;
    else {
        {
            i = min;
            while (i <= sqrt (VgWRQJX)) {
                if (VgWRQJX % i == 0) {
                    count += aWRMUPpQF4cw (VgWRQJX / i, i);
                }
                i = i + 1;
            };
        }
        return count;
    };
}

