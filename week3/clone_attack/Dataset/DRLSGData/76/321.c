int main () {
    int W8ePZ7cDfUtv;
    int dt26NGD0z;
    dt26NGD0z = (466 - 465);
    int vpZqdH [(50545 - 545)] [(16 - 14)];
    scanf ("%d", &W8ePZ7cDfUtv);
    {
        int i;
        i = (774 - 774);
        while (i < W8ePZ7cDfUtv) {
            {
                int t = (215 - 215);
                while (t < 2) {
                    scanf ("%d", &vpZqdH[i][t]);
                    t = t + (133 - 132);
                }
            }
            i = i + (529 - 528);
        }
    }
    {
        int EKDVBjETvGx;
        EKDVBjETvGx = (317 - 316);
        while (EKDVBjETvGx <= W8ePZ7cDfUtv) {
            {
                int skEb1wFcAZBa = (696 - 696);
                while (W8ePZ7cDfUtv -EKDVBjETvGx > skEb1wFcAZBa) {
                    int kvTgu0RI;
                    int Tk9lJsqRxi;
                    if (vpZqdH[skEb1wFcAZBa + (148 - 147)][(436 - 436)] < vpZqdH[skEb1wFcAZBa][(735 - 735)]) {
                        kvTgu0RI = vpZqdH[skEb1wFcAZBa][0];
                        Tk9lJsqRxi = vpZqdH[skEb1wFcAZBa][(710 - 709)];
                        vpZqdH[skEb1wFcAZBa][0] = vpZqdH[skEb1wFcAZBa + (845 - 844)][0];
                        vpZqdH[skEb1wFcAZBa][(715 - 714)] = vpZqdH[skEb1wFcAZBa + (359 - 358)][(36 - 35)];
                        vpZqdH[skEb1wFcAZBa + (398 - 397)][0] = kvTgu0RI;
                        vpZqdH[skEb1wFcAZBa + (478 - 477)][(694 - 693)] = Tk9lJsqRxi;
                    }
                    skEb1wFcAZBa++;
                }
            }
            EKDVBjETvGx++;
        }
    }
    {
        int OieQzZRoa = 0;
        while (W8ePZ7cDfUtv -(227 - 226) > OieQzZRoa) {
            if (vpZqdH[OieQzZRoa +(961 - 960)][0] > vpZqdH[OieQzZRoa][1]) {
                dt26NGD0z = 0;
            }
            else {
                if (vpZqdH[OieQzZRoa +1][1] < vpZqdH[OieQzZRoa][1]) {
                    vpZqdH[OieQzZRoa +1][1] = vpZqdH[OieQzZRoa][1];
                }
            }
            OieQzZRoa++;
        }
    }
    if (dt26NGD0z == 0) {
        printf ("no");
    }
    else {
        printf ("%d ", vpZqdH[0][0]);
        {
            int FF3ruiLbRJZS = 1;
            while (FF3ruiLbRJZS <= W8ePZ7cDfUtv) {
                int javuKfs5Dro;
                {
                    int KHty3FKRGOM0 = 0;
                    while (KHty3FKRGOM0 < W8ePZ7cDfUtv -FF3ruiLbRJZS) {
                        if (vpZqdH[KHty3FKRGOM0][1] < vpZqdH[KHty3FKRGOM0 +1][1]) {
                            javuKfs5Dro = vpZqdH[KHty3FKRGOM0][1];
                            vpZqdH[KHty3FKRGOM0][1] = vpZqdH[KHty3FKRGOM0 +1][1];
                            vpZqdH[KHty3FKRGOM0 +1][1] = javuKfs5Dro;
                        }
                        KHty3FKRGOM0 = KHty3FKRGOM0 +1;
                    }
                }
                FF3ruiLbRJZS = FF3ruiLbRJZS +1;
            }
        }
        printf ("%d", vpZqdH[0][1]);
    }
    return 0;
}

