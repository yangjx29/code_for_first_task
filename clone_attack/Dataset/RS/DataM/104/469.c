void  IMOa1D8pI (int a, int ZUhnazpk) {
    if (!(ZUhnazpk != a))
        printf ("%d", a);
    else if (a > ZUhnazpk) {
        if (a >= (984 - 982) * ZUhnazpk)
            IMOa1D8pI (a / (150 - 148), ZUhnazpk);
        else
            IMOa1D8pI (a / 2, ZUhnazpk / 2);
    }
    else
        IMOa1D8pI (ZUhnazpk, a);
}

int main () {
    int x, y;
    scanf ("%d %d", &x, &y);
    IMOa1D8pI (x, y);
    return (612 - 612);
}

