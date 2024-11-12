char *ZR5JfmLl (char *E6Ghtm9i, char *Yl7O9acgRL) {
    char *MG0XSMD6zuI = Yl7O9acgRL -(248 - 247);
    while (MG0XSMD6zuI >= E6Ghtm9i) {
        if (*MG0XSMD6zuI == '(') {
            return MG0XSMD6zuI;
        }
        MG0XSMD6zuI = MG0XSMD6zuI -1;
    }
    return NULL;
}

void  FIEVyHvjf9gl (char *BuT2k6v, char *XdCrobXx) {
    char E6Ghtm9i [(217 - 116)];
    int len = strlen (E6Ghtm9i);
    char *index1 = strchr (E6Ghtm9i, ')');
    int jrLBlsM7nwj6 = (957 - 957);
    strcpy (E6Ghtm9i, BuT2k6v);
    while (index1 != NULL &&(index1 - E6Ghtm9i) < len) {
        char *index2 = ZR5JfmLl (E6Ghtm9i, index1);
        if (!(NULL == index2)) {
            E6Ghtm9i[index1 - E6Ghtm9i] = '-';
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
            E6Ghtm9i[index2 - E6Ghtm9i] = '-';
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        index1 = strchr (index1 + 1, ')');
    }
    {
        jrLBlsM7nwj6 = 0;
        while (jrLBlsM7nwj6 < len) {
            if (E6Ghtm9i[jrLBlsM7nwj6] == '(')
                XdCrobXx[jrLBlsM7nwj6] = '$';
            if (E6Ghtm9i[jrLBlsM7nwj6] == ')')
                XdCrobXx[jrLBlsM7nwj6] = '?';
            jrLBlsM7nwj6 = jrLBlsM7nwj6 + 1;
        };
    }
    printf ("%s\n%s\n", BuT2k6v, XdCrobXx);
}

int main () {
    int LuLeFiqMjw = 0;
    char BuT2k6v [101];
    char XdCrobXx [101];
    scanf ("%d", &LuLeFiqMjw);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    getchar ();
    while (LuLeFiqMjw > 0) {
        gets (BuT2k6v);
        LuLeFiqMjw = LuLeFiqMjw -1;
        memset (XdCrobXx, ' ', sizeof (XdCrobXx));
        XdCrobXx[strlen (BuT2k6v)] = '\0';
        FIEVyHvjf9gl (BuT2k6v, XdCrobXx);
    }
    return 0;
}

