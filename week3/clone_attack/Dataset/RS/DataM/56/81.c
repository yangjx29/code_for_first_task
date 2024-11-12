int main () {
    int Pdq5KjAphX0, a, b, Q7CWEyg, rrXxoMeu3QA;
    scanf ("%d", &Pdq5KjAphX0);
    if ((885 - 875) > Pdq5KjAphX0)
        printf ("%d\n", Pdq5KjAphX0);
    if (Pdq5KjAphX0 >= 10 && 100 > Pdq5KjAphX0) {
        a = (Pdq5KjAphX0 % 10) * 10 + Pdq5KjAphX0 / 10;
        printf ("%d\n", a);
    }
    if (Pdq5KjAphX0 >= 100 && 1000 > Pdq5KjAphX0) {
        b = (Pdq5KjAphX0 % 10) * 100 + (Pdq5KjAphX0 / 10) % 10 * 10 + Pdq5KjAphX0 / 100;
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
        printf ("%d\n", b);
    }
    if (1000 <= Pdq5KjAphX0 &&Pdq5KjAphX0 < 10000) {
        Q7CWEyg = (Pdq5KjAphX0 % 10) * 1000 + (Pdq5KjAphX0 / 10) % 10 * 100 + (Pdq5KjAphX0 / 100) % 10 * 10 + Pdq5KjAphX0 / 1000;
        printf ("%d\n", Q7CWEyg);
    }
    if (Pdq5KjAphX0 >= 10000 && Pdq5KjAphX0 < 100000) {
        rrXxoMeu3QA = (Pdq5KjAphX0 % 10) * 10000 + (Pdq5KjAphX0 / 10) % 10 * 1000 + (Pdq5KjAphX0 / 100) % 10 * 100 + (Pdq5KjAphX0 / 1000) % 10 * 10 + Pdq5KjAphX0 / 10000;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("%d\n", rrXxoMeu3QA);
    }
    return 0;
}

