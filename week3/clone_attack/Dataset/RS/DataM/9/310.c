char id [(775 - 674)] [11];

int main () {
    int n;
    int age [101], a [101];
    getchar ();
    getchar ();
    scanf ("%d", &n);
    {
        int i;
        i = (577 - 576);
        while (n >= i) {
            int j = i;
            scanf ("%s%d", id[i], &age[i]);
            if (age[i] >= 60) {
                for (; j > 1 && age[a[j - 1]] < age[i]; j--)
                    a[j] = a[j - 1];
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
            a[j] = i;
            i++;
        };
    }
    for (int i = 1;
    i <= n; i++)
        printf ("%s\n", id[a[i]]);
    return 0;
}

