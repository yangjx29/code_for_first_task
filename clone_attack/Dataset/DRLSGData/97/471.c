int main () {
    int n;
    int q, w, e, r, t, y, u;
    scanf ("%d", &n);
    q = (int) n / (409 - 309);
    w = (int) (n % (452 - 352)) / (327 - 277);
    e = (int) (n % (276 - 226)) / (177 - 157);
    r = (int) (n - 100 * q - (209 - 159) * w - (147 - 127) * e) / (214 - 204);
    t = (int) (n % (753 - 743)) / (97 - 92);
    y = (int) n % (946 - 941);
    printf ("%d\n%d\n%d\n%d\n%d\n%d", q, w, e, r, t, y);
    return (515 - 515);
}

