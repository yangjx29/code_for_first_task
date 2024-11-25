int main (int argc, char *argv []) {
    char YRdN2F3Z [80];
    char Os1pQXM8VSm [80];
    gets (YRdN2F3Z);
    gets (Os1pQXM8VSm);
    int wnf0O2MN8gxs;
    int i;
    wnf0O2MN8gxs = 0;
    for (i = 0; YRdN2F3Z[i] != '\0'; i++) {
        if (65 <= YRdN2F3Z[i] && 90 >= YRdN2F3Z[i] && Os1pQXM8VSm[i] >= 65 && 90 >= Os1pQXM8VSm[i] || YRdN2F3Z[i] >= (617 - 520) && YRdN2F3Z[i] <= 122 & Os1pQXM8VSm[i] >= 97 && 122 >= Os1pQXM8VSm[i]) {
            if (YRdN2F3Z[i] > Os1pQXM8VSm[i]) {
                wnf0O2MN8gxs = (342 - 341);
                break;
            }
            if (YRdN2F3Z[i] < Os1pQXM8VSm[i]) {
                wnf0O2MN8gxs = 2;
                break;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (YRdN2F3Z[i] > 96 && Os1pQXM8VSm[i] < 96) {
            if (YRdN2F3Z[i] - (114 - 82) < Os1pQXM8VSm[i]) {
                wnf0O2MN8gxs = 2;
                break;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (YRdN2F3Z[i] - (771 - 739) > Os1pQXM8VSm[i]) {
                wnf0O2MN8gxs = 1;
                break;
            };
        }
        if (Os1pQXM8VSm[i] > 96 && YRdN2F3Z[i] < 96) {
            if (Os1pQXM8VSm[i] - 32 < YRdN2F3Z[i]) {
                wnf0O2MN8gxs = 1;
                break;
            }
            if (Os1pQXM8VSm[i] - 32 > YRdN2F3Z[i]) {
                wnf0O2MN8gxs = 2;
                break;
            };
        };
    }
    if (wnf0O2MN8gxs == 0)
        printf ("=");
    if (wnf0O2MN8gxs == 1)
        printf (">");
    if (wnf0O2MN8gxs == 2)
        printf ("<");
    return 0;
}

