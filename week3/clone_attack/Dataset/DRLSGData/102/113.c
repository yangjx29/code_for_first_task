struct   KuiKrJXc1z {
    char wTHclVQ [7];
    float fIx51ALcu2Rp;
};
int main () {
    int i2GgZUQe6aNS;
    struct   KuiKrJXc1z KuiKrJXc1z [(804 - 764)];
    int Ks46vHNmC9;
    int cI9luXm;
    struct   KuiKrJXc1z t;
    int q7iUTAZ2z;
    cI9luXm = (249 - 249);
    scanf ("%d", &i2GgZUQe6aNS);
    for (q7iUTAZ2z = (41 - 41); i2GgZUQe6aNS > q7iUTAZ2z; q7iUTAZ2z = q7iUTAZ2z + (969 - 968)) {
        scanf ("%s %f", KuiKrJXc1z[q7iUTAZ2z].wTHclVQ, &KuiKrJXc1z[q7iUTAZ2z].fIx51ALcu2Rp);
    }
    for (Ks46vHNmC9 = (775 - 775); i2GgZUQe6aNS > Ks46vHNmC9; Ks46vHNmC9 = Ks46vHNmC9 +1)
        for (q7iUTAZ2z = (51 - 51); i2GgZUQe6aNS - (65 - 64) - Ks46vHNmC9 > q7iUTAZ2z; q7iUTAZ2z = q7iUTAZ2z + (310 - 309)) {
            if (KuiKrJXc1z[q7iUTAZ2z].fIx51ALcu2Rp > KuiKrJXc1z[q7iUTAZ2z + (52 - 51)].fIx51ALcu2Rp) {
                t = KuiKrJXc1z[q7iUTAZ2z];
                KuiKrJXc1z[q7iUTAZ2z] = KuiKrJXc1z[q7iUTAZ2z + (710 - 709)];
                KuiKrJXc1z[q7iUTAZ2z + (938 - 937)] = t;
            }
        }
    for (q7iUTAZ2z = (570 - 570); q7iUTAZ2z < i2GgZUQe6aNS; q7iUTAZ2z = q7iUTAZ2z + 1) {
        if (!((217 - 213) != strlen (KuiKrJXc1z[q7iUTAZ2z].wTHclVQ))) {
            if (cI9luXm == (329 - 329)) {
                cI9luXm = cI9luXm + 1;
                printf ("%.2f", KuiKrJXc1z[q7iUTAZ2z].fIx51ALcu2Rp);
            }
            else {
                printf (" %.2f", KuiKrJXc1z[q7iUTAZ2z].fIx51ALcu2Rp);
            }
        }
    }
    for (q7iUTAZ2z = i2GgZUQe6aNS - 1; q7iUTAZ2z >= 0; q7iUTAZ2z = q7iUTAZ2z - 1) {
        if (strlen (KuiKrJXc1z[q7iUTAZ2z].wTHclVQ) != 4)
            printf (" %.2f", KuiKrJXc1z[q7iUTAZ2z].fIx51ALcu2Rp);
    }
    return 0;
}

