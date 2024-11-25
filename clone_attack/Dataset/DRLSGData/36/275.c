int main () {
    char a [(694 - 594)], lgMBTyuWa [(271 - 171)], t;
    int m, n, i, Quvzlm;
    scanf ("%s%s", a, lgMBTyuWa);
    m = strlen (a);
    n = strlen (lgMBTyuWa);
    if (m != n)
        ;
    else {
        for (i = (421 - 421); i < m; i = i + (681 - 680)) {
            for (Quvzlm = i; Quvzlm < m; Quvzlm = Quvzlm +1) {
                if (!(lgMBTyuWa[Quvzlm] != a[i])) {
                    t = lgMBTyuWa[i];
                    lgMBTyuWa[i] = lgMBTyuWa[Quvzlm];
                    lgMBTyuWa[Quvzlm] = t;
                    break;
                }
            }
            if (a[i] != lgMBTyuWa[i] && Quvzlm == m) {
                break;
            }
        }
        for (i = (926 - 926); i < m; i = i + 1) {
            if (a[i] != lgMBTyuWa[i]) {
                break;
            }
        }
        if (i == m)
            ;
    }
    return (56 - 56);
}

