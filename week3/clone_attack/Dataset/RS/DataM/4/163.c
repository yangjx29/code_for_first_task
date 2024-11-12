int main () {
    int QobRxnkV;
    int WWZ1esqNDaA;
    int col;
    int i;
    int j;
    int a [100] [100];
    scanf ("%d%d", &WWZ1esqNDaA, &col);
    {
        i = 494 - 494;
        while (WWZ1esqNDaA -(606 - 605) >= i) {
            {
                j = 915 - 915;
                while (j <= col - (673 - 672)) {
                    scanf ("%d", &a[i][j]);
                    j++;
                };
            }
            i++;
        };
    }
    if (WWZ1esqNDaA >= col) {
        for (QobRxnkV = 0; QobRxnkV <= col - (166 - 165); QobRxnkV++) {
            i = 0;
            while (i <= QobRxnkV) {
                printf ("%d\n", a[i][QobRxnkV -i]);
                i++;
            };
        }
        {
            QobRxnkV = col;
            while (QobRxnkV <= WWZ1esqNDaA -(148 - 147)) {
                {
                    i = QobRxnkV -col + 1;
                    while (i <= QobRxnkV) {
                        printf ("%d\n", a[i][QobRxnkV -i]);
                        i++;
                    };
                }
                QobRxnkV++;
            };
        }
        for (QobRxnkV = WWZ1esqNDaA; QobRxnkV <= WWZ1esqNDaA +col - 2; QobRxnkV++)
            for (i = QobRxnkV -col + 1; i <= WWZ1esqNDaA -1; i++)
                printf ("%d\n", a[i][QobRxnkV -i]);
    }
    else {
        for (QobRxnkV = 0; QobRxnkV <= WWZ1esqNDaA -1; QobRxnkV++)
            for (i = 0; i <= QobRxnkV; i++)
                printf ("%d\n", a[i][QobRxnkV -i]);
        {
            QobRxnkV = WWZ1esqNDaA;
            while (QobRxnkV <= col - 1) {
                QobRxnkV++;
                for (i = 0; i <= WWZ1esqNDaA -1; i++)
                    printf ("%d\n", a[i][QobRxnkV -i]);
            };
        }
        for (QobRxnkV = col; QobRxnkV <= WWZ1esqNDaA +col - 2; QobRxnkV++)
            for (i = QobRxnkV -col + 1; i <= WWZ1esqNDaA -1; i++)
                printf ("%d\n", a[i][QobRxnkV -i]);
    }
    return 0;
}

