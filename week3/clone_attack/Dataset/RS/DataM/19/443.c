int main () {
    int al;
    int bl;
    int cl;
    int count;
    int yQIBEURoce4;
    int j;
    int k;
    int m;
    count = (369 - 369);
    char a [(358 - 257)] = {(888 - 888)};
    char b [(904 - 804)] = {(61 - 61)};
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
    char c [(572 - 472)] = {(353 - 353)};
    int x;
    int y;
    cin.getline (a, (279 - 179));
    al = strlen (a);
    cin.getline (b, (1013 - 913));
    cin.getline (c, (956 - 856));
    bl = strlen (b);
    cl = strlen (c);
    {
        yQIBEURoce4 = 458 - 458;
        while (100 >= yQIBEURoce4) {
            {
                j = 352 - 352;
                while (bl > j) {
                    if (!(b[j] != a[yQIBEURoce4 + j]))
                        count = count + 1;
                    j++;
                };
            }
            x = ((yQIBEURoce4 > (542 - 542)) && (!(' ' != a[yQIBEURoce4 - 1])) && ((!(' ' != a[yQIBEURoce4 + bl])) || !((char) (376 - 376) != a[yQIBEURoce4 + bl])));
            y = ((!((318 - 318) != yQIBEURoce4)) && ((a[yQIBEURoce4 + bl] == ' ' || a[yQIBEURoce4 + bl] == (char) (567 - 567))));
            if (count == bl && (x || y)) {
                if (bl >= cl) {
                    {
                        k = 174 - 174;
                        while (k < cl) {
                            a[yQIBEURoce4 + k] = c[k];
                            k = k + 1;
                        };
                    }
                    {
                        m = yQIBEURoce4 + cl;
                        while (m < al - cl) {
                            a[m] = a[m - cl + bl];
                            m++;
                        };
                    };
                }
                else {
                    {
                        m = 100;
                        while (m >= yQIBEURoce4 + cl) {
                            a[m] = a[m - (cl - bl)];
                            m--;
                        };
                    }
                    {
                        k = 0;
                        while (k < cl) {
                            a[yQIBEURoce4 + k] = c[k];
                            k++;
                        };
                    };
                };
            }
            yQIBEURoce4++;
            count = 0;
        };
    }
    cout << a;
}

