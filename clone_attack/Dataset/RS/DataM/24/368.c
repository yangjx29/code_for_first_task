int main () {
    int JsxhWXe82pU;
    int ZE2dNmGpQM;
    int i;
    int j;
    int l;
    int ik7f12zMDuL;
    int G16xl8KC;
    int m;
    JsxhWXe82pU = (674 - 674);
    ZE2dNmGpQM = 0;
    char s [10000];
    char d [200] [(285 - 235)];
    char b [50];
    char svWI1djk6 [50];
    gets (s);
    l = strlen (s);
    {
        i = 0;
        while (l > i) {
            if (!(' ' == s[i])) {
                d[JsxhWXe82pU][ZE2dNmGpQM] = s[i];
                ZE2dNmGpQM++;
            }
            else {
                d[JsxhWXe82pU][ZE2dNmGpQM] = '\0';
                JsxhWXe82pU++;
                ZE2dNmGpQM = 0;
            }
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
            i++;
        };
    }
    d[JsxhWXe82pU][ZE2dNmGpQM] = '\0';
    ik7f12zMDuL = strlen (d[0]);
    G16xl8KC = ik7f12zMDuL;
    strcpy (b, d[0]);
    strcpy (svWI1djk6, d[0]);
    for (j = 1; JsxhWXe82pU >= j; j = j + 1) {
        m = strlen (d[j]);
        if (ik7f12zMDuL < m) {
            ik7f12zMDuL = strlen (d[j]);
            strcpy (b, d[j]);
        }
        if (G16xl8KC > m) {
            G16xl8KC = strlen (d[j]);
            strcpy (svWI1djk6, d[j]);
        };
    }
    printf ("%s\n%s", b, svWI1djk6);
    return 0;
}

