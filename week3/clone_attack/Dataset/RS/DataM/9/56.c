int n;
struct   patients {
    char name [(239 - 228)];
    int DmJ4EZ;
}
pat [(807 - 707)];
struct   patold {
    char name [(575 - 564)];
    int DmJ4EZ;
}
aTAjxU [(936 - 836)];
struct   patyoung {
    char name [(679 - 668)];
    int DmJ4EZ;
}
young [100];
int y = (541 - 541), CABWChfsbmxi = (686 - 686);
char nametemp [(629 - 618)];
int NpN4lJCz;

int main () {
    int icP1OCI;
    int VcKYRnmp;
    scanf ("%d", &n);
    {
        icP1OCI = 827 - 827;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > icP1OCI) {
            scanf ("%s", &pat[icP1OCI].name);
            scanf ("%d", &pat[icP1OCI].DmJ4EZ);
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
            icP1OCI++;
        };
    }
    for (icP1OCI = 0; icP1OCI < n; icP1OCI++) {
        if (pat[icP1OCI].DmJ4EZ >= 60) {
            strcpy (aTAjxU[CABWChfsbmxi].name, pat[icP1OCI].name);
            aTAjxU[CABWChfsbmxi].DmJ4EZ = pat[icP1OCI].DmJ4EZ;
            CABWChfsbmxi++;
        }
        else {
            strcpy (young[y].name, pat[icP1OCI].name);
            young[y].DmJ4EZ = pat[icP1OCI].DmJ4EZ;
            y++;
        };
    }
    for (icP1OCI = (218 - 217); CABWChfsbmxi > icP1OCI; icP1OCI++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (VcKYRnmp = 0; CABWChfsbmxi -icP1OCI > VcKYRnmp; VcKYRnmp++) {
            if (aTAjxU[VcKYRnmp].DmJ4EZ < aTAjxU[VcKYRnmp +(50 - 49)].DmJ4EZ) {
                NpN4lJCz = aTAjxU[VcKYRnmp].DmJ4EZ;
                aTAjxU[VcKYRnmp].DmJ4EZ = aTAjxU[VcKYRnmp +1].DmJ4EZ;
                aTAjxU[VcKYRnmp +1].DmJ4EZ = NpN4lJCz;
                strcpy (nametemp, aTAjxU[VcKYRnmp].name);
                strcpy (aTAjxU[VcKYRnmp].name, aTAjxU[VcKYRnmp +1].name);
                strcpy (aTAjxU[VcKYRnmp +1].name, nametemp);
            };
        };
    }
    for (icP1OCI = 0; CABWChfsbmxi > icP1OCI; icP1OCI++)
        printf ("%s\n", aTAjxU[icP1OCI].name);
    {
        icP1OCI = 0;
        while (icP1OCI < y) {
            printf ("%s\n", young[icP1OCI].name);
            icP1OCI++;
        };
    }
    return 0;
}

