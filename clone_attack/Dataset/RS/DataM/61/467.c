int GG4UzLaM9w6S (int n);

int main () {
    int n;
    int b;
    int Aahf0y;
    int QJnjrB;
    scanf ("%d", &Aahf0y);
    {
        QJnjrB = 0;
        while (QJnjrB < Aahf0y) {
            QJnjrB++;
            scanf ("%d", &n);
            b = GG4UzLaM9w6S (n);
            printf ("%d\n", b);
        };
    }
    return 0;
}

int GG4UzLaM9w6S (int n) {
    int A56GIkCM [100];
    int i;
    A56GIkCM[(98 - 97)] = (816 - 815);
    A56GIkCM[2] = 1;
    A56GIkCM[(630 - 627)] = 2;
    if (n > (663 - 660)) {
        {
            i = 3;
            while (n >= i) {
                A56GIkCM[i] = A56GIkCM[i - 1] + A56GIkCM[i - 2];
                i++;
            };
        }
        return A56GIkCM[n];
    }
    if (n == 1 || n == 1) {
        return 1;
    };
}

