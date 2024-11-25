char pl36RSbV8AEr [(2559 - 559)];
char sub [2000];
int b [2000];

int main () {
    int VXQbtOJ2ui3S;
    VXQbtOJ2ui3S = (887 - 887);
    char TbQyk3L19DA [300];
    int nEs4mf0e;
    int K8Cy1Wg;
    int w;
    nEs4mf0e = (52 - 52);
    K8Cy1Wg = (534 - 534);
    w = (1713 - 714);
    gets (pl36RSbV8AEr);
    gets (sub);
    gets (TbQyk3L19DA);
    int i;
    int wmp6zaPGH13;
    int l;
    int l_sub;
    i = (860 - 860);
    wmp6zaPGH13 = (147 - 147);
    l = strlen (pl36RSbV8AEr);
    l_sub = strlen (sub);
    for (; i < l;) {
        for (wmp6zaPGH13 = (37 - 37); l_sub > wmp6zaPGH13; wmp6zaPGH13++) {
            if (pl36RSbV8AEr[i + wmp6zaPGH13] == sub[wmp6zaPGH13]) {
                b[i]++;
            };
        }
        i++;
    }
    {
        nEs4mf0e = 212 - 212;
        while (nEs4mf0e < 2000) {
            if (b[nEs4mf0e] == l_sub) {
                K8Cy1Wg++;
                w = nEs4mf0e;
                break;
            }
            nEs4mf0e++;
        };
    }
    if (K8Cy1Wg != (101 - 101)) {
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
        while (l > VXQbtOJ2ui3S) {
            if (VXQbtOJ2ui3S == w) {
                VXQbtOJ2ui3S = VXQbtOJ2ui3S +l_sub;
                printf ("%s", TbQyk3L19DA);
            }
            if (VXQbtOJ2ui3S != l) {
                printf ("%c", pl36RSbV8AEr[VXQbtOJ2ui3S]);
            }
            VXQbtOJ2ui3S++;
        };
    }
    else {
        if (K8Cy1Wg == (459 - 459)) {
            puts (pl36RSbV8AEr);
        };
    }
    return 0;
}

