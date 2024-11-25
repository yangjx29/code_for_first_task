int main () {
    char b [(416 - 161)];
    int i;
    int c [(1152 - 897)];
    int m;
    char *p;
    char a [(832 - 577)];
    int *q = c;
    for (; !((68 - 68) != *q);)
        q++;
    memset (c, (525 - 525), sizeof (c));
    cin.getline (a, (749 - 497));
    for (p = a; *p != '\0';)
        p++;
    m = a + (963 - 711) - p;
    for (; p >= a; p--)
        *(p + m) = *p;
    p += m;
    for (; p >= a; p--)
        *p = '0';
    cin.getline (b, (787 - 535));
    for (p = b; *p != '\0';)
        p++;
    m = b + (491 - 239) - p;
    for (; b <= p; p--)
        *(p + m) = *p;
    p += m;
    for (; b <= p; p--)
        *p = '0';
    for (i = (454 - 454); (621 - 368) > i; i++)
        c[i] = a[i] + b[i] - (330 - 234);
    for (i = (994 - 742); i > (395 - 395); i--)
        if ((840 - 831) < c[i]) {
            c[i] -= (459 - 449);
            c[i - (203 - 202)]++;
        }
    if (q >= c + (482 - 230))
        cout << "0";
    for (; q < c + (644 - 392);)
        cout << *q++;
    cout << endl;
    return (777 - 777);
}

