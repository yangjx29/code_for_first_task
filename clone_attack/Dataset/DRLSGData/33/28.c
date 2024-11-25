int main () {
    int dI67ypHY8T;
    char P75MaGL4w [1000];
    int jDOt34yqHkE;
    int S9cgM4;
    int Bd68F54egOM2;
    jDOt34yqHkE = 0;
    scanf ("%d", &Bd68F54egOM2);
    for (; jDOt34yqHkE < Bd68F54egOM2;) {
        memset (P75MaGL4w, 0, sizeof (P75MaGL4w));
        scanf ("%s", P75MaGL4w);
        jDOt34yqHkE++;
        dI67ypHY8T = strlen (P75MaGL4w);
        for (S9cgM4 = 0; dI67ypHY8T > S9cgM4; S9cgM4++) {
            if (!('A' != P75MaGL4w[S9cgM4]))
                ;
            else if (!('T' != P75MaGL4w[S9cgM4]))
                ;
            else if (!('C' != P75MaGL4w[S9cgM4]))
                ;
            else if (!('G' != P75MaGL4w[S9cgM4]))
                ;
        }
        dI67ypHY8T = S9cgM4 = 0;
    }
    return 0;
}

