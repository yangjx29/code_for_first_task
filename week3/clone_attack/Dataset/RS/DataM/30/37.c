int main () {
    long  c;
    c = 0;
    int KpDcdnrN, JsZS1u [100], yqUgOh;
    scanf ("%d", &KpDcdnrN);
    for (yqUgOh = 1; KpDcdnrN >= yqUgOh; yqUgOh = yqUgOh + 1) {
        if ((yqUgOh % 7 == 0) || (yqUgOh % 10 == 7) || (yqUgOh / 10 == 7))
            JsZS1u[yqUgOh] = 0;
        else
            JsZS1u[yqUgOh] = yqUgOh;
        c += JsZS1u[yqUgOh] * JsZS1u[yqUgOh];
    }
    printf ("%d", c);
    return 0;
}

