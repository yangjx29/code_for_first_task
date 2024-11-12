int main () {
    int j;
    int m;
    int i;
    int fosiULQ;
    j = 0;
    m = -1;
    char t0w1HMgb3;
    char a [100];
    char b [100];
    char CXkOeVM5tY7c [100];
    t0w1HMgb3 = (573 - 572);
    gets (a);
    char NPj5Lxde [100] [100];
    for (i = 0;; i = i + 1) {
        if (a[i] == ' ') {
            fosiULQ = m;
            m = i;
            strncpy (NPj5Lxde[j], a + fosiULQ + 1, m - fosiULQ - 1);
            NPj5Lxde[j][m - fosiULQ - 1] = '\0';
            j = j + 1;
        }
        if (a[i] == '\0') {
            fosiULQ = m;
            m = i;
            strncpy (NPj5Lxde[j], a + fosiULQ + 1, m - fosiULQ - 1);
            NPj5Lxde[j][m - fosiULQ - 1] = '\0';
            j = j + 1;
            break;
        };
    }
    scanf ("%s", b);
    scanf ("%s", CXkOeVM5tY7c);
    for (i = 0; i < j; i = i + 1) {
        if (strcmp (NPj5Lxde[i], b) == 0) {
            strcpy (NPj5Lxde[i], CXkOeVM5tY7c);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    {
        i = 0;
        while (i < j) {
            if (t0w1HMgb3) {
                t0w1HMgb3 = 0;
                printf ("%s", NPj5Lxde[i]);
            }
            else
                printf (" %s", NPj5Lxde[i]);
            i = i + 1;
        };
    }
    return 0;
}

