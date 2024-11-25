int main () {
    void  reverse (int Qwcmu3DVdAGq);
    int Qwcmu3DVdAGq;
    int i;
    for (i = 1; 6 >= i; i++) {
        scanf ("%d", &Qwcmu3DVdAGq);
        if (Qwcmu3DVdAGq > 0)
            reverse (Qwcmu3DVdAGq);
        else if (!(0 != Qwcmu3DVdAGq))
            ;
        else {
            reverse (-Qwcmu3DVdAGq);
            printf ("-");
        };
    }
    return 0;
}

void  reverse (int Qwcmu3DVdAGq) {
    int a;
    while (Qwcmu3DVdAGq > 0) {
        if (Qwcmu3DVdAGq % 10 == 0) {
            Qwcmu3DVdAGq = Qwcmu3DVdAGq / (10);
        }
        else
            break;
    }
    while (Qwcmu3DVdAGq > 0) {
        printf ("%d", Qwcmu3DVdAGq % 10);
        Qwcmu3DVdAGq /= 10;
    }
    printf ("\n");
}

