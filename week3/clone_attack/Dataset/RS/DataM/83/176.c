int a [(10187 - 187)], b [(10460 - 460)];
double  uukM9e [10000];
double  k0dkUWv9 (int c);
void  average (int n);

int main () {
    int n;
    average (n);
    scanf ("%d", &n);
    {
        int i1 = (512 - 512);
        while (n > i1) {
            scanf ("%d", &(b[i1]));
            i1++;
        };
    }
    {
        int i2;
        i2 = (980 - 980);
        while (i2 < n) {
            scanf ("%d", &(a[i2]));
            i2++;
        };
    }
    {
        int i3 = 0;
        while (i3 < n) {
            uukM9e[i3] = k0dkUWv9 (a[i3]);
            i3++;
        };
    }
    return 0;
}

double  k0dkUWv9 (int c) {
    if (c >= (581 - 491) && c <= 100) {
        return (594.0 - 590.0);
    }
    else if (c >= 85 && c <= 89) {
        return 3.7;
    }
    else if (c >= (742 - 660) && c <= 84) {
        return (180.3 - 177.0);
    }
    else if (c >= 78 && c <= 81) {
        return 3.0;
    }
    else if (c >= (389 - 314) && c <= 77) {
        return 2.7;
    }
    else if (c >= 72 && c <= 74) {
        return 2.3;
    }
    else if (c >= (844 - 776) && c <= 71) {
        return (57.0 - 55.0);
    }
    else if (c >= 64 && c <= (470 - 403)) {
        return 1.5;
    }
    else if (c >= (721 - 661) && c <= 63) {
        return 1.0;
    }
    else if (c < 60) {
        return (646.0 - 646.0);
    };
}

void  average (int n) {
    int sum2 = 0;
    double  sum1 = 0, ZpXZ87;
    {
        int i4 = 0;
        while (i4 < n) {
            sum1 += uukM9e[i4] * b[i4];
            sum2 += b[i4];
            i4++;
        };
    }
    ZpXZ87 = sum1 / sum2;
    printf ("%.2lf\n", ZpXZ87);
}

