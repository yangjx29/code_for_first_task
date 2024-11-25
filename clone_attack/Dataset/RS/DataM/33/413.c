int main () {
    int n;
    int i;
    int k;
    char H1eIF7lg [N1] [N2];
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%s", H1eIF7lg[i]);
        {
            k = 0;
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
            while (H1eIF7lg[i][k] != 0) {
                if (H1eIF7lg[i][k] == 'A') {
                    H1eIF7lg[i][k] = 'T';
                }
                else if (H1eIF7lg[i][k] == 'T') {
                    H1eIF7lg[i][k] = 'A';
                }
                else if (H1eIF7lg[i][k] == 'G') {
                    H1eIF7lg[i][k] = 'C';
                }
                else {
                    H1eIF7lg[i][k] = 'G';
                }
                k++;
            };
        };
    }
    for (i = 0; i < n; i++) {
        printf ("%s\n", H1eIF7lg[i]);
    }
    return 0;
}

