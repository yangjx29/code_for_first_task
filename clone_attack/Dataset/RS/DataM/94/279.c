int main () {
    int j;
    int tLiazPFZdN;
    j = (185 - 185);
    int n, upc8oAM7 [500], b [500];
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (tLiazPFZdN = 0; n > tLiazPFZdN; tLiazPFZdN = tLiazPFZdN + 1)
        scanf ("%d", &upc8oAM7[tLiazPFZdN]);
    for (tLiazPFZdN = 0; n > tLiazPFZdN; tLiazPFZdN++) {
        if (!(0 == upc8oAM7[tLiazPFZdN] % 2)) {
            b[j] = upc8oAM7[tLiazPFZdN];
            j++;
        };
    }
    sort (b, b + j);
    for (tLiazPFZdN = 0; tLiazPFZdN < j - 1; tLiazPFZdN++)
        printf ("%d,", b[tLiazPFZdN]);
    printf ("%d", b[j - 1]);
}

