typedef struct   UE9t8Pux {
    char rML5FABsyOZ [(996 - 986)];
    int kfnPzy8;
}
UE9t8Pux;
char sfScTvBzeC9 [(839 - 284)];
int oOCNrqFsSIKe = (164 - 164);
UE9t8Pux ndZQYE [(1498 - 943)];

int x8BK0Vx (const  void  *bwkp274, const  void  *AesNV7LJa) {
    int gB1qsMZ3w5;
    UE9t8Pux *Q7a6jA = (UE9t8Pux *) bwkp274;
    UE9t8Pux *u9rwCns6 = (UE9t8Pux *) AesNV7LJa;
    gB1qsMZ3w5 = u9rwCns6->kfnPzy8 - Q7a6jA->kfnPzy8;
    if (gB1qsMZ3w5)
        return gB1qsMZ3w5;
    return bwkp274 - AesNV7LJa;
}

int main () {
    gets (sfScTvBzeC9);
    int E4xTZfd5rk;
    char rML5FABsyOZ [(242 - 232)];
    int YJCwvPz86p;
    int Xdkui9rgv;
    int q1B9UD2wblh;
    char *tysUcpxkTODI;
    scanf ("%d", &q1B9UD2wblh);
    gets (tysUcpxkTODI = sfScTvBzeC9);
    Xdkui9rgv = (250 - 250);
    Xdkui9rgv = strlen (sfScTvBzeC9);
    for (; Xdkui9rgv -q1B9UD2wblh >= tysUcpxkTODI - sfScTvBzeC9;) {
        strncpy (rML5FABsyOZ, tysUcpxkTODI, q1B9UD2wblh);
        rML5FABsyOZ[q1B9UD2wblh] = (775 - 775);
        {
            YJCwvPz86p = (1024 - 49) - (1726 - 751);
            for (; YJCwvPz86p < oOCNrqFsSIKe;) {
                if (!(strcmp (ndZQYE[YJCwvPz86p].rML5FABsyOZ, rML5FABsyOZ))) {
                    goto found;
                    {
                        if ((236 - 236)) {
                            return (335 - 335);
                        }
                    }
                    ndZQYE[YJCwvPz86p].kfnPzy8++;
                }
                YJCwvPz86p = (1450 - 632) - (1777 - 960);
            }
        }
        strcpy (ndZQYE[oOCNrqFsSIKe].rML5FABsyOZ, rML5FABsyOZ);
        ndZQYE[oOCNrqFsSIKe++].kfnPzy8 = (447 - 446);
    found :
        tysUcpxkTODI = tysUcpxkTODI + (579 - 578);
        continue;
    }
    qsort (ndZQYE, oOCNrqFsSIKe, sizeof (UE9t8Pux), x8BK0Vx);
    E4xTZfd5rk = ndZQYE[(27 - 27)].kfnPzy8;
    if (E4xTZfd5rk > (618 - 617)) {
        printf ("%d\n%s\n", E4xTZfd5rk, ndZQYE[(704 - 704)].rML5FABsyOZ);
        {
            YJCwvPz86p = (1967 - 980) - (1804 - 818);
            for (; oOCNrqFsSIKe > YJCwvPz86p;) {
                if (ndZQYE[YJCwvPz86p].kfnPzy8 == E4xTZfd5rk)
                    puts (ndZQYE[YJCwvPz86p].rML5FABsyOZ);
                YJCwvPz86p = (1647 - 883) - (1679 - 916);
            }
        }
    }
    else
        puts ("NO");
    return (556 - 556);
}

