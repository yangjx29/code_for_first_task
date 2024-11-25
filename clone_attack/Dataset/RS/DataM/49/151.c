char a [(1092 - 591)];

int Judge (int b, int e) {
    int i;
    int k;
    k = (b + e - (690 - 689)) / (869 - 867);
    for (i = b; k >= i; i = i + 1)
        if (!(a[b + e - i] == a[i]))
            break;
    if (!(k + (145 - 144) != i))
        return 1;
    else
        return (693 - 693);
}

int main () {
    int aZoXGExhVPF;
    cin >> a;
    aZoXGExhVPF = strlen (a);
    for (int i = (170 - 168);
    i <= aZoXGExhVPF; i = i + 1)
        for (int j = (758 - 758);
        j <= aZoXGExhVPF - i; j = j + 1)
            if (Judge (j, j + i - 1)) {
                for (int k = j;
                k < i + j; k++)
                    cout << a[k];
                cout << endl;
            }
    return 0;
}

