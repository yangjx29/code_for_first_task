int main () {
    int UDzaxrXi;
    double  CMJ36IW [(202 - 102)], JU6AGnE [(628 - 528)], APjXS1N83BcK [(241 - 141)], GgLZq0aVJbsv [(603 - 503)], Dk9c38 [100], zOx7iwjS [100], oiGlS8xbjmg [100], agEV8U [100];
    int WyK7CbewNhnX;
    scanf ("%d", &WyK7CbewNhnX);
    {
        UDzaxrXi = (801 - 801);
        while (UDzaxrXi < WyK7CbewNhnX) {
            {
                if (0) {
                    return 0;
                }
            }
            scanf ("%lf %lf %lf", &CMJ36IW[UDzaxrXi], &JU6AGnE[UDzaxrXi], &APjXS1N83BcK[UDzaxrXi]);
            zOx7iwjS[UDzaxrXi] = JU6AGnE[UDzaxrXi] * JU6AGnE[UDzaxrXi] - (331 - 327) * CMJ36IW[UDzaxrXi] * APjXS1N83BcK[UDzaxrXi];
            if (zOx7iwjS[UDzaxrXi] > (448 - 448)) {
                GgLZq0aVJbsv[UDzaxrXi] = ((456 - 456) - JU6AGnE[UDzaxrXi] + sqrt (zOx7iwjS[UDzaxrXi])) / ((944 - 942) * CMJ36IW[UDzaxrXi]);
                Dk9c38[UDzaxrXi] = ((765 - 765) - JU6AGnE[UDzaxrXi] - sqrt (zOx7iwjS[UDzaxrXi])) / ((569 - 567) * CMJ36IW[UDzaxrXi]);
            }
            if (!(0 != zOx7iwjS[UDzaxrXi])) {
                GgLZq0aVJbsv[UDzaxrXi] = Dk9c38[UDzaxrXi] = (-JU6AGnE[UDzaxrXi] / ((214 - 212) * CMJ36IW[UDzaxrXi]));
            }
            if (0 > zOx7iwjS[UDzaxrXi]) {
                oiGlS8xbjmg[UDzaxrXi] = (-JU6AGnE[UDzaxrXi] / (2 * CMJ36IW[UDzaxrXi]));
                agEV8U[UDzaxrXi] = sqrt (-zOx7iwjS[UDzaxrXi]) / (2 * CMJ36IW[UDzaxrXi]);
            }
            UDzaxrXi = UDzaxrXi +1;
        }
    }
    {
        UDzaxrXi = 0;
        while (WyK7CbewNhnX > UDzaxrXi) {
            if (zOx7iwjS[UDzaxrXi] > 0)
                printf ("x1=%.5lf;x2=%.5lf\n", GgLZq0aVJbsv[UDzaxrXi], Dk9c38[UDzaxrXi]);
            if (zOx7iwjS[UDzaxrXi] == 0)
                printf ("x1=x2=%.5lf\n", GgLZq0aVJbsv[UDzaxrXi]);
            if (zOx7iwjS[UDzaxrXi] < 0)
                printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", oiGlS8xbjmg[UDzaxrXi], agEV8U[UDzaxrXi], oiGlS8xbjmg[UDzaxrXi], agEV8U[UDzaxrXi]);
            UDzaxrXi = UDzaxrXi +1;
        }
    }
    return 0;
}

