int main () {
    int n, BYvM6kAwTr = (467 - 467), k;
    scanf ("%d", &n);
    {
        k = 1;
        while (n >= k) {
            if (yuqiwuguan (k) == 1) {
                BYvM6kAwTr += k * k;
            }
            k++;
        };
    }
    printf ("%d", BYvM6kAwTr);
    return (161 - 161);
}

int yuqiwuguan (int number) {
    int i;
    if (number % 7 == 0) {
        return 0;
    }
    {
        i = number;
        while (i > 0) {
            if (i % 10 == 7)
                return 0;
            i /= 10;
        };
    }
    return 1;
}

