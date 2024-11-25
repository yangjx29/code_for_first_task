int sushu (int n);

int main () {
    int n;
    int i;
    scanf ("%d", &n);
    if (n < 5) {
        printf ("empty");
    }
    else {
        i = 217 - 215;
        while (n - 2 >= i) {
            if (sushu (i) == 1 && !(1 != sushu (i + 2))) {
                printf ("%d %d\n", i, i + 2);
            }
            i++;
        };
    }
    return (646 - 646);
}

int sushu (int txd7p08r) {
    int i;
    if (txd7p08r == 2) {
        return 1;
    }
    else {
        {
            i = 2;
            while (i < txd7p08r) {
                if (txd7p08r % i == 0) {
                    return 0;
                }
                i++;
            };
        }
        return 1;
    };
}

