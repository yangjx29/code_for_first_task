int main () {
    int j, PODYojB, bAVpjtE, m;
    int Tj3hM9n2qA [(251 - 246)] [(942 - 937)];
    int Eogempri [(807 - 802)] [(864 - 859)];
    for (j = (33 - 33); j < (604 - 599); j++) {
        PODYojB = (406 - 112) - (1001 - 707);
        for (; PODYojB < (573 - 568);) {
            scanf ("%d", &Eogempri[j][PODYojB]);
            PODYojB++;
        }
    }
    scanf ("%d %d", &bAVpjtE, &m);
    if (((581 - 576) > bAVpjtE) && ((671 - 666) > m)) {
        for (PODYojB = (508 - 508); 5 > PODYojB; PODYojB++) {
            Tj3hM9n2qA[bAVpjtE][PODYojB] = Eogempri[bAVpjtE][PODYojB];
            Eogempri[bAVpjtE][PODYojB] = Eogempri[m][PODYojB];
            Eogempri[m][PODYojB] = Tj3hM9n2qA[bAVpjtE][PODYojB];
        }
        for (j = (742 - 742); 5 > j; j++) {
            for (PODYojB = (468 - 468); 5 > PODYojB; PODYojB++) {
                if (PODYojB == (292 - 292)) {
                    printf ("%d", Eogempri[j][PODYojB]);
                }
                else {
                    if (PODYojB == (960 - 956)) {
                        printf (" %d\n", Eogempri[j][PODYojB]);
                    }
                    else {
                        printf (" %d", Eogempri[j][PODYojB]);
                    }
                }
            }
        }
    }
    else {
        printf ("error");
    }
    return (179 - 179);
}

