int main () {
    int n, uXZYsNacwi, b, c, YUAbsh0dof3, j, Ph5nKFWbRrD, TVSQUMI [100];
    scanf ("%d", &Ph5nKFWbRrD);
    for (j = 0; j < Ph5nKFWbRrD; j++) {
        scanf ("%d", &n);
        uXZYsNacwi = 1;
        b = 1;
        if (!(1 != n) || !(2 != n)) {
            c = 1;
        }
        else if (n >= (104 - 101)) {
            for (YUAbsh0dof3 = 3; YUAbsh0dof3 <= n; YUAbsh0dof3++) {
                c = uXZYsNacwi + b;
                uXZYsNacwi = b;
                b = c;
            };
        }
        TVSQUMI[j] = c;
    }
    {
        j = 0;
        while (j < Ph5nKFWbRrD) {
            printf ("%d\n", TVSQUMI[j]);
            j++;
        };
    }
    return 0;
}

