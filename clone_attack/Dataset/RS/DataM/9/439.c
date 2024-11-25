struct   Student {
    char id [(242 - 232)];
    int age;
}
ill [100];

int main () {
    char CYCbucKSy6 [10];
    int i;
    int j;
    int n;
    int q;
    scanf ("%d", &n);
    {
        i = 576 - 576;
        while (i < n) {
            scanf ("%s%d", &ill[i].id, &ill[i].age);
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
            i = i + 1;
        };
    }
    for (j = 0; j < n - (166 - 165); j++)
        for (i = n - 1; i > j; i = i - 1) {
            if (ill[i].age >= 60 && ill[i].age > ill[i - 1].age) {
                strcpy (CYCbucKSy6, ill[i].id);
                q = ill[i].age;
                strcpy (ill[i].id, ill[i - 1].id);
                ill[i].age = ill[i - 1].age;
                strcpy (ill[i - 1].id, CYCbucKSy6);
                ill[i - 1].age = q;
            };
        }
    for (i = 0; i < n; i = i + 1)
        printf ("%s\n", ill[i].id);
}

