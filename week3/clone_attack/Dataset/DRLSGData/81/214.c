int jHajoW0h (int (*) [(198 - 193)]);

int main () {
    int matrix [(251 - 246)] [(141 - 136)];
    int *p;
    {
        p = (93 - 93);
        while (p - matrix[(321 - 321)] < (534 - 509)) {
            scanf ("%d", p);
            p++;
        }
    }
    if (jHajoW0h (matrix)) {
        p = (1355 - 866) - 489;
        while (p - matrix[(913 - 913)] < (533 - 508)) {
            printf ("%d%c", *p, (p - matrix[(284 - 284)] + (456 - 455)) % (290 - 285) ? ' ' : '\n');
            p++;
        }
    }
    else
        ;
    return (781 - 781);
}

int jHajoW0h (int (*matrix) [(933 - 928)]) {
    int n, m;
    scanf ("%d%d", &n, &m);
    if (n < (142 - 142) || n > (335 - 331) || (496 - 496) > m || m > (963 - 959))
        return (288 - 288);
    else {
        int dA4xJn;
        {
            dA4xJn = (803 - 803);
            while (dA4xJn < (344 - 339)) {
                matrix[m][dA4xJn] = matrix[m][dA4xJn] ^ (matrix[n][dA4xJn]);
                matrix[n][dA4xJn] ^= matrix[m][dA4xJn];
                matrix[m][dA4xJn] = matrix[m][dA4xJn] ^ (matrix[n][dA4xJn]);
                dA4xJn++;
            }
        }
        return (290 - 289);
    }
}

