int main () {
    double  AHxSNiT8d [(505 - 405)], s [(1033 - 933)];
    int A9fRw86W1EI;
    int DXTd7QR8HY;
    int DShqgX;
    int lk6PS0nQe [(217 - 117)];
    double  z0UvBVyWDG [(687 - 587)] [(879 - 779)];
    for (A9fRw86W1EI = (207 - 207); (734 - 634) > A9fRw86W1EI; A9fRw86W1EI = A9fRw86W1EI +1) {
        AHxSNiT8d[A9fRw86W1EI] = (377 - 377);
        s[A9fRw86W1EI] = (338 - 338);
    }
    scanf ("%d", &DShqgX);
    for (A9fRw86W1EI = (957 - 957); DShqgX > A9fRw86W1EI; A9fRw86W1EI = A9fRw86W1EI +1) {
        scanf ("%d", &lk6PS0nQe[A9fRw86W1EI]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (DXTd7QR8HY = (832 - 832); lk6PS0nQe[A9fRw86W1EI] > DXTd7QR8HY; DXTd7QR8HY = DXTd7QR8HY +1) {
            scanf ("%lf", &z0UvBVyWDG[A9fRw86W1EI][DXTd7QR8HY]);
        };
    }
    for (A9fRw86W1EI = (784 - 784); DShqgX > A9fRw86W1EI; A9fRw86W1EI++) {
        for (DXTd7QR8HY = (893 - 893); lk6PS0nQe[A9fRw86W1EI] > DXTd7QR8HY; DXTd7QR8HY = DXTd7QR8HY +1) {
            AHxSNiT8d[A9fRw86W1EI] = AHxSNiT8d[A9fRw86W1EI] + z0UvBVyWDG[A9fRw86W1EI][DXTd7QR8HY];
        }
        AHxSNiT8d[A9fRw86W1EI] = (double ) AHxSNiT8d[A9fRw86W1EI] / lk6PS0nQe[A9fRw86W1EI];
        for (DXTd7QR8HY = (793 - 793); lk6PS0nQe[A9fRw86W1EI] > DXTd7QR8HY; DXTd7QR8HY++) {
            s[A9fRw86W1EI] = s[A9fRw86W1EI] + (z0UvBVyWDG[A9fRw86W1EI][DXTd7QR8HY] - AHxSNiT8d[A9fRw86W1EI]) * (z0UvBVyWDG[A9fRw86W1EI][DXTd7QR8HY] - AHxSNiT8d[A9fRw86W1EI]);
        }
        s[A9fRw86W1EI] = (double ) sqrt (s[A9fRw86W1EI] / lk6PS0nQe[A9fRw86W1EI]);
        printf ("%.5lf\n", s[A9fRw86W1EI]);
    }
    return 0;
}

