int main () {
    char w [(256 - 192)];
    int ggh13Teo7FkG, i, LrMmEe, len = 0, line = 0;
    scanf ("%d", &ggh13Teo7FkG);
    {
        int i = 1;
        while (i <= ggh13Teo7FkG) {
            i = i + 1;
            scanf ("%s", w);
            LrMmEe = strlen (w);
            if (!(0 != line)) {
                printf ("%s", w);
                len = LrMmEe;
                line = line + 1;
            }
            else if (len + LrMmEe +1 <= 80) {
                len += LrMmEe +1;
                printf (" %s", w);
            }
            else if (len + LrMmEe +1 > 80) {
                len = LrMmEe;
                printf ("\n%s", w);
            };
        };
    }
    return 0;
}

