int main () {
    int x1, LSfLkU12dQ3, VHYxvVzDS6nb, PgBUkFxVseOZ, fQs1GiD6l [100] [100], iVFbhx [100] [100], drgvJFbu [100] [100] = {{0}}, i, j, KDP5AfwqI, n, m;
    cin >> x1 >> LSfLkU12dQ3;
    for (i = 0; x1 > i; i = i + 1) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < LSfLkU12dQ3) {
            cin >> fQs1GiD6l[i][j];
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
            j = j + 1;
        };
    }
    cin >> VHYxvVzDS6nb >> PgBUkFxVseOZ;
    for (i = 0; i < VHYxvVzDS6nb; i = i + 1) {
        for (j = 0; PgBUkFxVseOZ > j; j = j + 1)
            cin >> iVFbhx[i][j];
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < x1) {
            for (j = 0; PgBUkFxVseOZ > j; j = j + 1) {
                for (n = 0, m = 0; m < LSfLkU12dQ3; n = n + 1, m = m + 1)
                    drgvJFbu[i][j] = drgvJFbu[i][j] + fQs1GiD6l[i][n] * iVFbhx[m][j];
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < x1) {
            for (j = 0; PgBUkFxVseOZ > j; j = j + 1) {
                if (PgBUkFxVseOZ -1 > j)
                    cout << drgvJFbu[i][j] << " ";
                else
                    cout << drgvJFbu[i][j];
            }
            i++;
            cout << endl;
        };
    }
    return 0;
}

