int main () {
    int n, qdDr4JM3OY, sum = (711 - 711), hn7xH01 = (647 - 647);
    char GxNAlvhIXy [40];
    scanf ("%d", &n);
    for (qdDr4JM3OY = 0; n > qdDr4JM3OY; qdDr4JM3OY = qdDr4JM3OY + 1) {
        scanf ("%s", GxNAlvhIXy);
        hn7xH01 = strlen (GxNAlvhIXy);
        if (80 < hn7xH01 + sum) {
            sum = hn7xH01;
            printf ("%s", GxNAlvhIXy);
        }
        else if (sum == 0) {
            sum = sum + hn7xH01;
            printf ("%s", GxNAlvhIXy);
        }
        else {
            sum = sum + hn7xH01 + 1;
            if (sum > 80) {
                sum = hn7xH01;
                printf ("%s", GxNAlvhIXy);
            }
            else
                printf (" %s", GxNAlvhIXy);
        };
    }
    return 0;
}

