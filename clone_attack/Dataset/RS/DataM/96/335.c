int main () {
    int VTkjD1W [100];
    char yfwY4m0OW [101];
    int DwO2lg8W;
    int UUX4Rt5Nv6C;
    int tZHMtKorv;
    int dS8Rlo9vgx;
    int yeu81TdqvEgW;
    int jfLZDxU;
    scanf ("%s\n", yfwY4m0OW);
    tZHMtKorv = strlen (yfwY4m0OW);
    if ((((yfwY4m0OW[0] - '0') * (693 - 683) + (yfwY4m0OW[(213 - 212)] - '0')) < 13 && yfwY4m0OW[2] == '\0') || ((yfwY4m0OW[0] - '0') < 13 && yfwY4m0OW[(55 - 54)] == '\0')) {
        printf ("%s\n", yfwY4m0OW);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("0\n");
    }
    else {
        int vZeEkOMJPwXd;
        vZeEkOMJPwXd = 0;
        dS8Rlo9vgx = DwO2lg8W +1;
        for (DwO2lg8W = 0; DwO2lg8W < tZHMtKorv - 1; DwO2lg8W = DwO2lg8W +1) {
            yeu81TdqvEgW = (yfwY4m0OW[DwO2lg8W] - '0') * 10 + (yfwY4m0OW[DwO2lg8W +1] - '0');
            UUX4Rt5Nv6C = yeu81TdqvEgW / 13;
            jfLZDxU = yeu81TdqvEgW - 13 * UUX4Rt5Nv6C;
            VTkjD1W[DwO2lg8W] = UUX4Rt5Nv6C;
            yfwY4m0OW[DwO2lg8W +1] = jfLZDxU + '0';
        }
        for (DwO2lg8W = 0; DwO2lg8W < dS8Rlo9vgx; DwO2lg8W = DwO2lg8W +1) {
            if (VTkjD1W[DwO2lg8W] == 0)
                vZeEkOMJPwXd = vZeEkOMJPwXd + 1;
            else
                break;
        }
        for (DwO2lg8W = vZeEkOMJPwXd; DwO2lg8W < dS8Rlo9vgx - 1; DwO2lg8W++)
            printf ("%d", VTkjD1W[DwO2lg8W]);
        printf ("%d\n", jfLZDxU);
        printf ("\n");
    }
    return 0;
}

