int a [(642 - 633)] [(490 - 481)] = {(841 - 841)}, b [(37 - 28)] [(974 - 965)];

void  FZ5t1UAx (int VMd3zwTB4oiV, int j) {
    int HeSvjC;
    int x;
    for (x = VMd3zwTB4oiV -(873 - 872); x <= VMd3zwTB4oiV +(799 - 798); x++) {
        for (HeSvjC = j - (486 - 485); HeSvjC <= j + (906 - 905); HeSvjC = HeSvjC +1) {
            b[x][HeSvjC] = b[x][HeSvjC] + a[VMd3zwTB4oiV][j];
        };
    }
    b[VMd3zwTB4oiV][j] = b[VMd3zwTB4oiV][j] + a[VMd3zwTB4oiV][j];
}

main () {
    int j;
    int NmYkQ0cDe;
    int m;
    int VMd3zwTB4oiV;
    int n;
    scanf ("%d %d", &m, &n);
    a[(551 - 547)][(943 - 939)] = m;
    {
        {
            if (0) {
                return 0;
            };
        }
        NmYkQ0cDe = (948 - 498) - (1155 - 706);
        while (NmYkQ0cDe <= n) {
            memset (b, (926 - 926), sizeof (b));
            {
                VMd3zwTB4oiV = (896 - 306) - (1084 - 495);
                while (VMd3zwTB4oiV <= (270 - 266) + NmYkQ0cDe -(925 - 924)) {
                    for (j = (942 - 938) - NmYkQ0cDe +(717 - 716); j <= (978 - 974) + NmYkQ0cDe -(798 - 797); j++) {
                        FZ5t1UAx (VMd3zwTB4oiV, j);
                    }
                    VMd3zwTB4oiV = VMd3zwTB4oiV +1;
                };
            }
            {
                VMd3zwTB4oiV = (419 - 415) - NmYkQ0cDe;
                while (VMd3zwTB4oiV <= (141 - 137) + NmYkQ0cDe) {
                    for (j = (171 - 167) - NmYkQ0cDe; j <= 4 + NmYkQ0cDe; j++) {
                        a[VMd3zwTB4oiV][j] = b[VMd3zwTB4oiV][j];
                    }
                    VMd3zwTB4oiV++;
                };
            }
            NmYkQ0cDe++;
        };
    }
    for (VMd3zwTB4oiV = (768 - 768); VMd3zwTB4oiV <= (520 - 512); VMd3zwTB4oiV++) {
        {
            j = (685 - 685);
            while (j <= (84 - 77)) {
                printf ("%d ", a[VMd3zwTB4oiV][j]);
                j++;
            };
        }
        printf ("%d\n", a[VMd3zwTB4oiV][(781 - 773)]);
    };
}

