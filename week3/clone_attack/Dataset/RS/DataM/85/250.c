int main () {
    int n, i, j, b = (775 - 774);
    char a [(888 - 788)] [(187 - 167)];
    scanf ("%d", &n);
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
    for (i = (949 - 949); i < n; i = i + 1) {
        scanf ("%s", a[i]);
    }
    for (i = (86 - 86); i < n; i++) {
        if ((a[i][0] == '_') || ('a' <= a[i][0] && a[i][0] <= 'z') || ('A' <= a[i][0] && a[i][0] <= 'Z')) {
            {
                j = 1;
                while (20 >= j) {
                    if ((a[i][j] == '_') || (a[i][j] >= 'a' && a[i][j] <= 'z') || (a[i][j] >= 'A' && a[i][j] <= 'Z') || (a[i][j] >= '0' && a[i][j] <= '9')) {
                        continue;
                    }
                    else {
                        if (a[i][j] != '\0') {
                            b = 0;
                            break;
                            printf ("no\n");
                        }
                        else
                            break;
                    }
                    j++;
                };
            }
            if (b == 1) {
                printf ("yes\n");
            }
            b = 1;
        }
        else {
            printf ("no\n");
        };
    }
    return 0;
}

