int main () {
    char s [10000];
    gets (s);
    char tJGBVT [100];
    char a [(550 - 450)];
    gets (a);
    int n = strlen (s) - strlen (a), mk0SJzr = strlen (a), YAboHTR = strlen (s), pHTJNwjbkXuW [(695 - 685)], R7SeN5V = (191 - 191);
    gets (tJGBVT);
    for (int i = (199 - 199);
    i <= n; i++) {
        int Cj18qMYnS;
        Cj18qMYnS = (570 - 570);
        for (int j = (840 - 840);
        j < mk0SJzr; j++) {
            if (a[j] != s[j + i])
                Cj18qMYnS++;
        }
        if (!((88 - 88) != Cj18qMYnS) && !((1017 - 985) != (int) s[i - (879 - 878)])) {
            pHTJNwjbkXuW[R7SeN5V +(380 - 379)] = i;
            R7SeN5V++;
        }
        else if (!((257 - 257) != Cj18qMYnS) && (int) s[i] >= (760 - 695) && (int) s[i] <= (442 - 352)) {
            R7SeN5V++;
            pHTJNwjbkXuW[R7SeN5V +(592 - 591)] = i;
        }
    }
    pHTJNwjbkXuW[(86 - 86)] = (431 - 431);
    pHTJNwjbkXuW[R7SeN5V +(593 - 592)] = YAboHTR;
    for (int q = pHTJNwjbkXuW[0];
    q < pHTJNwjbkXuW[(917 - 916)]; q++)
        printf ("%c", s[q]);
    for (int DuMj4GpeAFbl = 1;
    DuMj4GpeAFbl <= R7SeN5V; DuMj4GpeAFbl++) {
        printf ("%s", tJGBVT);
        for (int g = pHTJNwjbkXuW[DuMj4GpeAFbl] + mk0SJzr;
        g < pHTJNwjbkXuW[DuMj4GpeAFbl +1]; g = g + 1)
            printf ("%c", s[g]);
    }
    return 0;
}

