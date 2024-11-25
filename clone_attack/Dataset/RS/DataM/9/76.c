int main () {
    struct   patient {
        char id [10];
        int age;
    };
    int n, i, j, k;
    struct   patient p [100];
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
    for (i = 0; n > i; i = i + 1)
        scanf ("%s%d", p[i].id, &p[i].age);
    for (i = 1; i < n; i = i + 1) {
        if (60 <= p[i].age) {
            j = 0;
            while (i > j && p[j].age >= p[i].age)
                j = j + 1;
            if (j < i) {
                struct   patient kVX9yYcxlgEZ;
                kVX9yYcxlgEZ = p[i];
                for (k = i; k > j; k = k - 1)
                    p[k] = p[k - 1];
                p[j] = kVX9yYcxlgEZ;
            };
        };
    }
    for (i = 0; i < n; i++)
        printf ("%s\n", p[i].id);
    return 0;
}

