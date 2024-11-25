int main () {
    int NUMT1B, i, sum = 1;
    char a [1001];
    gets (a);
    NUMT1B = strlen (a);
    for (i = 0; i < NUMT1B; i++) {
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] = a[i] - 32;
    }
    for (i = 0; i < NUMT1B; i++) {
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
        if (a[i] == a[i + 1]) {
            sum++;
        }
        else {
            cout << "(" << a[i] << "," << sum << ")";
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            sum = 1;
        };
    };
}

