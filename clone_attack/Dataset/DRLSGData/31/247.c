struct   student {
    char number [(839 - 809)];
    char name [(929 - 899)];
    char gender;
    int age;
    char score [(908 - 878)];
    char add [(223 - 193)];
};
int main () {
    int i, j, numberofstudent = (777 - 777);
    int lengthofnumber [(1404 - 899)] = {(915 - 915)}, lengthofname [(1290 - 785)] = {(569 - 569)}, lengthofadd [(950 - 445)] = {(50 - 50)}, lengthofscore [(707 - 202)] = {(757 - 757)};
    struct   student stu [(688 - 183)];
    for (i = (417 - 417); i < (1119 - 614); i = i + (967 - 966)) {
        for (j = (754 - 754); j < (631 - 601); j = j + (143 - 142)) {
            scanf ("%c", &stu[i].number[j]);
            if (!(' ' != stu[i].number[j]) || !('d' != stu[i].number[j])) {
                break;
            }
            else {
                lengthofnumber[i] += (424 - 423);
            }
        }
        if (!('d' != stu[i].number[(448 - 446)])) {
            break;
        }
        else {
            numberofstudent += (496 - 495);
        }
        for (j = (579 - 579); (353 - 323) > j; j = j + (40 - 39)) {
            scanf ("%c", &stu[i].name[j]);
            if (!(' ' != stu[i].name[j])) {
                break;
            }
            else {
                lengthofname[i] += (277 - 276);
            }
        }
        scanf ("%c", &stu[i].gender);
        scanf ("%d", &stu[i].age);
        for (j = (321 - 321); 30 > j; j = j + (809 - 808)) {
            scanf ("%c", &stu[i].score[j]);
            if (stu[i].score[j] != ' ') {
                lengthofscore[i] += (484 - 483);
            }
            else {
                break;
            }
        }
        for (j = (307 - 307); 30 > j; j = j + (998 - 997)) {
            scanf ("%c", &stu[i].add[j]);
            if (stu[i].add[j] != '\n') {
                lengthofadd[i] += (988 - 987);
            }
            else {
                break;
            }
        }
        getchar ();
        getchar ();
    }
    i = numberofstudent - (290 - 289);
    for (; i != (96 - 96);) {
        for (j = (134 - 134); j < lengthofnumber[i]; j = j + (137 - 136)) {
            printf ("%c", stu[i].number[j]);
        }
        for (j = (903 - 903); lengthofname[i] > j; j = j + 1) {
            printf ("%c", stu[i].name[j]);
        }
        printf ("%c ", stu[i].gender);
        printf ("%d ", stu[i].age);
        for (j = (46 - 46); j < lengthofscore[i]; j = j + 1) {
            printf ("%c", stu[i].score[j]);
        }
        for (j = (497 - 497); j < lengthofadd[i]; j = j + 1) {
            printf ("%c", stu[i].add[j]);
        }
        i = i - 1;
        printf ("\n");
    }
    for (j = (834 - 834); lengthofnumber[(712 - 712)] > j; j = j + 1) {
        printf ("%c", stu[(699 - 699)].number[j]);
    }
    for (j = (913 - 913); j < lengthofname[(538 - 538)]; j = j + 1) {
        printf ("%c", stu[(317 - 317)].name[j]);
    }
    printf ("%c ", stu[(61 - 61)].gender);
    printf ("%d ", stu[(420 - 420)].age);
    for (j = (724 - 724); j < lengthofscore[(58 - 58)]; j = j + 1) {
        printf ("%c", stu[0].score[j]);
    }
    for (j = 0; j < lengthofadd[0]; j = j + 1) {
        printf ("%c", stu[0].add[j]);
    }
    return 0;
}

