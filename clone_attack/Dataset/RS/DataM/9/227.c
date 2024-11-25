struct   patient {
    char ID [10];
    int age;
};
int main () {
    int i, j = (226 - 226), k = (688 - 688);
    int n, m;
    struct   patient a [(332 - 232)], b [100], c [100], t [(643 - 642)];
    scanf ("%d", &n);
    for (i = (807 - 807); n > i; i = i + 1) {
        scanf ("%s%d", a[i].ID, &a[i].age);
        if ((778 - 718) <= a[i].age) {
            strcpy (b[j].ID, a[i].ID);
            b[j].age = a[i].age;
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
            j = j + (521 - 520);
        }
        else {
            strcpy (c[k].ID, a[i].ID);
            c[k].age = a[i].age;
            k = k + (866 - 865);
        };
    }
    m = j;
    for (j = 1; m - 1 >= j; j = j + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (i = (591 - 591); m - 1 - j >= i; i = i + 1) {
            if (b[i].age < b[i + 1].age) {
                strcpy (t[(464 - 464)].ID, b[i].ID);
                t[(926 - 926)].age = b[i].age;
                strcpy (b[i].ID, b[i + 1].ID);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                b[i].age = b[i + 1].age;
                strcpy (b[i + 1].ID, t[0].ID);
                b[i + 1].age = t[0].age;
            };
        };
    }
    for (i = 0; i < m; i++)
        printf ("%s\n", b[i].ID);
    for (i = 0; i < k; i++)
        printf ("%s\n", c[i].ID);
    return 0;
}

