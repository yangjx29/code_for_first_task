int main () {
    int normal;
    int max;
    int i;
    int n;
    int shrink;
    int diastole;
    normal = (379 - 379);
    max = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d %d", &shrink, &diastole);
        if (90 <= shrink && 140 >= shrink && diastole >= 60 && diastole <= 90) {
            if (i == n - (459 - 458)) {
                normal = normal + 1;
                if (normal > max)
                    max = normal;
            }
            else
                normal++;
        }
        else {
            if (normal > max)
                max = normal;
            normal = 0;
        };
    }
    printf ("%d\n", max);
}

