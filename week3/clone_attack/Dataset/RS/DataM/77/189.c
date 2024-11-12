char Dat [maxn];
int n, Stac [maxn], Top;

int main () {
    Top = 0;
    scanf ("%s", &Dat);
    n = strlen (Dat);
    {
        int i = 0;
        while (i < n) {
            if (Dat[i] == Dat[0])
                Stac[++Top] = i;
            else
                printf ("%d %d\n", Stac[Top--], i);
            i++;
        };
    };
}

