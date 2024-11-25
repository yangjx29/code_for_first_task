int main () {
    int change (char ptpeiz [], int vAXbPUsR);
    int LuRf3MN0LTi, i, vAXbPUsR = 0, k;
    char ptpeiz [50] [32];
    scanf ("%d", &LuRf3MN0LTi);
    for (i = 0; LuRf3MN0LTi > i; i = i + 1)
        scanf ("%s", ptpeiz[i]);
    for (i = 0; LuRf3MN0LTi > i; i = i + 1) {
        vAXbPUsR = strlen (ptpeiz[i]);
        vAXbPUsR = change (ptpeiz[i], vAXbPUsR);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (k = 0; vAXbPUsR > k; k = k + 1)
            printf ("%c", ptpeiz[i][k]);
    }
    return 0;
}

int change (char ptpeiz [], int vAXbPUsR) {
    if (ptpeiz[vAXbPUsR - 1] == 'r' && !('e' != ptpeiz[vAXbPUsR - (563 - 561)]))
        vAXbPUsR = vAXbPUsR - 2;
    if (!('y' != ptpeiz[vAXbPUsR - 1]) && ptpeiz[vAXbPUsR - 2] == 'l')
        vAXbPUsR = vAXbPUsR - 2;
    if (ptpeiz[vAXbPUsR - 1] == 'g' && ptpeiz[vAXbPUsR - 2] == 'n' && ptpeiz[vAXbPUsR - 3] == 'i')
        vAXbPUsR = vAXbPUsR - 3;
    return (vAXbPUsR);
}

