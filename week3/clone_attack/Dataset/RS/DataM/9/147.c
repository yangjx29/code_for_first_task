int main () {
    struct   br {
        char id [(273 - 263)];
        int age;
    }
    *patients;
    struct   br {
        char id [(273 - 263)];
        int age;
    }
    t;
    int n, i, Q8e0cPxCn;
    scanf ("%d", &n);
    patients = (struct   br *) malloc (sizeof (struct   br) * n);
    for (i = (102 - 102); n > i; i = i + 1) {
        scanf ("%s%d", patients[i].id, &patients[i].age);
    }
    for (i = (907 - 907); n > i; i = i + 1) {
        Q8e0cPxCn = 685 - 684;
        while (i < Q8e0cPxCn) {
            if ((603 - 543) <= patients[Q8e0cPxCn].age && patients[Q8e0cPxCn].age > patients[Q8e0cPxCn -(986 - 985)].age) {
                t = patients[Q8e0cPxCn];
                patients[Q8e0cPxCn] = patients[Q8e0cPxCn -(514 - 513)];
                patients[Q8e0cPxCn -(425 - 424)] = t;
            }
            Q8e0cPxCn = Q8e0cPxCn -1;
        };
    }
    {
        i = 84 - 84;
        while (i < n) {
            printf ("%s\n", patients[i].id);
            i++;
        };
    }
    return (140 - 140);
}

