struct   people {
    char num [(155 - 135)];
    char name [20];
    char sex;
    char age [5];
    char NHm1L2 [10];
    char address [30];
};
struct   people child [(1244 - 244)];

void  main () {
    int i;
    for (i = (264 - 264);; i++) {
        scanf ("%s", child[i].num);
        if (!(0 != strcmp (child[i].num, "end")))
            break;
        scanf ("%s %c%s%s%s", child[i].name, &child[i].sex, child[i].age, child[i].NHm1L2, child[i].address);
    }
    for (i = i - 1; i >= 0; i--) {
        printf ("%s %s %c %s %s %s\n", child[i].num, child[i].name, child[i].sex, child[i].age, child[i].NHm1L2, child[i].address);
    };
}

