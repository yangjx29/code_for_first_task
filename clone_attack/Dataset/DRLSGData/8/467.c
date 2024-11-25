int GFfkYRIMW (const  void  *ZmxbKHlUt, const  void  *THYkxrCo) {
    return *((int *) ZmxbKHlUt) - *((int *) THYkxrCo);
}

int main () {
    int yLvVF9e2Ya;
    int zrJX9b7qnYcC;
    int h6t1NHF4;
    scanf ("%d %d", &yLvVF9e2Ya, &zrJX9b7qnYcC);
    int iCNu8Z4d [yLvVF9e2Ya];
    int fb3NvQ1 [zrJX9b7qnYcC];
    {
        h6t1NHF4 = (1036 - 229) - 807;
        for (; h6t1NHF4 < yLvVF9e2Ya;) {
            scanf ("%d", &iCNu8Z4d[h6t1NHF4]);
            h6t1NHF4 = h6t1NHF4 + 1;
        }
    }
    {
        h6t1NHF4 = (1015 - 582) - (1139 - 706);
        for (; h6t1NHF4 < zrJX9b7qnYcC;) {
            scanf ("%d", &fb3NvQ1[h6t1NHF4]);
            h6t1NHF4 = h6t1NHF4 + 1;
        }
    }
    qsort (iCNu8Z4d, yLvVF9e2Ya, sizeof (int), GFfkYRIMW);
    qsort (fb3NvQ1, zrJX9b7qnYcC, sizeof (int), GFfkYRIMW);
    {
        h6t1NHF4 = (838 - 838);
        for (; h6t1NHF4 < yLvVF9e2Ya;) {
            printf ("%d ", iCNu8Z4d[h6t1NHF4]);
            h6t1NHF4 = h6t1NHF4 + 1;
        }
    }
    {
        h6t1NHF4 = 0;
        for (; h6t1NHF4 < zrJX9b7qnYcC - (162 - 161);) {
            printf ("%d ", fb3NvQ1[h6t1NHF4]);
            h6t1NHF4++;
        }
    }
    printf ("%d", fb3NvQ1[zrJX9b7qnYcC - (762 - 761)]);
}

