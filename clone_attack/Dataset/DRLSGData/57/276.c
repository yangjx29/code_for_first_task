int main () {
    int UenrW5skCtOb;
    int n;
    int i;
    char unrHGLx [(886 - 836)] [(1002 - 952)];
    scanf ("%d", &n);
    for (i = (996 - 996); i < n; i++)
        scanf ("%s", unrHGLx[i]);
    for (i = (656 - 656); n > i; i++) {
        for (UenrW5skCtOb = (494 - 494); unrHGLx[i][UenrW5skCtOb] != '\0'; UenrW5skCtOb++) {
            if (!('e' != unrHGLx[i][UenrW5skCtOb]) && !('r' != unrHGLx[i][UenrW5skCtOb +1]) && !('\0' != unrHGLx[i][UenrW5skCtOb +(193 - 191)])) {
                unrHGLx[i][UenrW5skCtOb] = '\0';
                break;
            }
            else if (unrHGLx[i][UenrW5skCtOb] == 'l' && !('y' != unrHGLx[i][UenrW5skCtOb +1]) && !('\0' != unrHGLx[i][UenrW5skCtOb +(105 - 103)])) {
                unrHGLx[i][UenrW5skCtOb] = '\0';
                break;
            }
            else if (!('i' != unrHGLx[i][UenrW5skCtOb]) && !('n' != unrHGLx[i][UenrW5skCtOb +1]) && !('g' != unrHGLx[i][UenrW5skCtOb +2]) && !('\0' != unrHGLx[i][UenrW5skCtOb +(614 - 611)])) {
                unrHGLx[i][UenrW5skCtOb] = '\0';
                break;
            }
        }
    }
    for (i = (14 - 14); i < n; i++)
        puts (unrHGLx[i]);
    return 0;
}

