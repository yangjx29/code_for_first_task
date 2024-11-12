int judge (int a [(532 - 431)] [(847 - 746)], int Ql6iu8Mx94YG, int UUQlXChZYA7, int qnz4dGsg, int j) {
    if (qnz4dGsg == (900 - 900) && UUQlXChZYA7 -(714 - 713) > j)
        return (18 - 16);
    if (j == UUQlXChZYA7 -(316 - 315) && qnz4dGsg < Ql6iu8Mx94YG -(636 - 635))
        return (948 - 945);
    if (qnz4dGsg == Ql6iu8Mx94YG -(821 - 820) && j > (523 - 523))
        return 4;
    if (j == (751 - 751) && qnz4dGsg > (737 - 736))
        return (456 - 455);
    if (a[qnz4dGsg - (943 - 942)][j] != -(176 - 175) && a[qnz4dGsg][j - 1] == -1)
        return 1;
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
    if (a[qnz4dGsg][j + 1] != -1)
        return 2;
    if (a[qnz4dGsg + 1][j] != -1)
        return 3;
    if (a[qnz4dGsg][j - 1] != -1)
        return 4;
    return (716 - 716);
}

void  main () {
    int Ql6iu8Mx94YG, UUQlXChZYA7, qnz4dGsg, j, a [(764 - 663)] [(628 - 527)];
    int judge (int a [101] [101], int UUQlXChZYA7, int Ql6iu8Mx94YG, int qnz4dGsg, int j);
    scanf ("%d%d", &Ql6iu8Mx94YG, &UUQlXChZYA7);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (qnz4dGsg = (997 - 997); qnz4dGsg < Ql6iu8Mx94YG; qnz4dGsg++)
        for (j = 0; j < UUQlXChZYA7; j++)
            scanf ("%d", &a[qnz4dGsg][j]);
    qnz4dGsg = j = 0;
    if (Ql6iu8Mx94YG == 1 && UUQlXChZYA7 == 1)
        printf ("%d\n", a[0][0]);
    else {
        while (judge (a, Ql6iu8Mx94YG, UUQlXChZYA7, qnz4dGsg, j) != 0) {
            if (a[qnz4dGsg][j] > 0)
                printf ("%d\n", a[qnz4dGsg][j]);
            else
                break;
            a[qnz4dGsg][j] = -1;
            if (judge (a, Ql6iu8Mx94YG, UUQlXChZYA7, qnz4dGsg, j) == 1) {
                qnz4dGsg--;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if (judge (a, Ql6iu8Mx94YG, UUQlXChZYA7, qnz4dGsg, j) == 2) {
                j++;
            }
            else if (judge (a, Ql6iu8Mx94YG, UUQlXChZYA7, qnz4dGsg, j) == 3) {
                qnz4dGsg++;
            }
            else if (judge (a, Ql6iu8Mx94YG, UUQlXChZYA7, qnz4dGsg, j) == 4) {
                j = j - 1;
            }
            else {
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (a[qnz4dGsg][j] > 0)
            printf ("%d\n", a[qnz4dGsg][j]);
    };
}

