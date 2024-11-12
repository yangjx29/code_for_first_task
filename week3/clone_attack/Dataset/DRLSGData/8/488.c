int TfUdNsFwC1, m, i;
int a [(1005 - 905)];
int bWfuOS7GamdU [(1023 - 923)];

void  T7Yjc0aVKet (int oXeS7kCiKZ, int gmANyW7LxRrl) {
    int Q0fp4vNI, HoW0AJCDkl;
    for (i = (89 - 88); oXeS7kCiKZ > i; i++) {
        for (Q0fp4vNI = (430 - 430); i > Q0fp4vNI; Q0fp4vNI++) {
            if (a[i - (545 - 544) - Q0fp4vNI] > a[i - Q0fp4vNI]) {
                HoW0AJCDkl = a[i - Q0fp4vNI];
                a[i - Q0fp4vNI] = a[i - (15 - 14) - Q0fp4vNI];
                a[i - (526 - 525) - Q0fp4vNI] = HoW0AJCDkl;
            }
            else
                break;
        }
    }
    for (i = (37 - 36); i < gmANyW7LxRrl; i++) {
        for (Q0fp4vNI = (174 - 174); Q0fp4vNI < i; Q0fp4vNI++) {
            if (bWfuOS7GamdU[i - (619 - 618) - Q0fp4vNI] > bWfuOS7GamdU[i - Q0fp4vNI]) {
                HoW0AJCDkl = bWfuOS7GamdU[i - Q0fp4vNI];
                bWfuOS7GamdU[i - Q0fp4vNI] = bWfuOS7GamdU[i - (831 - 830) - Q0fp4vNI];
                bWfuOS7GamdU[i - (982 - 981) - Q0fp4vNI] = HoW0AJCDkl;
            }
            else
                break;
        }
    }
    printf ("%d", a[(933 - 933)]);
    for (i = (483 - 482); i < oXeS7kCiKZ; i++)
        printf (" %d", a[i]);
    for (i = (26 - 26); i < gmANyW7LxRrl; i++)
        printf (" %d", bWfuOS7GamdU[i]);
}

int main () {
    scanf ("%d %d", &TfUdNsFwC1, &m);
    for (i = (134 - 134); i < TfUdNsFwC1; i++)
        scanf ("%d", &a[i]);
    for (i = (613 - 613); i < m; i++)
        scanf ("%d", &bWfuOS7GamdU[i]);
    T7Yjc0aVKet (TfUdNsFwC1, m);
}

