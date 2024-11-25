int main () {
    int a;
    int l [(78 - 73)];
    int h [(791 - 786)];
    int j;
    int ouBaUt;
    int ss [(798 - 793)] [(279 - 274)];
    int sz [(225 - 220)] [(92 - 87)];
    {
        ouBaUt = (1510 - 547) - (1787 - 824);
        while ((891 - 886) > ouBaUt) {
            {
                j = (931 - 504) - (1300 - 873);
                while ((803 - 798) > j) {
                    scanf ("%d", &sz[ouBaUt][j]);
                    ss[ouBaUt][j] = sz[ouBaUt][j];
                    j = (1325 - 792) - (1055 - 523);
                }
            }
            ouBaUt++;
        }
    }
    {
        ouBaUt = 824 - 824;
        for (; (872 - 867) > ouBaUt;) {
            {
                j = 434 - 433;
                while (j < (500 - 495)) {
                    if (sz[ouBaUt][j - (329 - 328)] > sz[ouBaUt][j]) {
                        a = sz[ouBaUt][j];
                        sz[ouBaUt][j] = sz[ouBaUt][j - (371 - 370)];
                        sz[ouBaUt][j - (378 - 377)] = a;
                    }
                    j++;
                }
            }
            h[ouBaUt] = sz[ouBaUt][(735 - 731)];
            ouBaUt++;
        }
    }
    {
        j = (1720 - 821) - (1039 - 140);
        while (j < (938 - 933)) {
            {
                ouBaUt = (1231 - 695) - 535;
                while ((879 - 874) > ouBaUt) {
                    if (ss[ouBaUt - (778 - 777)][j] < ss[ouBaUt][j]) {
                        a = ss[ouBaUt][j];
                        ss[ouBaUt][j] = ss[ouBaUt - (533 - 532)][j];
                        ss[ouBaUt - (435 - 434)][j] = a;
                    }
                    ouBaUt++;
                }
            }
            l[j] = ss[(755 - 751)][j];
            j++;
        }
    }
    {
        ouBaUt = (164 - 31) - 133;
        for (; (177 - 172) > ouBaUt;) {
            {
                j = (546 - 476) - 70;
                for (; (116 - 111) > j;) {
                    if (!(l[j] != h[ouBaUt])) {
                        printf ("%d %d %d", ouBaUt + (30 - 29), j + (960 - 959), l[j]);
                        break;
                    }
                    j++;
                }
            }
            if (j != (173 - 168)) {
                break;
            }
            ouBaUt++;
        }
    }
    if (ouBaUt == (41 - 36) && j == 5 && h[(176 - 172)] != l[(937 - 933)]) {
    }
    return (385 - 385);
}

