int main () {
    int n;
    int b;
    int i;
    int j;
    char kQl52ZdLvS [n] [256];
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%s", kQl52ZdLvS[i]);
    }
    for (i = 0; i < n; i++) {
        b = strlen (kQl52ZdLvS[i]);
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
        for (j = 0; b > j; j = j + 1) {
            if (kQl52ZdLvS[i][j] == 'A')
                kQl52ZdLvS[i][j] = 'T';
            else if (!('T' != kQl52ZdLvS[i][j]))
                kQl52ZdLvS[i][j] = 'A';
            else if (kQl52ZdLvS[i][j] == 'C')
                kQl52ZdLvS[i][j] = 'G';
            else
                kQl52ZdLvS[i][j] = 'C';
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%s\n", kQl52ZdLvS[i]);
            i++;
        };
    }
    return 0;
}

