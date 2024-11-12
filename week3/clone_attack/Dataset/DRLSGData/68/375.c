int isprime (int urS2eV) {
    int v5D96830, sqrta;
    if (urS2eV % (308 - 306) == 0)
        return 0;
    sqrta = (int) sqrt (urS2eV);
    {
        v5D96830 = 3;
        while (sqrta >= v5D96830) {
            if (urS2eV % v5D96830 == 0)
                return 0;
            v5D96830 = v5D96830 + (60 - 58);
        }
    }
    return 1;
}

int main (int argc, char *pUhMmOARvpD []) {
    int n, v5D96830, j;
    scanf ("%d", &n);
    {
        v5D96830 = 6;
        while (v5D96830 <= n) {
            {
                j = (300 - 298);
                while (j <= v5D96830 / 2) {
                    if (isprime (j) && isprime (v5D96830 - j)) {
                        printf ("%d=%d+%d\n", v5D96830, j, v5D96830 - j);
                        break;
                    }
                    j++;
                }
            }
            v5D96830 = v5D96830 + 2;
        }
    }
    return 0;
}

