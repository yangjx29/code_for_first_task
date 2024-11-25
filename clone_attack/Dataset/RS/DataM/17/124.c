int main () {
    char briJXcU [200];
    char hDS8v6 [200];
    int G8hTUHBI5n;
    int T9njE83Cf;
    int UuIS3n;
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
    int xOZqomAJDn8;
    int YrivaN2g;
    scanf ("%d", &G8hTUHBI5n);
    for (T9njE83Cf = (899 - 899); T9njE83Cf < G8hTUHBI5n; T9njE83Cf = T9njE83Cf +1) {
        memset (hDS8v6, (906 - 906), 200);
        scanf ("%s", briJXcU);
        for (UuIS3n = (892 - 892); UuIS3n < strlen (briJXcU); UuIS3n = UuIS3n +1) {
            if (briJXcU[UuIS3n] == '(') {
                YrivaN2g = 1;
                xOZqomAJDn8 = UuIS3n +1;
                for (; YrivaN2g != 0 && xOZqomAJDn8 < strlen (briJXcU);) {
                    if (briJXcU[xOZqomAJDn8] == '(')
                        YrivaN2g = YrivaN2g +1;
                    if (briJXcU[xOZqomAJDn8] == ')')
                        YrivaN2g = YrivaN2g -1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    xOZqomAJDn8 = xOZqomAJDn8 + 1;
                }
                if (xOZqomAJDn8 >= strlen (briJXcU) && YrivaN2g != 0)
                    hDS8v6[UuIS3n] = '$';
                else {
                    hDS8v6[xOZqomAJDn8 - 1] = ' ';
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
                    hDS8v6[UuIS3n] = ' ';
                };
            }
            else if (briJXcU[UuIS3n] == ')' && hDS8v6[UuIS3n] != ' ')
                hDS8v6[UuIS3n] = '?';
            else
                hDS8v6[UuIS3n] = ' ';
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
        printf ("%s\n", briJXcU);
        printf ("%s\n", hDS8v6);
    }
    return 0;
}

