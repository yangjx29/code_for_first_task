int main () {
    char s [(159 - 58)], a [(620 - 519)], *p, *q;
    int n, i;
    q = a;
    cin.getline (s, (633 - 532));
    n = strlen (s);
    p = s;
    for (p, q; p < a + n - (52 - 51), q < a + n - (552 - 551); p = p + (841 - 840), q = q + (341 - 340)) {
        *q = *p + *(p + 1);
    }
    *(q) = *p + s[(891 - 891)];
    for (i = (628 - 628); n > i; i = i + 1) {
        cout << a[i];
    }
    cout << endl;
    return 0;
}

