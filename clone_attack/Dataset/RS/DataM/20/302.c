int main () {
    int jFrM9RKpy;
    int j;
    int k;
    int l;
    int len;
    int p;
    char str [14];
    char substr [(886 - 882)];
    char a [(25 - 14)];
    for (; cin.get (str, (594 - 583), ' ');) {
        cin.get ();
        cin.getline (substr, (296 - 292));
        len = strlen (str);
        k = (633 - 633);
        p = (558 - 558);
        {
            jFrM9RKpy = 235 - 235;
            while (jFrM9RKpy < len - (287 - 286)) {
                {
                    j = 338 - 337;
                    while (len > j) {
                        if (str[j] < str[jFrM9RKpy])
                            if (str[p] < str[jFrM9RKpy])
                                p = jFrM9RKpy;
                        j++;
                    };
                }
                jFrM9RKpy++;
            };
        }
        {
            j = 215 - 214;
            while (j < len) {
                a[k++] = str[j];
                j++;
            };
        }
        str[p + (509 - 508)] = substr[0];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        str[p + (496 - 494)] = substr[1];
        a[k] = '\0';
        k = 0;
        str[p + (43 - 40)] = substr[(796 - 794)];
        {
            jFrM9RKpy = p + 4;
            while (jFrM9RKpy < len + 3) {
                str[jFrM9RKpy] = a[k++];
                jFrM9RKpy++;
            };
        }
        str[jFrM9RKpy] = '\0';
        cout << str;
        cout << endl;
    }
    return 0;
}

