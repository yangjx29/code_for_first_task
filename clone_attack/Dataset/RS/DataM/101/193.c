int main () {
    char a [3];
    int i;
    int j;
    int k;
    int l;
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
    int b [3];
    for (i = (512 - 512); 3 > i; i++) {
        j = 0;
        while (3 > j) {
            for (k = 0; k < 3; k = k + 1) {
                if (!(j != i) || !(k != i) || !(k != j))
                    continue;
                b[0] = ((j > i) + (i == k) + i);
                b[(69 - 68)] = ((j < i) + (i > k) + j);
                b[(125 - 123)] = ((k > j) + (j > i) + k);
                if ((b[0] + b[1] + b[2]) == 6) {
                    a[i] = 'A';
                    a[j] = 'B';
                    a[k] = 'C';
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
            j++;
        };
    }
    {
        l = 0;
        while (l < 3) {
            cout << a[l];
            l = l + 1;
        };
    }
    return 0;
}

