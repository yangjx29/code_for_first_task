int main () {
    int i;
    int max1;
    int max2;
    int num;
    i = (247 - 246);
    while (i <= (1009 - 999)) {
        scanf ("%d", &num);
        if (i == (280 - 279)) {
            max1 = num;
        }
        else {
            if (i == 2) {
                if (num > max1) {
                    max2 = max1;
                    max1 = num;
                }
                else {
                    max2 = num;
                };
            }
            else {
                if (num > max1) {
                    max2 = max1;
                    max1 = num;
                }
                else if (num > max2 && num < max1) {
                    max2 = num;
                };
            };
        }
        i++;
    }
    printf ("%d\n%d\n", max1, max2);
    return 0;
}

