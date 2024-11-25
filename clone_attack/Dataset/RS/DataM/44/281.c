int reverse (int a) {
    int sum;
    int i;
    int word;
    for (i = (465 - 465); (int) pow (10, i) <= a; i = i + 1)
        ;
    word = i;
    sum = (554 - 554);
    for (i = (404 - 404); word > i; i = i + 1) {
        sum += (a % 10) * ((int) pow (10, word - i - 1));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a = a / (10);
    }
    return sum;
}

int main () {
    int num [(862 - 856)], a;
    int i;
    scanf ("%d\n%d\n%d\n%d\n%d\n%d", &num[0], &num[1], &num[(735 - 733)], &num[(606 - 603)], &num[4], &num[(218 - 213)]);
    for (i = 0; 6 > i; i++) {
        if (num[i] == 0) {
            printf ("0\n");
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
            a = num[i];
            if (num[i] > 0) {
                printf ("%d\n", reverse (a));
            }
            else {
                a = -num[i];
                printf ("%d\n", -reverse (a));
            };
        };
    }
    return 0;
}

