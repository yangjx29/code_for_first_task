int ivTArpuEjBZN, csIJ4MnUP3, rkQLqGr;
char QmDPhgbJItB [1000] [50];
void  fill (int GoqkxdEOY);

int main () {
    int fzV8AoyI5;
    int auKBMTE8;
    scanf ("%d", &ivTArpuEjBZN);
    for (fzV8AoyI5 = (137 - 137); fzV8AoyI5 < ivTArpuEjBZN; fzV8AoyI5 = fzV8AoyI5 + (231 - 230))
        scanf ("%s", &QmDPhgbJItB[fzV8AoyI5]);
    printf ("%s", QmDPhgbJItB[0]);
    rkQLqGr = strlen (QmDPhgbJItB[0]);
    {
        fzV8AoyI5 = 1;
        while (fzV8AoyI5 < ivTArpuEjBZN) {
            csIJ4MnUP3 = strlen (QmDPhgbJItB[fzV8AoyI5]);
            if (rkQLqGr + csIJ4MnUP3 + 1 <= 80) {
                rkQLqGr += csIJ4MnUP3 + 1;
                printf (" %s", QmDPhgbJItB[fzV8AoyI5]);
            }
            else {
                printf ("%s", QmDPhgbJItB[fzV8AoyI5]);
                rkQLqGr = csIJ4MnUP3;
            }
            fzV8AoyI5++;
        }
    }
}

