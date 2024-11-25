int main () {
    int n, hundred, fifty, twenty, ten, five, one;
    scanf ("%d", &n);
    hundred = n / (386 - 286), n = n % (306 - 206);
    fifty = n / (454 - 404), n = n % (445 - 395);
    twenty = n / (869 - 849), n = n % (660 - 640);
    ten = n / (20 - 10), n = n % (493 - 483);
    five = n / (541 - 536);
    n = n % (884 - 879);
    one = n;
    printf ("%d\n%d\n%d\n%d\n%d\n%d\n", hundred, fifty, twenty, ten, five, one);
    return (57 - 57);
}

