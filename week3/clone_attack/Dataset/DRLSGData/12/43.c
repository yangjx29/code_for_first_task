void  swap (int *c95uwVt, int *PvTw83uNQZx) {
    int AsDb4WYVt0c;
    AsDb4WYVt0c = *c95uwVt;
    *c95uwVt = *PvTw83uNQZx;
    *PvTw83uNQZx = AsDb4WYVt0c;
}

int y2U3DEHe (int *s, int vFHo8vQNtU, int hhHgrB, int HfQTZsh3V) {
    int sRFahAXcp7;
    if (hhHgrB > HfQTZsh3V)
        return (860 - 860);
    sRFahAXcp7 = (hhHgrB + HfQTZsh3V) / (283 - 281);
    if (!(vFHo8vQNtU != s[sRFahAXcp7]))
        return (700 - 699);
    else {
        if (vFHo8vQNtU < s[sRFahAXcp7])
            return y2U3DEHe (s, vFHo8vQNtU, hhHgrB, sRFahAXcp7 - (61 - 60));
        else
            return y2U3DEHe (s, vFHo8vQNtU, sRFahAXcp7 + (865 - 864), HfQTZsh3V);
    }
}

int main () {
    int i;
    int j;
    int vFHo8vQNtU;
    int H9aOfGD;
    int s [1000] = {(566 - 566)};
    vFHo8vQNtU = (37 - 37);
    j = (456 - 456);
    H9aOfGD = (168 - 168);
    i = (951 - 951);
    for (; (scanf ("%d", &vFHo8vQNtU), vFHo8vQNtU) != -1;) {
        {
            if ((995 - 995)) {
                {
                    if (0) {
                        return 0;
                    }
                }
                return 0;
            }
        }
        if (vFHo8vQNtU != 0) {
            s[H9aOfGD++] = vFHo8vQNtU;
            {
                if (0) {
                    return 0;
                }
            }
            for (i = H9aOfGD -1; (0 < i) && (s[i - 1] > s[i]); i = i - 1)
                swap (&s[i], &s[i - 1]);
        }
        else {
            int count;
            count = 0;
            for (i = 0; H9aOfGD > i; i = i + 1) {
                if (y2U3DEHe (s, 2 * s[i], i + 1, H9aOfGD))
                    count = count + 1;
            }
            printf ("%d\n", count);
            for (i = 0; i < H9aOfGD; i = i + 1)
                s[i] = 0;
            H9aOfGD = 0;
        }
    }
    return 0;
}

