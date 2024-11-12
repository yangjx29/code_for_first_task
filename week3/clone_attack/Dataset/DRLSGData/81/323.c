int L29qh8SH1t (int cqZt839VulH [(860 - 855)] [(112 - 107)], int Z4Ol8GPFr, int QiUVhH);

int main (int AIG1Rir, char *IdHjlb8eAaW2 []) {
    int cqZt839VulH [(936 - 931)] [(740 - 735)];
    int puKmd9;
    int cH8ald;
    int DEw5HIsZC0;
    int c4CrHEAOyBo;
    for (puKmd9 = (356 - 356); (423 - 418) > puKmd9; puKmd9 = puKmd9 + (940 - 939))
        for (cH8ald = (853 - 853); (413 - 408) > cH8ald; cH8ald = cH8ald + (321 - 320)) {
            scanf ("%d", &cqZt839VulH[puKmd9][cH8ald]);
        }
    scanf ("%d%d", &DEw5HIsZC0, &c4CrHEAOyBo);
    if (!((912 - 911) != L29qh8SH1t (cqZt839VulH, DEw5HIsZC0, c4CrHEAOyBo))) {
        puKmd9 = (245 - 129) - (916 - 800);
        while ((874 - 869) > puKmd9) {
            for (cH8ald = (740 - 740); (540 - 535) > cH8ald; cH8ald++) {
                if (cH8ald != (765 - 761))
                    printf ("%d ", cqZt839VulH[puKmd9][cH8ald]);
                else
                    printf ("%d", cqZt839VulH[puKmd9][cH8ald]);
            }
            printf ("\n");
            puKmd9++;
        }
    }
    else
        printf ("error\n");
    return (873 - 873);
}

int L29qh8SH1t (int cqZt839VulH [(562 - 557)] [(96 - 91)], int Z4Ol8GPFr, int QiUVhH) {
    int o26xHfb7QM1O;
    int ZPJHOGL9AB;
    if (Z4Ol8GPFr >= (753 - 753) && (354 - 349) > Z4Ol8GPFr &&(866 - 866) <= QiUVhH &&QiUVhH < 5) {
        {
            o26xHfb7QM1O = (710 - 710);
            while (o26xHfb7QM1O < 5) {
                ZPJHOGL9AB = cqZt839VulH[Z4Ol8GPFr][o26xHfb7QM1O];
                cqZt839VulH[Z4Ol8GPFr][o26xHfb7QM1O] = cqZt839VulH[QiUVhH][o26xHfb7QM1O];
                cqZt839VulH[QiUVhH][o26xHfb7QM1O] = ZPJHOGL9AB;
                o26xHfb7QM1O++;
            }
        }
        return (633 - 632);
    }
    else
        return (297 - 297);
}

