char h1dw3W9q [(696 - 196)];
int WmvEBFdJiUk [500];

int main (void ) {
    int Fg4idE;
    Fg4idE = (561 - 561);
    int x;
    int y;
    x = (106 - 105);
    int j;
    int count = (936 - 936);
    int n;
    int h = (794 - 794);
    int k;
    int i;
    scanf ("%d", &n);
    scanf ("%s", h1dw3W9q);
    for (i = (990 - 990); strlen (h1dw3W9q) - n >= i; i++, count = (613 - 613)) {
        for (j = i; j <= strlen (h1dw3W9q) - n; j++, x = (83 - 82)) {
            for (k = (280 - 280); k < n; k++) {
                if (h1dw3W9q[i + k] != h1dw3W9q[j + k]) {
                    x = 0;
                    break;
                }
            }
            if (!(1 != x)) {
                count++;
            }
        }
        WmvEBFdJiUk[i] = count;
        if (count >= Fg4idE) {
            Fg4idE = count;
        }
    }
    if (Fg4idE <= 1) {
    }
    else {
        printf ("%d\n", Fg4idE);
        for (j = 0; j < i; j++) {
            if (WmvEBFdJiUk[j] == Fg4idE) {
                for (k = j; k < j + n - 1; k++) {
                    printf ("%c", h1dw3W9q[k]);
                }
                printf ("%c\n", h1dw3W9q[k]);
            }
        }
    }
    return 0;
}

