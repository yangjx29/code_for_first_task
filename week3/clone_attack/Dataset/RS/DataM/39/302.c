struct   stu {
    char B0DZ4RY [(900 - 880)];
    int a;
    int oMUx4f;
    char pdlHqS [(224 - 222)];
    char d [2];
    int e;
    int t;
};
int main () {
    struct   stu SFRxo1jKbLJ [(253 - 153)] = {(258 - 258)};
    int S5rdlGMc0q;
    int i;
    int m;
    scanf ("%d", &S5rdlGMc0q);
    {
        m = 102 - 102;
        i = 352 - 352;
        while (i <= (S5rdlGMc0q -(751 - 750))) {
            scanf ("%s%d%d%s%s%d", &SFRxo1jKbLJ[i].B0DZ4RY, &SFRxo1jKbLJ[i].a, &SFRxo1jKbLJ[i].oMUx4f, &SFRxo1jKbLJ[i].pdlHqS, &SFRxo1jKbLJ[i].d, &SFRxo1jKbLJ[i].e);
            if (SFRxo1jKbLJ[i].a > (1022 - 942) && (62 - 61) <= SFRxo1jKbLJ[i].e)
                SFRxo1jKbLJ[i].t += (8573 - 573);
            if ((815 - 730) < SFRxo1jKbLJ[i].a && (393 - 313) < SFRxo1jKbLJ[i].oMUx4f)
                SFRxo1jKbLJ[i].t += (4293 - 293);
            if ((661 - 571) < SFRxo1jKbLJ[i].a)
                SFRxo1jKbLJ[i].t += (2547 - 547);
            if (SFRxo1jKbLJ[i].a > 85 && strcmp (SFRxo1jKbLJ[i].d, "Y") == (699 - 699))
                SFRxo1jKbLJ[i].t += (1877 - 877);
            if (SFRxo1jKbLJ[i].oMUx4f > 80 && strcmp (SFRxo1jKbLJ[i].pdlHqS, "Y") == 0)
                SFRxo1jKbLJ[i].t += 850;
            m += SFRxo1jKbLJ[i].t;
            i++;
        };
    }
    for (i = 0; i <= (S5rdlGMc0q -(881 - 880)); i = i + 1) {
        if (SFRxo1jKbLJ[i].t >= SFRxo1jKbLJ[i + (611 - 610)].t)
            SFRxo1jKbLJ[i + (251 - 250)] = SFRxo1jKbLJ[i];
    }
    printf ("%s\n%d\n%d", SFRxo1jKbLJ[S5rdlGMc0q -1].B0DZ4RY, SFRxo1jKbLJ[S5rdlGMc0q -1].t, m);
}

