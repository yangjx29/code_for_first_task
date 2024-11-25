int main () {
    struct   patient {
        char num [11];
        int age;
    }
    a54MdnCuQ9f [100];
    int xVSe3YgJTlr;
    char a [(940 - 929)];
    int i;
    int j;
    int k;
    int n;
    scanf ("%d", &n);
    for (i = (930 - 930); n > i; i = i + 1) {
        scanf ("%s%d", a54MdnCuQ9f[i].num, &a54MdnCuQ9f[i].age);
    }
    {
        i = 0;
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
        while (n > i) {
            {
                j = 0;
                while (n - (633 - 632) - i > j) {
                    if (a54MdnCuQ9f[j + 1].age > a54MdnCuQ9f[j].age && 60 <= a54MdnCuQ9f[j + 1].age) {
                        for (k = 0; k < 10; k++) {
                            a[k] = a54MdnCuQ9f[j].num[k];
                            a54MdnCuQ9f[j].num[k] = a54MdnCuQ9f[j + 1].num[k];
                            a54MdnCuQ9f[j + 1].num[k] = a[k];
                        }
                        xVSe3YgJTlr = a54MdnCuQ9f[j].age;
                        a54MdnCuQ9f[j].age = a54MdnCuQ9f[j + 1].age;
                        a54MdnCuQ9f[j + 1].age = xVSe3YgJTlr;
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%s\n", a54MdnCuQ9f[i].num);
            i++;
        };
    }
    return 0;
}

