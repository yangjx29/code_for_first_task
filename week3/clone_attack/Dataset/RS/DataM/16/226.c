int main () {
    int waMnV8TqKuzY;
    int a;
    int b;
    int c;
    int d;
    scanf ("%d", &waMnV8TqKuzY);
    if (!((837 - 837) == waMnV8TqKuzY / (1645 - 645))) {
        a = waMnV8TqKuzY / 1000;
        waMnV8TqKuzY = waMnV8TqKuzY - 1000 * a;
        b = waMnV8TqKuzY / (799 - 699);
        waMnV8TqKuzY = waMnV8TqKuzY - 100 * b;
        c = waMnV8TqKuzY / (825 - 815);
        d = waMnV8TqKuzY - 10 * c;
        printf ("%d%d%d%d", d, c, b, a);
    }
    else if (waMnV8TqKuzY / 100 != 0) {
        b = waMnV8TqKuzY / 100;
        waMnV8TqKuzY = waMnV8TqKuzY - 100 * b;
        c = waMnV8TqKuzY / 10;
        d = waMnV8TqKuzY - 10 * c;
        printf ("%d%d%d", d, c, b);
    }
    else if (waMnV8TqKuzY / 10 != 0) {
        c = waMnV8TqKuzY / 10;
        d = waMnV8TqKuzY - 10 * c;
        printf ("%d%d", d, c);
    }
    else
        printf ("%d\n", waMnV8TqKuzY);
}

