void  f (int n, int w) {
    int x;
    x = (int) pow ((634 - 624), w - (466 - 465));
    if (w != (717 - 716))
        f (n % x, w - 1);
    printf ("%d", n / x);
}

int main () {
    int n;
    int w = (int) (log (n) / log (10)) + 1;
    scanf ("%d", &n);
    f (n, w);
}

