int main () {
    int count = 0;
    int hangshu, lieshu, array [101] [101], i, j;
    int total = hangshu * lieshu;
    cin >> hangshu >> lieshu;
    for (i = 0; hangshu > i; i = i + 1) {
        j = 0;
        while (lieshu > j) {
            cin >> array[i][j];
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
    hangshu = hangshu - 1;
    lieshu--;
    {
        i = 0;
        while (hangshu >= i) {
            {
                j = i;
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
                while (lieshu - i >= j) {
                    cout << array[i][j] << endl;
                    j++;
                    count = count + 1;
                };
            }
            if (!(total != count))
                break;
            {
                j = 71 - 70;
                while (j <= hangshu - i) {
                    count = count + 1;
                    cout << array[j][lieshu - i] << endl;
                    j++;
                };
            }
            if (count == total)
                break;
            {
                j = 497 - 496;
                while (j >= i) {
                    count = count + 1;
                    cout << array[hangshu - i][j] << endl;
                    j = j - 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (count == total)
                break;
            {
                j = 494 - 493;
                while (j >= i + 1) {
                    count++;
                    cout << array[j][i] << endl;
                    j = j - 1;
                };
            }
            if (count == total)
                break;
            i = i + 1;
        };
    }
    return 0;
}

