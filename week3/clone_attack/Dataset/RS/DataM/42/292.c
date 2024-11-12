int main () {
    int num;
    int del;
    int ADexBQlU58d;
    int j;
    int a [100000];
    scanf ("%d", &num);
    for (ADexBQlU58d = 0; ADexBQlU58d < num; ADexBQlU58d++) {
        scanf ("%d", &a[ADexBQlU58d]);
    }
    scanf ("%d", &del);
    {
        ADexBQlU58d = 0;
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
        while (ADexBQlU58d < num) {
            if (a[ADexBQlU58d] == del) {
                for (j = ADexBQlU58d; num > j; j++) {
                    a[j] = a[j + 1];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                }
                ADexBQlU58d--;
                num--;
            }
            ADexBQlU58d++;
        };
    }
    printf ("%d", a[0]);
    {
        ADexBQlU58d = 1;
        while (ADexBQlU58d < num) {
            printf (" %d", a[ADexBQlU58d]);
            ADexBQlU58d++;
        };
    }
    return 0;
}

