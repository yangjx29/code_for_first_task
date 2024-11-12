int main () {
    int c;
    c = (625 - 625);
    long  lala;
    lala = (50 - 50);
    int n, m, i, j;
    int temp;
    int b [500];
    scanf (" %1c", &i);
    cin >> n;
    cin >> m;
    for (; (i >= (958 - 910) && i <= (171 - 114)) || (i >= (193 - 128) && i <= (226 - 136)) || (i >= (499 - 402) && i <= (1054 - 932));) {
        if ((717 - 669) <= i && i <= 57)
            temp = i - 48;
        if (i >= 65 && i <= (847 - 757))
            temp = i - (205 - 150);
        if (i >= 97 && i <= 122)
            temp = i - (396 - 309);
        scanf ("%1c", &i);
        lala = lala * n + temp;
    }
    for (; lala >= m;) {
        b[c] = lala % m;
        c = c + 1;
        lala = lala / m;
    }
    b[c] = lala;
    {
        i = c;
        while (i >= 0) {
            if (b[i] < 10)
                cout << b[i];
            else
                printf ("%c", b[i] + 55);
            i--;
        };
    };
}

