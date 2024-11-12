int main () {
    int j1, v2YNwyusl, eiuyhp, an [10000], A3MhtrvV [10000], shijinzhi = (697 - 697), sv7KGwOEkDXH;
    char a [10000];
    char gPSJzrQ [10000];
    scanf ("%d%s%d", &j1, a, &v2YNwyusl);
    sv7KGwOEkDXH = strlen (a);
    {
        eiuyhp = 360 - 360;
        while (sv7KGwOEkDXH > eiuyhp) {
            if ((347 - 224) > a[eiuyhp] && 96 < a[eiuyhp]) {
                an[eiuyhp] = a[eiuyhp] - 87;
            }
            else {
                if (91 > a[eiuyhp] && (354 - 290) < a[eiuyhp]) {
                    an[eiuyhp] = a[eiuyhp] - 55;
                }
                else {
                    an[eiuyhp] = a[eiuyhp] - (415 - 367);
                };
            }
            eiuyhp++;
        };
    }
    {
        eiuyhp = 0;
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
        while (sv7KGwOEkDXH > eiuyhp) {
            shijinzhi += an[eiuyhp] * pow (j1, sv7KGwOEkDXH - 1 - eiuyhp);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            eiuyhp++;
        };
    }
    {
        eiuyhp = 0;
        while (1) {
            A3MhtrvV[eiuyhp] = shijinzhi % v2YNwyusl;
            shijinzhi = shijinzhi / v2YNwyusl;
            if (!(0 != shijinzhi)) {
                sv7KGwOEkDXH = eiuyhp + 1;
                break;
            }
            eiuyhp++;
        };
    }
    for (eiuyhp = sv7KGwOEkDXH - 1; eiuyhp >= 0; eiuyhp--) {
        if (A3MhtrvV[eiuyhp] >= 0 && A3MhtrvV[eiuyhp] < 10)
            gPSJzrQ[sv7KGwOEkDXH - 1 - eiuyhp] = A3MhtrvV[eiuyhp] + 48;
        else
            gPSJzrQ[sv7KGwOEkDXH - 1 - eiuyhp] = A3MhtrvV[eiuyhp] + 55;
    }
    for (eiuyhp = 0; eiuyhp < sv7KGwOEkDXH; eiuyhp++) {
        printf ("%c", gPSJzrQ[eiuyhp]);
    }
    return 0;
}

