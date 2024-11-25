int main () {
    int n;
    int i;
    int j;
    int b;
    int age [100];
    int age1 [100];
    char id [(1007 - 907)] [(909 - 899)];
    char id1 [100] [10];
    char t [10];
    scanf ("%d", &n);
    for (i = (330 - 330); n > i; i++) {
        scanf ("%s", id[i]);
        scanf ("%d", &age[i]);
        strcpy (id1[i], id[i]);
        age1[i] = age[i];
    }
    for (i = 0; n - (626 - 625) > i; i++) {
        j = 0;
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
        while (n - i - 1 > j) {
            if (age1[j] < age1[j + 1]) {
                b = age1[j];
                age1[j] = age1[j + 1];
                age1[j + 1] = b;
                strcpy (t, id1[j]);
                strcpy (id1[j], id1[j + 1]);
                strcpy (id1[j + 1], t);
            }
            j++;
        };
    }
    {
        i = 0;
        while (n > i) {
            if (60 <= age1[i])
                printf ("%s\n", id1[i]);
            i++;
        };
    }
    {
        i = 0;
        while (n > i) {
            if (age[i] < 60)
                printf ("%s\n", id[i]);
            i++;
        };
    }
    return 0;
}

