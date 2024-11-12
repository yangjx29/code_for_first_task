int main () {
    double  QcLymgUZ2O [1000], y [(149 - 49)], z [(301 - 201)] = {(22 - 22)}, nKz0UJ8go9 [100], UUvdaEI8Z [100];
    int ELjWiBMCk, UItEY7AW [(585 - 485)], kb2MtXfLKyQA, iYAl3SVfN;
    scanf ("%d", &ELjWiBMCk);
    for (iYAl3SVfN = 0; iYAl3SVfN < ELjWiBMCk; iYAl3SVfN = iYAl3SVfN + 1) {
        scanf ("%d", &UItEY7AW[iYAl3SVfN]);
        {
            kb2MtXfLKyQA = 0;
            while (UItEY7AW[iYAl3SVfN] > kb2MtXfLKyQA) {
                scanf ("%lf", &QcLymgUZ2O[kb2MtXfLKyQA]);
                z[iYAl3SVfN] += QcLymgUZ2O[kb2MtXfLKyQA];
                kb2MtXfLKyQA = kb2MtXfLKyQA + 1;
            };
        }
        nKz0UJ8go9[iYAl3SVfN] = z[iYAl3SVfN] / UItEY7AW[iYAl3SVfN];
        {
            kb2MtXfLKyQA = 0;
            while (kb2MtXfLKyQA < UItEY7AW[iYAl3SVfN]) {
                y[iYAl3SVfN] += pow (QcLymgUZ2O[kb2MtXfLKyQA] - nKz0UJ8go9[iYAl3SVfN], 2);
                kb2MtXfLKyQA++;
            };
        }
        UUvdaEI8Z[iYAl3SVfN] = sqrt (y[iYAl3SVfN] / UItEY7AW[iYAl3SVfN]);
    }
    {
        iYAl3SVfN = 0;
        while (iYAl3SVfN < ELjWiBMCk) {
            printf ("%0.5lf\n", UUvdaEI8Z[iYAl3SVfN]);
            iYAl3SVfN++;
        };
    }
    return 0;
}

