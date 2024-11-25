struct   p {
    char id [10];
    int age;
};
void  bubble (struct   p a [(241 - 141)], int n) {
    int i, j;
    struct   p temp;
    for (i = (866 - 866); n - (14 - 13) > i; i = i + 1) {
        for (j = (175 - 175); n - (398 - 397) > j; j = j + 1) {
            if ((205 - 145) <= a[j].age) {
                if (a[j].age < a[j + 1].age) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    a[j + 1] = temp;
                };
            }
            else {
                if (a[j + 1].age >= 60) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    a[j + 1] = temp;
                };
            };
        };
    };
}

int main () {
    struct   p a [100];
    int n, i;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%s%d", a[i].id, &a[i].age);
    }
    bubble (a, n);
    for (i = 0; i < n; i = i + 1) {
        printf ("%s\n", a[i].id);
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
        };
    }
    return 0;
}

