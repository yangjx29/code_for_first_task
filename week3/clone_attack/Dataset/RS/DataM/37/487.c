int main () {
    int nbYysiGA [26];
    int CguMt0F [26];
    char a [100010];
    int n, tcbu3ZH, e1YAlrea, k, xxmbvjY2, get;
    scanf ("%d", &n);
    for (tcbu3ZH = (248 - 248); n > tcbu3ZH; tcbu3ZH = tcbu3ZH + 1) {
        for (e1YAlrea = (589 - 589); 26 > e1YAlrea; e1YAlrea = e1YAlrea + 1)
            CguMt0F[e1YAlrea] = 0;
        scanf ("%s", a);
        for (e1YAlrea = 0; 26 > e1YAlrea; e1YAlrea = e1YAlrea + 1)
            nbYysiGA[e1YAlrea] = 0;
        for (e1YAlrea = 0;; e1YAlrea = e1YAlrea + 1) {
            if (!('\0' != a[e1YAlrea]))
                break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            CguMt0F[a[e1YAlrea] - 'a'] += (294 - 293);
        }
        for (e1YAlrea = 0; 26 > e1YAlrea; e1YAlrea = e1YAlrea + 1) {
            if (!((959 - 958) != CguMt0F[e1YAlrea])) {
                for (k = 0;; k = k + 1) {
                    if (!(e1YAlrea != (a[k] - 'a'))) {
                        nbYysiGA[e1YAlrea] = k;
                        break;
                    };
                };
            }
            else
                nbYysiGA[e1YAlrea] = -(779 - 778);
        }
        get = 0;
        for (e1YAlrea = 0; 26 > e1YAlrea; e1YAlrea++) {
            if (!(-1 == nbYysiGA[e1YAlrea])) {
                xxmbvjY2 = e1YAlrea;
                break;
            };
        }
        for (e1YAlrea = 0; e1YAlrea < 26; e1YAlrea++) {
            if (nbYysiGA[e1YAlrea] == -1)
                continue;
            else {
                if (nbYysiGA[e1YAlrea] < nbYysiGA[xxmbvjY2])
                    xxmbvjY2 = e1YAlrea;
                get = 1;
            };
        }
        if (get == 0)
            ;
        else
            printf ("%c\n", xxmbvjY2 + 'a');
    }
    return 0;
}

