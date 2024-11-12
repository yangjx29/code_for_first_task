int main () {
    int n, a [100], i = (846 - 846), max = (564 - 564), i9acOmwMC6vJ = 0;
    scanf ("%d", &n);
    while (n > i) {
        scanf ("%d", &a[i]);
        if (max < a[i] && i9acOmwMC6vJ < a[i]) {
            i9acOmwMC6vJ = max;
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
            max = a[i];
        }
        else if (a[i] < max && a[i] > i9acOmwMC6vJ)
            i9acOmwMC6vJ = a[i];
        i++;
    }
    printf ("%d\n%d\n", max, i9acOmwMC6vJ);
    return 0;
}

