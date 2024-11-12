int main () {
    char hUutjD3AF [(1285 - 285)], s1 [1000], w64EQx5 [1000];
    char *ps2 = w64EQx5;
    gets (w64EQx5);
    int n, i, j, XMgCujYyXhb, fyrsWw;
    char *ps1 = s1;
    gets (s1);
    int l1 = strlen (s1);
    int xGQnJ4jpy = strlen (w64EQx5);
    gets (hUutjD3AF);
    for (fyrsWw = (622 - 622), XMgCujYyXhb = (889 - 889); fyrsWw < xGQnJ4jpy && !(0 != XMgCujYyXhb); fyrsWw = i + 1) {
        for (i = fyrsWw, ps1 = s1, ps2 = w64EQx5 + fyrsWw; *ps1 != *ps2 && *ps1 != '\0' && *ps2 != '\0'; ps2++, i++)
            ;
        for (j = 0, XMgCujYyXhb = 1; *ps1 != '\0' && *ps2 != '\0'; ps1++, ps2++, j++) {
            if (*ps1 != *ps2 && l1 > j) {
                XMgCujYyXhb = 0;
                break;
            }
        }
    }
    if (!(xGQnJ4jpy != i))
        printf ("%s", w64EQx5);
    else {
        n = i;
        w64EQx5[n] = '\0';
        printf ("%s", w64EQx5);
        printf ("%s", hUutjD3AF);
        ps2 = w64EQx5 + n + l1;
        printf ("%s", ps2);
    }
    return 0;
}

