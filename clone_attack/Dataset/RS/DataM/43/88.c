int iszhishu (int bViveE) {
    int i, vedZscG = 0;
    {
        i = 2;
        while (i < bViveE) {
            if (bViveE % i == 0) {
                vedZscG = vedZscG + 1;
            }
            i = i + 1;
        };
    }
    if (vedZscG == 0)
        return 1;
    else
        return 0;
}

int main () {
    int m;
    int i;
    scanf ("%d", &m);
    {
        i = 3;
        while (i <= m / 2) {
            if (iszhishu (i) && iszhishu (m - i))
                printf ("%d %d\n", i, m - i);
            i++;
        };
    }
    return 0;
}

