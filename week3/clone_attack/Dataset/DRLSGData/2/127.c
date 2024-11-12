typedef char CSobhFWDgZdE [30];

void  POWZayUc8 (int Cc18yaWsS07w [], int gVcxyX6 [], CSobhFWDgZdE *IeLb9GF5Q [hbl1Iup8Ks0t], int m) {
    char y8fuEszD [432];
    int vrx5AD1YiJR4;
    char *GqKTAbcepzy;
    int p4O7D5;
    {
        p4O7D5 = (801 - 800);
        for (; m >= p4O7D5;) {
            getchar ();
            IeLb9GF5Q[p4O7D5] = (CSobhFWDgZdE *) malloc (sizeof (CSobhFWDgZdE));
            scanf ("%d%s", &gVcxyX6[p4O7D5], IeLb9GF5Q[p4O7D5]);
            GqKTAbcepzy = *IeLb9GF5Q[p4O7D5];
            p4O7D5 = p4O7D5 + 1;
            for (; *GqKTAbcepzy != '\0';) {
                Cc18yaWsS07w[*GqKTAbcepzy]++;
                GqKTAbcepzy = GqKTAbcepzy +1;
            };
        };
    };
}

char LVmhl0 (int Cc18yaWsS07w []) {
    char bGy1DuK;
    char vi8B625s;
    char i8rkihb1KLU;
    bGy1DuK = -333;
    {
        i8rkihb1KLU = 'A';
        for (; 'Z' >= i8rkihb1KLU;) {
            if (bGy1DuK < Cc18yaWsS07w[i8rkihb1KLU]) {
                bGy1DuK = Cc18yaWsS07w[i8rkihb1KLU];
                vi8B625s = i8rkihb1KLU;
            }
            i8rkihb1KLU = i8rkihb1KLU + 1;
        };
    }
    return vi8B625s;
}

void  rJXZQHU (int gVcxyX6 [], CSobhFWDgZdE *IeLb9GF5Q [hbl1Iup8Ks0t], int m, char i8rkihb1KLU) {
    int p4O7D5;
    {
        p4O7D5 = 1;
        for (; p4O7D5 <= m;) {
            if (strchr (*IeLb9GF5Q[p4O7D5], i8rkihb1KLU) != NULL)
                printf ("%d\n", gVcxyX6[p4O7D5]);
            p4O7D5 = p4O7D5 + 1;
        };
    };
}

int main () {
    int gVcxyX6 [hbl1Iup8Ks0t];
    int Cc18yaWsS07w [343] = {(412 - 412)};
    int m;
    char bGy1DuK;
    int TOYx6t24;
    CSobhFWDgZdE *IeLb9GF5Q [hbl1Iup8Ks0t];
    scanf ("%d", &m);
    POWZayUc8 (Cc18yaWsS07w, gVcxyX6, IeLb9GF5Q, m);
    bGy1DuK = LVmhl0 (Cc18yaWsS07w);
    printf ("%c\n%d\n", bGy1DuK, Cc18yaWsS07w[bGy1DuK]);
    rJXZQHU (gVcxyX6, IeLb9GF5Q, m, bGy1DuK);
}

