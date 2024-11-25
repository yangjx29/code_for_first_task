int main () {
    int i, p = (711 - 711);
    int uE6MxFXoBpN [MAX], h2 [MAX], m1 [MAX], m2 [MAX], s1 [MAX], s2 [MAX];
    int second [MAX];
    int a, b, c;
    for (i = 0; i < MAX; i = i + 1) {
        scanf ("%d %d %d %d %d %d", &uE6MxFXoBpN[i], &m1[i], &s1[i], &h2[i], &m2[i], &s2[i]);
        if (uE6MxFXoBpN[i] == 0 && !(0 != m1[i]) && s1[i] == 0 && h2[i] == 0 && m2[i] == 0 && s2[i] == 0) {
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
            };
        }
        h2[i] = h2[i] + 12;
        a = (h2[i] - uE6MxFXoBpN[i] - 1) * 60 * 60;
        b = (60 - m1[i] - 1) * 60;
        c = 60 - s1[i];
        second[i] = a + b + c + (m2[i] * 60) + s2[i];
        p = p + 1;
    }
    for (i = 0; i < p; i = i + 1) {
        printf ("%d\n", second[i]);
    }
    return 0;
}

