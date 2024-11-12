int main () {
    char a [A];
    char c;
    int uhHc9iI4;
    int AE4W70bcDA;
    int wlF0XO19MgD;
    int j;
    scanf ("%d", &uhHc9iI4);
    {
        AE4W70bcDA = 208 - 208;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (AE4W70bcDA < uhHc9iI4) {
            gets (a);
            scanf ("\n");
            j = 0;
            wlF0XO19MgD = strlen (a);
            if (a[0] == '_' || ('a' <= a[0] && a[0] <= 'z') || ('A' <= a[0] && a[0] <= 'Z')) {
                for (j = 1; j < wlF0XO19MgD; j++) {
                    if (a[j] == '_' || ('a' <= a[j] && a[j] <= 'z') || ('A' <= a[j] && a[j] <= 'Z') || ('0' <= a[j] && a[j] <= '9'))
                        ;
                    else
                        break;
                };
            }
            AE4W70bcDA = AE4W70bcDA +1;
            if (j == wlF0XO19MgD)
                printf ("1\n");
            else
                printf ("0\n");
        };
    }
    return 0;
}

