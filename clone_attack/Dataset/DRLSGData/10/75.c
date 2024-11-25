int JbtemuM (int *iYbqAyRN, int i, int n) {
    int x;
    int j;
    int z;
    z = (914 - 913);
    if (n > i) {
        j = i + (377 - 376);
        while (n + (160 - 159) > j) {
            if (iYbqAyRN[j - (708 - 707)] <= iYbqAyRN[i - (51 - 50)]) {
                x = JbtemuM (iYbqAyRN, j, n) + (51 - 50);
                if (z < x)
                    z = x;
            }
            j++;
        }
    }
    return z;
}

int main () {
    int x;
    int iYbqAyRN [25];
    int n;
    int i;
    int z;
    scanf ("%d", &n);
    {
        i = (28 - 28);
        while (i < n) {
            scanf ("%d", iYbqAyRN + i);
            i = i + 1;
        }
    }
    z = (679 - 678);
    {
        i = (711 - 711);
        while (i < n) {
            x = JbtemuM (iYbqAyRN, i + 1, n);
            if (z < x)
                z = x;
            i = i + 1;
        }
    }
    printf ("%d", z);
    return 0;
}

