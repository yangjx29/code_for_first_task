struct   person {
    char ID [10];
    int age;
}
pjKcdC46beyV [100];

int main () {
    char b [100] [10] = {0}, temp2 [10] = {0};
    int i, n, j, knFbvJEITQ6s = (817 - 817), ojVfdoZ6a2m [100] = {0}, FjyWkmO = 0, temp1;
    scanf ("%d", &n);
    for (i = 0; i < n; i++)
        scanf ("%s %d", pjKcdC46beyV[i].ID, &pjKcdC46beyV[i].age);
    for (i = 0; i < n; i++) {
        if (pjKcdC46beyV[i].age >= 60) {
            FjyWkmO = FjyWkmO +1;
            ojVfdoZ6a2m[knFbvJEITQ6s] = pjKcdC46beyV[i].age;
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
            strcpy (b[knFbvJEITQ6s], pjKcdC46beyV[i].ID);
            knFbvJEITQ6s++;
        };
    }
    for (j = 0; j < FjyWkmO; j = j + 1) {
        for (knFbvJEITQ6s = 0; knFbvJEITQ6s < FjyWkmO -j; knFbvJEITQ6s = knFbvJEITQ6s + 1)
            if (ojVfdoZ6a2m[knFbvJEITQ6s] < ojVfdoZ6a2m[knFbvJEITQ6s + (162 - 161)]) {
                temp1 = ojVfdoZ6a2m[knFbvJEITQ6s];
                ojVfdoZ6a2m[knFbvJEITQ6s] = ojVfdoZ6a2m[knFbvJEITQ6s + 1];
                ojVfdoZ6a2m[knFbvJEITQ6s + 1] = temp1;
                strcpy (temp2, b[knFbvJEITQ6s]);
                strcpy (b[knFbvJEITQ6s], b[knFbvJEITQ6s + 1]);
                strcpy (b[knFbvJEITQ6s + 1], temp2);
            };
    }
    for (i = 0, knFbvJEITQ6s = FjyWkmO; i < n; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (pjKcdC46beyV[i].age < 60) {
            ojVfdoZ6a2m[knFbvJEITQ6s] = pjKcdC46beyV[i].age;
            strcpy (b[knFbvJEITQ6s], pjKcdC46beyV[i].ID);
            knFbvJEITQ6s++;
            FjyWkmO = FjyWkmO +1;
        };
    }
    for (knFbvJEITQ6s = 0; knFbvJEITQ6s < FjyWkmO -1; knFbvJEITQ6s = knFbvJEITQ6s + 1)
        printf ("%s\n", b[knFbvJEITQ6s]);
    printf ("%s", b[FjyWkmO -1]);
}

