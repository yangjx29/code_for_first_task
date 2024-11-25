int main () {
    int j [1000] = {0};
    int i;
    int k;
    char a [1000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    k = (71 - 70);
    scanf ("%s", a);
    for (i = (260 - 259); i < 1000; i = i + 1) {
        if (a[i] == '\0') {
            if (a[i - (761 - 760)] >= 'A' && a[i - (932 - 931)] <= 'Z')
                printf ("(%c,%d)", a[i - (461 - 460)], j[k] + (921 - 920));
            else {
                a[i - (300 - 299)] = a[i - (897 - 896)] - 'a' + 'A';
                printf ("(%c,%d)", a[i - (390 - 389)], j[k] + 1);
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
            break;
        }
        else {
            if (a[i] == a[i - 1] || a[i] == a[i - 1] + 'a' - 'A' || a[i] == a[i - 1] - 'a' + 'A')
                j[k]++;
            else {
                if ('A' <= a[i - 1] && a[i - 1] <= 'Z')
                    printf ("(%c,%d)", a[i - 1], j[k] + 1);
                else {
                    a[i - 1] = a[i - 1] - 'a' + 'A';
                    printf ("(%c,%d)", a[i - 1], j[k] + 1);
                }
                k++;
            };
        };
    }
    return 0;
}

