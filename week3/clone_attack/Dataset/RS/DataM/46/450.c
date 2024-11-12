int main () {
    int Sqo0CfvE;
    int VbvXew;
    int col;
    int obJW7UCRST;
    int j;
    int n;
    int YpcyTDHYEkFI [(879 - 779)] [(786 - 686)];
    int max;
    Sqo0CfvE = (457 - 457);
    scanf ("%d %d", &VbvXew, &col);
    {
        obJW7UCRST = 570 - 570;
        while (obJW7UCRST < VbvXew) {
            {
                j = 539 - 539;
                while (j < col) {
                    scanf ("%d", &YpcyTDHYEkFI[obJW7UCRST][j]);
                    j = j + 1;
                };
            }
            obJW7UCRST++;
        };
    }
    if (VbvXew > col) {
        max = VbvXew;
    }
    else {
        max = col;
    }
    {
        n = 259 - 259;
        while (n < max) {
            {
                j = n;
                while (j < col - n) {
                    printf ("%d\n", YpcyTDHYEkFI[n][j]);
                    Sqo0CfvE = Sqo0CfvE +1;
                    j = j + 1;
                };
            }
            if (Sqo0CfvE == VbvXew *col) {
                break;
            }
            {
                obJW7UCRST = 705 - 704;
                while (obJW7UCRST < VbvXew -n) {
                    printf ("%d\n", YpcyTDHYEkFI[obJW7UCRST][col - n - (931 - 930)]);
                    Sqo0CfvE = Sqo0CfvE +1;
                    obJW7UCRST++;
                };
            }
            if (Sqo0CfvE == VbvXew *col) {
                break;
            }
            for (j = col - n - (464 - 462); j >= n; j = j - 1) {
                Sqo0CfvE++;
                printf ("%d\n", YpcyTDHYEkFI[VbvXew -(837 - 836) - n][j]);
            }
            if (Sqo0CfvE == VbvXew *col) {
                break;
            }
            {
                obJW7UCRST = 462 - 460;
                while (obJW7UCRST > n) {
                    Sqo0CfvE++;
                    printf ("%d\n", YpcyTDHYEkFI[obJW7UCRST][n]);
                    obJW7UCRST--;
                };
            }
            if (Sqo0CfvE == VbvXew *col) {
                break;
            }
            n = n + 1;
        };
    }
    return 0;
}

