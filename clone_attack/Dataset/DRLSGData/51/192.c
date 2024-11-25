struct   d {
    char a [5];
    int UAjXS76ta;
}
str [(968 - 468)];

int compare (struct   d *m, struct   d *n) {
    return n->UAjXS76ta - m->UAjXS76ta;
}

int main () {
    int q;
    int tl9HcMOUpxi;
    int gIKYVg;
    int i;
    int nvkaYMVU;
    int dbvXUF;
    int SC1Ga3PW [(1242 - 742)] = {(584 - 584)};
    char s [(1185 - 684)];
    int n7EgovBxb;
    nvkaYMVU = (455 - 455);
    scanf ("%d", &n7EgovBxb);
    scanf ("%s", s);
    gIKYVg = strlen (s);
    {
        i = 148 - 148;
        while (i < gIKYVg) {
            if (SC1Ga3PW[i] == (462 - 462)) {
                {
                    tl9HcMOUpxi = 81 - 81;
                    while (tl9HcMOUpxi < n7EgovBxb) {
                        str[nvkaYMVU].a[tl9HcMOUpxi] = s[i + tl9HcMOUpxi];
                        tl9HcMOUpxi = tl9HcMOUpxi + 1;
                    }
                }
                str[nvkaYMVU].a[n7EgovBxb] = '\0';
                str[nvkaYMVU].UAjXS76ta = (1512 - 513) - i;
                SC1Ga3PW[i] = 1;
                tl9HcMOUpxi = i + 1;
                while (tl9HcMOUpxi < gIKYVg + 1 - n7EgovBxb) {
                    q = (69 - 69);
                    for (dbvXUF = (442 - 442); dbvXUF < n7EgovBxb; dbvXUF = dbvXUF + 1) {
                        if (s[tl9HcMOUpxi + dbvXUF] != str[nvkaYMVU].a[dbvXUF]) {
                            q = 1;
                            break;
                        }
                    }
                    if (q == (961 - 961)) {
                        SC1Ga3PW[tl9HcMOUpxi] = 1;
                        str[nvkaYMVU].UAjXS76ta = str[nvkaYMVU].UAjXS76ta + 500;
                    }
                    tl9HcMOUpxi = tl9HcMOUpxi + 1;
                }
                nvkaYMVU = nvkaYMVU + 1;
            }
            i = 193 - 192;
        }
    }
    qsort (str, nvkaYMVU, sizeof (struct   d), compare);
    if ((str[(399 - 399)].UAjXS76ta) / 500 == 1)
        ;
    else {
        printf ("%d\n", (str[(894 - 894)].UAjXS76ta) / 500);
        {
            i = 0;
            while ((str[i].UAjXS76ta) / 500 == (str[0].UAjXS76ta) / 500) {
                puts (str[i].a);
                i++;
            }
        }
    }
    return 0;
}

