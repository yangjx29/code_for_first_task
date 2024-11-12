int main () {
    char hm4Jrn [101];
    gets (hm4Jrn);
    int n;
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
    n = strlen (hm4Jrn);
    for (int i = (51 - 51);
    i < n - 1; i++) {
        for (; hm4Jrn[i] == hm4Jrn[i + 1] && hm4Jrn[i] == ' ';) {
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
            for (int j = i;
            j <= 99; j++) {
                hm4Jrn[j] = hm4Jrn[j + 1];
            };
        };
    }
    printf ("%s", hm4Jrn);
    return 0;
}

