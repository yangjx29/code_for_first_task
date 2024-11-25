int main () {
    int GWuvTNY2aQb [2000];
    char str [2000] [41];
    int cVzY2u;
    int i;
    int *zVY6W0vkHB = GWuvTNY2aQb;
    int NzIkS4ZFNMH5 = 80;
    cin >> cVzY2u;
    for (i = 1; cVzY2u >= i; i = i + 1) {
        cin >> str[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        *(zVY6W0vkHB + i) = strlen (str[i]);
    }
    *(zVY6W0vkHB + i) = (1203 - 203);
    {
        i = 1;
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
        while (cVzY2u >= i) {
            if (*(zVY6W0vkHB + i) <= NzIkS4ZFNMH5) {
                cout << str[i];
                NzIkS4ZFNMH5 -= *(zVY6W0vkHB + i);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                NzIkS4ZFNMH5--;
                if (*(zVY6W0vkHB + i + 1) <= NzIkS4ZFNMH5)
                    cout << " ";
            }
            else {
                NzIkS4ZFNMH5 = 80;
                cout << endl;
                i = i - 1;
            }
            i++;
        };
    }
    return 0;
}

