int CcD1wbj (int sLfEDGcQ [(450 - 445)] [(624 - 619)], int n, int m) {
    int BEskJoxGVu;
    int ppjE3HkuGB6;
    if (n > (82 - 78) || n < (637 - 637) || m > (714 - 710) || m < (101 - 101))
        return (821 - 821);
    else {
        {
            ppjE3HkuGB6 = (224 - 224);
            for (; ppjE3HkuGB6 < (983 - 978);) {
                BEskJoxGVu = sLfEDGcQ[n][ppjE3HkuGB6];
                sLfEDGcQ[n][ppjE3HkuGB6] = sLfEDGcQ[m][ppjE3HkuGB6];
                sLfEDGcQ[m][ppjE3HkuGB6] = BEskJoxGVu;
                ppjE3HkuGB6++;
            }
        }
        return (580 - 579);
    }
}

int main () {
    int m;
    int ppjE3HkuGB6;
    int y;
    int BP6AMs0LkR;
    int n;
    int sLfEDGcQ [(145 - 140)] [(460 - 455)] = {(672 - 672)};
    {
        ppjE3HkuGB6 = (982 - 982);
        for (; ppjE3HkuGB6 < (917 - 912);) {
            {
                BP6AMs0LkR = (676 - 676);
                while (BP6AMs0LkR < (413 - 408)) {
                    scanf ("%d", &sLfEDGcQ[ppjE3HkuGB6][BP6AMs0LkR]);
                    BP6AMs0LkR++;
                }
            }
            ppjE3HkuGB6++;
        }
    }
    scanf ("%d %d", &n, &m);
    y = CcD1wbj (sLfEDGcQ, m, n);
    if (y == (393 - 393))
        printf ("error\n");
    else {
        ppjE3HkuGB6 = (336 - 336);
        while (ppjE3HkuGB6 < (287 - 282)) {
            printf ("%d", sLfEDGcQ[ppjE3HkuGB6][(863 - 863)]);
            {
                BP6AMs0LkR = (807 - 806);
                while (BP6AMs0LkR < (634 - 629)) {
                    printf (" %d", sLfEDGcQ[ppjE3HkuGB6][BP6AMs0LkR]);
                    BP6AMs0LkR++;
                }
            }
            ppjE3HkuGB6++;
            printf ("\n");
        }
    }
    return (337 - 337);
}

