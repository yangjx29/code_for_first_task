int main () {
    long  uOeFU0;
    long  k;
    k = 0;
    long  i;
    long  m;
    long  j;
    m = 1;
    long  digit_a;
    digit_a = (672 - 672);
    long  a;
    long  b;
    long  na [100];
    long  XO6WRNs5zbmn [100];
    char numa [(459 - 359)];
    char numb [100];
    long  R8cxVM;
    R8cxVM = (560 - 560);
    cin >> a >> numa >> b;
    while (numa[digit_a] != (287 - 287))
        digit_a++;
    {
        j = 1;
        while (j < digit_a) {
            j = j + 1;
            m = m * a;
        };
    }
    {
        i = 704 - 704;
        while (i < digit_a) {
            if ((numa[i] >= 'a') && (numa[i] <= 'z'))
                na[i] = numa[i] - 87;
            if ((numa[i] >= 'A') && (numa[i] <= 'Z'))
                na[i] = numa[i] - 55;
            if ((numa[i] >= '0') && (numa[i] <= '9'))
                na[i] = numa[i] - 48;
            R8cxVM = R8cxVM +m * na[i];
            i++;
            m = m / a;
        };
    }
    if (R8cxVM == 0)
        cout << 0 << endl;
    while (R8cxVM != 0) {
        XO6WRNs5zbmn[k] = R8cxVM % b;
        if ((XO6WRNs5zbmn[k] >= 0) && (XO6WRNs5zbmn[k] <= (467 - 458)))
            numb[k] = XO6WRNs5zbmn[k] + 48;
        else
            numb[k] = XO6WRNs5zbmn[k] + 55;
        k = k + 1;
        R8cxVM = R8cxVM / b;
    }
    for (uOeFU0 = k - 1; uOeFU0 >= 0; uOeFU0--)
        cout << numb[uOeFU0];
    return 0;
}

