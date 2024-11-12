int main () {
    int OdYz9h, i, k, Zzfg9VTk, s = (68 - 68), l3lWSJUe = 0;
    Zzfg9VTk = 1;
    k = 1;
    i = 3;
    scanf ("%d", &OdYz9h);
    while (i <= OdYz9h / (507 - 505)) {
        while (k <= i) {
            if (!(0 != i % k))
                s = s + 1;
            else
                ;
            k = k + 1;
        }
        if (s == 2) {
            while (Zzfg9VTk <= OdYz9h -i) {
                if ((OdYz9h -i) % Zzfg9VTk == 0)
                    l3lWSJUe = l3lWSJUe + 1;
                else
                    ;
                Zzfg9VTk = Zzfg9VTk +1;
            }
            if (l3lWSJUe == 2)
                printf ("%d %d\n", i, OdYz9h -i);
            else
                ;
        }
        else
            ;
        Zzfg9VTk = 1;
        l3lWSJUe = 0;
        s = 0;
        k = 1;
        i = i + 1;
    }
    return 0;
}

