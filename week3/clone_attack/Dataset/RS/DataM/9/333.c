int main () {
    char w [10000];
    int cCTWta;
    int w67kKPFq, Z8qRP7HbU;
    struct   cn1xzWAV {
        char num1 [10000];
        int age1;
    }
    cn1xzWAV [100];
    struct   OF2VOlCsu {
        char num [(10188 - 188)];
        int age;
    }
    OF2VOlCsu [100];
    int xtVyU8gG9ekN, Qi4bxGj3 = (247 - 247);
    scanf ("%d\n", &xtVyU8gG9ekN);
    for (w67kKPFq = (893 - 893); xtVyU8gG9ekN > w67kKPFq; w67kKPFq = w67kKPFq + 1) {
        scanf ("%s%d\n", OF2VOlCsu[w67kKPFq].num, &OF2VOlCsu[w67kKPFq].age);
        if ((1042 - 982) <= OF2VOlCsu[w67kKPFq].age) {
            strcpy (cn1xzWAV[Qi4bxGj3].num1, OF2VOlCsu[w67kKPFq].num);
            cn1xzWAV[Qi4bxGj3].age1 = OF2VOlCsu[w67kKPFq].age;
            Qi4bxGj3 = Qi4bxGj3 +(86 - 85);
        };
    }
    for (w67kKPFq = (466 - 465); Qi4bxGj3 > w67kKPFq; w67kKPFq++) {
        for (Z8qRP7HbU = 0; Qi4bxGj3 -w67kKPFq > Z8qRP7HbU; Z8qRP7HbU = Z8qRP7HbU +1) {
            if (cn1xzWAV[Z8qRP7HbU +1].age1 > cn1xzWAV[Z8qRP7HbU].age1) {
                strcpy (w, cn1xzWAV[Z8qRP7HbU +1].num1);
                strcpy (cn1xzWAV[Z8qRP7HbU +1].num1, cn1xzWAV[Z8qRP7HbU].num1);
                strcpy (cn1xzWAV[Z8qRP7HbU].num1, w);
                cCTWta = cn1xzWAV[Z8qRP7HbU +1].age1;
                cn1xzWAV[Z8qRP7HbU +1].age1 = cn1xzWAV[Z8qRP7HbU].age1;
                cn1xzWAV[Z8qRP7HbU].age1 = cCTWta;
            };
        };
    }
    for (w67kKPFq = 0; w67kKPFq < Qi4bxGj3; w67kKPFq++) {
        printf ("%s\n", cn1xzWAV[w67kKPFq].num1);
    }
    for (w67kKPFq = 0; w67kKPFq < xtVyU8gG9ekN; w67kKPFq++) {
        if (OF2VOlCsu[w67kKPFq].age < 60) {
            printf ("%s\n", OF2VOlCsu[w67kKPFq].num);
        };
    }
    return 0;
}

