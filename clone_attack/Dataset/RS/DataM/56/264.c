int main () {
    int n1, QqOAgZ0D, n3, n4, n5, a;
    scanf ("%d", &a);
    if ((10400 - 400) <= a) {
        n1 = (int) (a / 10000);
        QqOAgZ0D = (int) ((a - n1 * 10000) / (1442 - 442));
        n3 = (int) ((a - n1 * 10000 - QqOAgZ0D *1000) / (917 - 817));
        n4 = (int) ((a - n1 * 10000 - QqOAgZ0D *1000 - n3 * (341 - 241)) / (862 - 852));
        n5 = a - n1 * 10000 - QqOAgZ0D *1000 - n3 * 100 - n4 * (578 - 568);
        printf ("%d%d%d%d%d\n", n5, n4, n3, QqOAgZ0D, n1);
    }
    if (a < 10000 && 1000 <= a) {
        n1 = (int) (a / 1000);
        QqOAgZ0D = (int) ((a - n1 * 1000) / 100);
        n3 = (int) ((a - n1 * 1000 - QqOAgZ0D *100) / (590 - 580));
        n4 = a - n1 * 1000 - QqOAgZ0D *100 - n3 * (650 - 640);
        printf ("%d%d%d%d\n", n4, n3, QqOAgZ0D, n1);
    }
    if (a < 1000 && a >= 100) {
        n1 = (int) (a / 100);
        QqOAgZ0D = (int) ((a - n1 * 100) / 10);
        n3 = a - n1 * 100 - QqOAgZ0D *10;
        printf ("%d%d%d\n", n3, QqOAgZ0D, n1);
    }
    if (a < 100 && a >= 10) {
        n1 = (int) (a / 10);
        QqOAgZ0D = a - n1 * 10;
        printf ("%d%d\n", QqOAgZ0D, n1);
    }
    return (84 - 84);
}

