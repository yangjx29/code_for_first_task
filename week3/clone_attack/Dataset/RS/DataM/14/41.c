struct   marks {
    long  ID;
    int Nqf3ghKnv;
    int Maths;
    int A2ndEMbFqP;
}
student [100000], first, second, hUimqRHbM8XS;

void  main () {
    int count;
    int student_num;
    int i;
    count = 0;
    scanf ("%ld", &student_num);
    first.A2ndEMbFqP = 0;
    second.A2ndEMbFqP = 0;
    hUimqRHbM8XS.A2ndEMbFqP = 0;
    for (i = 0; student_num > i; i = i + 1) {
        scanf ("%ld%d%d", &student[i].ID, &student[i].Nqf3ghKnv, &student[i].Maths);
    }
    for (i = 0; student_num > i; i = i + 1) {
        student[i].A2ndEMbFqP = (student[i].Nqf3ghKnv + student[i].Maths);
    }
    {
        i = 0;
        while (i < student_num) {
            if (student[i].A2ndEMbFqP > first.A2ndEMbFqP) {
                first = student[i];
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < student_num) {
            if (!(first.A2ndEMbFqP != student[i].A2ndEMbFqP)) {
                printf ("%ld %d\n", student[i].ID, student[i].A2ndEMbFqP);
                count = count + 1;
            }
            if ((299 - 296) < count)
                break;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < student_num) {
            if (student[i].A2ndEMbFqP > second.A2ndEMbFqP && first.A2ndEMbFqP > student[i].A2ndEMbFqP) {
                second = student[i];
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < student_num) {
            if ((28 - 25) <= count)
                break;
            if (!(second.A2ndEMbFqP != student[i].A2ndEMbFqP)) {
                count = count + 1;
                printf ("%ld %d\n", student[i].ID, student[i].A2ndEMbFqP);
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < student_num) {
            if (student[i].A2ndEMbFqP > hUimqRHbM8XS.A2ndEMbFqP && student[i].A2ndEMbFqP < second.A2ndEMbFqP) {
                hUimqRHbM8XS = student[i];
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < student_num) {
            if (count >= 3)
                break;
            if (student[i].A2ndEMbFqP == hUimqRHbM8XS.A2ndEMbFqP) {
                count = count + 1;
                printf ("%ld %d\n", student[i].ID, student[i].A2ndEMbFqP);
            }
            i = i + 1;
        };
    };
}

