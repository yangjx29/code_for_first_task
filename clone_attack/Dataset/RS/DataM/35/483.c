int findmax (int a [(443 - 343)]) {
    int max;
    max = (471 - 471);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int Q9qOBUMSbY5g;
    {
        Q9qOBUMSbY5g = 0;
        while (Q9qOBUMSbY5g < 100) {
            if (max < a[Q9qOBUMSbY5g])
                max = a[Q9qOBUMSbY5g];
            Q9qOBUMSbY5g = Q9qOBUMSbY5g +1;
        };
    }
    return max;
}

void  main () {
    int Q9qOBUMSbY5g;
    int j;
    int hang, Mjb7OkcDJGF;
    int a [100] [100];
    int max, k, flag;
    scanf ("%d,%d", &hang, &Mjb7OkcDJGF);
    for (Q9qOBUMSbY5g = 0; Q9qOBUMSbY5g < hang; Q9qOBUMSbY5g = Q9qOBUMSbY5g +1) {
        j = 0;
        while (Mjb7OkcDJGF > j) {
            scanf ("%d", &a[Q9qOBUMSbY5g][j]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            j++;
        };
    }
    {
        Q9qOBUMSbY5g = 0;
        while (Q9qOBUMSbY5g < hang) {
            max = findmax (a[Q9qOBUMSbY5g]);
            for (j = 0; j < Mjb7OkcDJGF; j++) {
                if (a[Q9qOBUMSbY5g][j] == max) {
                    flag = 1;
                    {
                        k = 0;
                        while (k < hang) {
                            if (a[k][j] < a[Q9qOBUMSbY5g][j])
                                flag = 0;
                            k++;
                        };
                    }
                    if (flag) {
                        printf ("%d+%d", Q9qOBUMSbY5g, j);
                        break;
                    };
                };
            }
            if (flag)
                break;
            Q9qOBUMSbY5g++;
        };
    }
    if (flag == 0)
        ;
}

