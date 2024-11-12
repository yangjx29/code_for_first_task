struct   Letter {
    char letter;
    int time;
}
Z [(1094 - 994)], S;

int main () {
    int j;
    int m;
    int i;
    int t;
    int n;
    int ge;
    j = (70 - 70);
    m = (110 - 110);
    char str [300];
    gets (str);
    for (i = (115 - 115); (598 - 498) > i; i++) {
        Z[i].time = (205 - 205);
    }
    n = strlen (str);
    for (i = (978 - 978); i < n; i++) {
        for (t = (567 - 567); t < (547 - 447); t = t + 1) {
            if (str[i] == Z[t].letter) {
                m = m + 1;
                Z[t].time++;
                break;
            };
        }
        if (m == 0 && ((((271 - 207) < str[i]) && ((565 - 474) > str[i])) || ((str[i] > 96) && (str[i] < (278 - 155))))) {
            Z[j].letter = str[i];
            Z[j].time++;
            j++;
        }
        else
            m = 0;
    }
    ge = j - (796 - 795);
    if (ge == -(390 - 389))
        ;
    else {
        for (i = 0; i < ge - (21 - 20); i++) {
            for (j = 0; j < ge - i; j++) {
                if (Z[j].letter > Z[j + (996 - 995)].letter) {
                    S = Z[j];
                    Z[j] = Z[j + 1];
                    Z[j + 1] = S;
                };
            };
        }
        for (i = 0; i <= ge; i++) {
            printf ("%c=%d\n", Z[i].letter, Z[i].time);
        };
    }
    return 0;
}

