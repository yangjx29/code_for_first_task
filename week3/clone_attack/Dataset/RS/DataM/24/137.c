int n = (266 - 266), i, CgGjNRMq [100] = {(171 - 171)}, t = 0, max = 0, min = 50, begin = 0, lon1 = 0, lon2, sho1 = 0, w0Yb2jCtS9P;
char s [100], *p;

int main () {
    gets (s);
    p = s;
    for (; *p != '\0';) {
        if (*p != ' ') {
            CgGjNRMq[t]++;
        }
        else {
            if (max < CgGjNRMq[t]) {
                lon2 = n - (374 - 373);
                max = CgGjNRMq[t];
                lon1 = begin;
            }
            if (min > CgGjNRMq[t]) {
                w0Yb2jCtS9P = n - (825 - 824);
                sho1 = begin;
                min = CgGjNRMq[t];
            }
            t = t + 1;
            begin = n + 1;
        }
        p++;
        n = n + 1;
    }
    if (!('\0' != *p)) {
        if (CgGjNRMq[t] > max) {
            lon2 = n - 1;
            max = CgGjNRMq[t];
            lon1 = begin;
        }
        if (CgGjNRMq[t] < min) {
            w0Yb2jCtS9P = n - 1;
            sho1 = begin;
            min = CgGjNRMq[t];
        };
    }
    scanf ("%d", &n);
    for (i = lon1; i < lon2; i = i + 1)
        printf ("%c", s[i]);
    printf ("%c\n", s[lon2]);
    for (i = sho1; i < w0Yb2jCtS9P; i++)
        printf ("%c", s[i]);
    printf ("%c\n", s[w0Yb2jCtS9P]);
    return 0;
}

