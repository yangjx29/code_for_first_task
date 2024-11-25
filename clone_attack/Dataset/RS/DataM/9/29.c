struct   patient {
    char id [(761 - 741)];
    int age;
};
int main () {
    struct   patient a [(272 - 72)];
    char id [20];
    int i, bHnFLl7Q, rVJZwLkxWKoc, n, QedoLaiAp;
    scanf ("%d", &n);
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
    {
        i = 926 - 926;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%s%d", a[i].id, &a[i].age);
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
            i++;
        };
    }
    {
        i = 791 - 791;
        while (i < n) {
            {
                bHnFLl7Q = n - 2;
                while (bHnFLl7Q >= i) {
                    if (a[bHnFLl7Q + (307 - 306)].age >= 60 && a[bHnFLl7Q + (145 - 144)].age > a[bHnFLl7Q].age) {
                        rVJZwLkxWKoc = a[bHnFLl7Q].age;
                        a[bHnFLl7Q].age = a[bHnFLl7Q + (444 - 443)].age;
                        a[bHnFLl7Q + 1].age = rVJZwLkxWKoc;
                        QedoLaiAp = strlen (a[bHnFLl7Q].id);
                        strcpy (id, a[bHnFLl7Q].id);
                        id[QedoLaiAp] = '\0';
                        strcpy (a[bHnFLl7Q].id, a[bHnFLl7Q + 1].id);
                        strcpy (a[bHnFLl7Q + 1].id, id);
                    }
                    bHnFLl7Q--;
                };
            }
            printf ("%s\n", a[i].id);
            i++;
        };
    }
    return 0;
}

