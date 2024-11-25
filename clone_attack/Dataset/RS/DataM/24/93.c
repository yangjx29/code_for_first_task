int main () {
    char z6e0LFqRU4o [1000];
    gets (z6e0LFqRU4o);
    int max_len;
    int min_len;
    int zCShX3evMaA;
    int len;
    int n;
    max_len = -(120 - 119);
    min_len = 100;
    int vt3i65;
    vt3i65 = 0;
    int max_start;
    int WInOBTl;
    int min_start;
    int min_end;
    int end;
    int i;
    len = strlen (z6e0LFqRU4o);
    scanf ("%d\n", &n);
    for (; vt3i65 < len;) {
        end = vt3i65;
        for (; len > end && !(' ' == z6e0LFqRU4o[end]);) {
            end = end + 1;
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
        zCShX3evMaA = end - vt3i65;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (zCShX3evMaA > max_len) {
            WInOBTl = end;
            max_start = vt3i65;
            max_len = zCShX3evMaA;
        }
        if (zCShX3evMaA < min_len) {
            min_start = vt3i65;
            min_end = end;
            min_len = zCShX3evMaA;
        }
        vt3i65 = end + 1;
    }
    for (i = max_start; i < WInOBTl; i = i + 1)
        printf ("%c", z6e0LFqRU4o[i]);
    for (i = min_start; i < min_end; i = i + 1)
        printf ("%c", z6e0LFqRU4o[i]);
    return 0;
}

