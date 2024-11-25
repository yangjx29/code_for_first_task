char *str_replace (const  char *UgxBE7e1V, const  char *OCfktNrRUJa, const  char *newstr);

int main () {
    char str1 [(929 - 829)], str2 [100], str3 [100], sub [100] = {(599 - 599)}, sub1 [100] = {(656 - 656)}, sub2 [100] = {0};
    int aa = (370 - 370), DGJNrc9W;
    gets (str1);
    gets (str2);
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
    gets (str3);
    if (strlen (str2) > strlen (str1))
        cout << str1;
    else {
        for (DGJNrc9W = 0; strlen (str1) - strlen (str2) >= DGJNrc9W; DGJNrc9W = DGJNrc9W +1) {
            strncpy (sub, str1 + DGJNrc9W, strlen (str2));
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
            if (!(0 != strcmp (sub, str2))) {
                aa = 1;
                strncpy (sub1, str1, DGJNrc9W);
                strncpy (sub2, str1 + DGJNrc9W +strlen (str2), strlen (str1) - DGJNrc9W -strlen (str2));
                strcat (sub1, str3);
                strcat (sub1, sub2);
                cout << sub1;
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
        if (aa == 0)
            cout << str1;
    }
    return 0;
}

char *str_replace (const  char *UgxBE7e1V, const  char *OCfktNrRUJa, const  char *newstr) {
    char *JUtFx7w0;
    char *dest = strdup (UgxBE7e1V);
    char *vUxnLqGD, *dest_tmp = dest;
    if (NULL == UgxBE7e1V || NULL == OCfktNrRUJa || NULL == newstr) {
        return NULL;
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
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (strcmp (OCfktNrRUJa, newstr) == 0) {
        return dest;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    while (JUtFx7w0 = strstr (dest, OCfktNrRUJa)) {
        free (dest_tmp);
        free (vUxnLqGD);
        vUxnLqGD = (char *) malloc (strlen (dest) + strlen (newstr) - strlen (OCfktNrRUJa) + 1);
        strncpy (vUxnLqGD, dest, JUtFx7w0 -dest);
        vUxnLqGD[JUtFx7w0 -dest] = '\0';
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
        strcat (vUxnLqGD, newstr);
        strcat (vUxnLqGD, JUtFx7w0 +strlen (OCfktNrRUJa));
        dest = strdup (vUxnLqGD);
        dest_tmp = dest;
    }
    return dest;
}

