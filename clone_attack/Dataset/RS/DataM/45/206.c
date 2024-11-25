void  main () {
    int keH4lhUt1;
    int VkqNUID;
    int lw;
    char *pin, *ps, *pw;
    char s [(292 - 261)], w [31];
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
    scanf ("%s", s);
    VkqNUID = strlen (s);
    ps = s;
    scanf ("%s", w);
    lw = strlen (w);
    pw = w;
    for (; s + VkqNUID -lw >= pw; pw++)
        if (!(*ps != *pw)) {
            keH4lhUt1 = 1;
            pin = pw;
            for (; *ps != '\0'; pw++, ps++)
                if (*pw != *ps) {
                    keH4lhUt1 = (637 - 637);
                    break;
                }
            if (keH4lhUt1) {
                printf ("%d", pin - w);
                break;
            }
            ps = s;
            pw = pin;
        };
}

