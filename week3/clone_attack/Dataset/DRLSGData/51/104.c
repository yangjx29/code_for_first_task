int main () {
    char JsI0ZQro [1000];
    int b6gAjrn, YDFg31xNKTd, urQnhpC, K0OeUdHTkf, sum = 0, b [1000], Hi56plE0BS71 = 0, dwasGKeMYIFJ = 0;
    for (YDFg31xNKTd = 0; YDFg31xNKTd < 1000; YDFg31xNKTd++)
        b[YDFg31xNKTd] = 0;
    scanf ("%d", &b6gAjrn);
    scanf ("%s", JsI0ZQro);
    for (YDFg31xNKTd = 0; strlen (JsI0ZQro) > YDFg31xNKTd; YDFg31xNKTd++) {
        for (urQnhpC = YDFg31xNKTd +1; urQnhpC < strlen (JsI0ZQro); urQnhpC++) {
            if (!(JsI0ZQro[urQnhpC] != JsI0ZQro[YDFg31xNKTd])) {
                for (K0OeUdHTkf = 1; b6gAjrn > K0OeUdHTkf; K0OeUdHTkf++) {
                    if (!(JsI0ZQro[urQnhpC + K0OeUdHTkf] != JsI0ZQro[YDFg31xNKTd +K0OeUdHTkf]))
                        sum++;
                }
                if (!(b6gAjrn - 1 != sum)) {
                    b[YDFg31xNKTd]++;
                }
            }
            sum = 0;
        }
    }
    Hi56plE0BS71 = 0;
    for (YDFg31xNKTd = 0; strlen (JsI0ZQro) > YDFg31xNKTd; YDFg31xNKTd++) {
        if (b[YDFg31xNKTd] >= Hi56plE0BS71) {
            Hi56plE0BS71 = b[YDFg31xNKTd];
        }
    }
    if (Hi56plE0BS71 != 0) {
        printf ("%d\n", Hi56plE0BS71 +1);
        for (YDFg31xNKTd = 0; YDFg31xNKTd < strlen (JsI0ZQro); YDFg31xNKTd++) {
            if (b[YDFg31xNKTd] == Hi56plE0BS71) {
                for (urQnhpC = 0; urQnhpC < b6gAjrn; urQnhpC++) {
                    printf ("%c", JsI0ZQro[YDFg31xNKTd +urQnhpC]);
                }
            }
        }
    }
    else {
    }
    return 0;
}

