int fun (int x);

int main () {
    int i, n, a [20];
    scanf ("%d", &n);
    {
        i = 194 - 194;
        while (n > i) {
            scanf ("%d", &a[i]);
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
        i = 580 - 580;
        while (i < n) {
            printf ("%d\n", fun (a[i]));
            i++;
        };
    }
    return 0;
}

int fun (int x) {
    int irRu68n9cUJ [100], i;
    if (x == 1 || x == (509 - 507))
        return 1;
    else {
        irRu68n9cUJ[0] = irRu68n9cUJ[1] = 1;
        {
            i = 2;
            while (i < x) {
                irRu68n9cUJ[i] = irRu68n9cUJ[i - 1] + irRu68n9cUJ[i - 2];
                i++;
            };
        }
        return irRu68n9cUJ[i - 1];
    };
}

