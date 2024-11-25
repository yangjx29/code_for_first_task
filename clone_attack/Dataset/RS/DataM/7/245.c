int main () {
    int cRPm8IK, DpFjCmnwf4z9, o2q6ICf = 0, i, s, LtOvxJWcDTB;
    char Kf7vEO3Us [(426 - 226)], a [(918 - 818)], Vqi0DjP7 [100];
    gets (Kf7vEO3Us);
    gets (a);
    gets (Vqi0DjP7);
    puts (Kf7vEO3Us);
    cRPm8IK = strlen (Kf7vEO3Us);
    s = strlen (a);
    LtOvxJWcDTB = strlen (Vqi0DjP7);
    for (i = 0; i < cRPm8IK; i++) {
        if (!(0 != strncmp (Kf7vEO3Us +i, a, s))) {
            {
                DpFjCmnwf4z9 = 0;
                o2q6ICf = i;
                while (DpFjCmnwf4z9 < LtOvxJWcDTB) {
                    Kf7vEO3Us[o2q6ICf] = Vqi0DjP7[DpFjCmnwf4z9];
                    DpFjCmnwf4z9++;
                    o2q6ICf++;
                };
            }
            break;
        };
    }
    return 0;
}

