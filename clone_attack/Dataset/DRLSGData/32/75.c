int main () {
    int YSfqVlK [100], T0bPNhjiI4F [100], otivGhFWseON [100];
    char Z9YmNTibpn [100], UXnk0pdPG [100];
    int jlKOJraEUFgf, IeHoGAi, ymrAysc8daT, iB4hkQC6bH, jNUV7ehlJ, zSNFC8d;
    scanf ("%d", &jNUV7ehlJ);
    {
        ymrAysc8daT = 503 - 503;
        while (ymrAysc8daT < jNUV7ehlJ) {
            ymrAysc8daT = ymrAysc8daT + 1;
            scanf ("%s", Z9YmNTibpn);
            jlKOJraEUFgf = strlen (Z9YmNTibpn);
            scanf ("%s", UXnk0pdPG);
            IeHoGAi = strlen (UXnk0pdPG);
            {
                iB4hkQC6bH = 0;
                while (100 > iB4hkQC6bH) {
                    YSfqVlK[iB4hkQC6bH] = Z9YmNTibpn[iB4hkQC6bH] - 48;
                    T0bPNhjiI4F[iB4hkQC6bH] = UXnk0pdPG[iB4hkQC6bH] - 48;
                    iB4hkQC6bH = iB4hkQC6bH + 1;
                }
            }
            {
                iB4hkQC6bH = IeHoGAi -1;
                while (0 <= iB4hkQC6bH) {
                    T0bPNhjiI4F[iB4hkQC6bH + jlKOJraEUFgf - IeHoGAi] = T0bPNhjiI4F[iB4hkQC6bH];
                    iB4hkQC6bH--;
                }
            }
            {
                iB4hkQC6bH = 0;
                while (iB4hkQC6bH < jlKOJraEUFgf - IeHoGAi) {
                    T0bPNhjiI4F[iB4hkQC6bH] = 0;
                    iB4hkQC6bH = iB4hkQC6bH + 1;
                }
            }
            {
                iB4hkQC6bH = jlKOJraEUFgf - 1;
                while (iB4hkQC6bH >= 0) {
                    if (T0bPNhjiI4F[iB4hkQC6bH] <= YSfqVlK[iB4hkQC6bH])
                        otivGhFWseON[iB4hkQC6bH] = YSfqVlK[iB4hkQC6bH] - T0bPNhjiI4F[iB4hkQC6bH];
                    else {
                        otivGhFWseON[iB4hkQC6bH] = 10 + YSfqVlK[iB4hkQC6bH] - T0bPNhjiI4F[iB4hkQC6bH];
                        YSfqVlK[iB4hkQC6bH - 1] = YSfqVlK[iB4hkQC6bH - 1] - 1;
                    }
                    iB4hkQC6bH--;
                }
            }
            {
                iB4hkQC6bH = 0;
                while (iB4hkQC6bH < jlKOJraEUFgf) {
                    if (otivGhFWseON[iB4hkQC6bH] != 0)
                        zSNFC8d = 1;
                    if (zSNFC8d == 1)
                        printf ("%d", otivGhFWseON[iB4hkQC6bH]);
                    iB4hkQC6bH++;
                }
            }
            zSNFC8d = 0;
        }
    }
    return 0;
}

