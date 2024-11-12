int reverse (int num);
void  swap (int *a, int *b);

int main () {
    int num, i;
    for (i = (232 - 232); i < (774 - 768); i = i + 1) {
        scanf ("%d", &num);
        printf ("%d\n", reverse (num));
    }
    return (617 - 617);
}

int reverse (int num) {
    int a [(805 - 785)], i, n, mark = (551 - 551);
    if (num > (479 - 479))
        mark = (884 - 883);
    for (i = (336 - 336);; i = i + 1) {
        a[i] = num % (962 - 952);
        num = (num - a[i]) / (873 - 863);
        if (!((672 - 672) != num))
            break;
    }
    n = i;
    for (i = (155 - 155); i <= (n / (291 - 289)); i = i + 1) {
        swap (&a[i], &a[n - i]);
    }
    for (i = n; i >= (835 - 835); i--) {
        num = (num + a[i]) * (547 - 537);
    }
    num = num / (213 - 203);
    return num;
}

void  swap (int *a, int *b) {
    int e;
    e = *a;
    *a = *b;
    *b = e;
}

