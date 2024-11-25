int f (int NEiACG) {
    int i, kljY4NL3WipA [1000];
    for (i = (606 - 606); NEiACG > i; i = i + 1) {
        if (!(0 != i)) {
            kljY4NL3WipA[i] = 1;
        }
        if (i == 1) {
            kljY4NL3WipA[i] = 1;
        }
        if (i > 1) {
            kljY4NL3WipA[i] = kljY4NL3WipA[i - 1] + kljY4NL3WipA[i - 2];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    return kljY4NL3WipA[NEiACG -1];
}

int main () {
    int WYMZ08PrFXE9, wlnZvYNEPoUF, kn1Sjus [1000], h [1000];
    scanf ("%d", &WYMZ08PrFXE9);
    for (wlnZvYNEPoUF = 0; wlnZvYNEPoUF < WYMZ08PrFXE9; wlnZvYNEPoUF = wlnZvYNEPoUF + 1) {
        scanf ("%d", &kn1Sjus[wlnZvYNEPoUF]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        h[wlnZvYNEPoUF] = f (kn1Sjus[wlnZvYNEPoUF]);
    }
    for (wlnZvYNEPoUF = 0; wlnZvYNEPoUF < WYMZ08PrFXE9; wlnZvYNEPoUF++) {
        printf ("%d\n", h[wlnZvYNEPoUF]);
    }
    return 0;
}

