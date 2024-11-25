int main () {
    int d;
    int b;
    int IC2narZBY;
    int tD0oOQ;
    b = -1;
    IC2narZBY = -2;
    scanf ("%d", &tD0oOQ);
    for (int i = 0;
    i < tD0oOQ; i = i + 1) {
        scanf ("%d", &d);
        if (b < d) {
            IC2narZBY = b;
            b = d;
        }
        else if (b > d && d > IC2narZBY) {
            IC2narZBY = d;
        };
    }
    printf ("%d\n%d", b, IC2narZBY);
    return 0;
}

