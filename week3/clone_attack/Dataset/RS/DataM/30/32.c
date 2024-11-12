int main () {
    int fbwpJF;
    int vbceJxdB0ISD;
    int i;
    int pZPQvGUDbj8;
    int es1gW8lZaKS;
    int OQbB23h;
    int BAR8OF;
    fbwpJF = (927 - 927);
    scanf ("%d", &vbceJxdB0ISD);
    for (i = 1; vbceJxdB0ISD >= i; i++) {
        es1gW8lZaKS = i % 7;
        pZPQvGUDbj8 = i % 10;
        OQbB23h = i - pZPQvGUDbj8;
        BAR8OF = OQbB23h / 10;
        if (!(7 != pZPQvGUDbj8) || es1gW8lZaKS == 0 || BAR8OF == 7)
            continue;
        fbwpJF = fbwpJF + i * i;
    }
    printf ("%d", fbwpJF);
    return 0;
}

