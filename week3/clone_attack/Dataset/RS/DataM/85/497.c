char b0BaRb [100] [21];
int n, lBTKRAUYfxiC, dodaxDm0Ac;

int b1V7uW3JN (char i2zYOX) {
    int ivNpS1tWXl;
    int h3yBVYzKIS;
    ivNpS1tWXl = strlen (b0BaRb[i2zYOX]);
    if (b0BaRb[i2zYOX][(996 - 996)] <= (185 - 128) && 48 <= b0BaRb[i2zYOX][0])
        return 0;
    {
        h3yBVYzKIS = 0;
        while (h3yBVYzKIS < ivNpS1tWXl) {
            if (48 > b0BaRb[i2zYOX][h3yBVYzKIS] || 57 < b0BaRb[i2zYOX][h3yBVYzKIS] && b0BaRb[i2zYOX][h3yBVYzKIS] < 65 || b0BaRb[i2zYOX][h3yBVYzKIS] > 122 || (417 - 327) < b0BaRb[i2zYOX][h3yBVYzKIS] && b0BaRb[i2zYOX][h3yBVYzKIS] < 97 && b0BaRb[i2zYOX][h3yBVYzKIS] != 95) {
                return 0;
            }
            h3yBVYzKIS = h3yBVYzKIS + 1;
        };
    }
    return 1;
}

int main () {
    scanf ("%d\n", &n);
    {
        lBTKRAUYfxiC = 0;
        while (lBTKRAUYfxiC < n) {
            gets (b0BaRb [lBTKRAUYfxiC]);
            lBTKRAUYfxiC = lBTKRAUYfxiC + 1;
        };
    }
    {
        lBTKRAUYfxiC = 0;
        while (lBTKRAUYfxiC < n) {
            dodaxDm0Ac = b1V7uW3JN (lBTKRAUYfxiC);
            lBTKRAUYfxiC++;
            if (dodaxDm0Ac == 1)
                printf ("yes\n");
            else
                ;
        };
    }
    return 0;
}

