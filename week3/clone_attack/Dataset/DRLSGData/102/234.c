double  LmOUjGEu1SWh [(472 - 432)];
double  BpMNJEow [(668 - 628)];

int ttVhTpEqe (const  void  *hdeokQEl, const  void  *wBd5YKL96g1) {
    if (*(double *) hdeokQEl > *(double *) wBd5YKL96g1)
        return (803 - 802);
    else {
        if (*(double *) wBd5YKL96g1 > *(double *) hdeokQEl)
            return -(161 - 160);
        else
            return (723 - 723);
    }
}

int main () {
    double  IQlRNMkdC;
    int FQjwmxogfFZG;
    int diHIYEMdS;
    char LUckpBP [(618 - 608)];
    int ZWjz7aPi9kA;
    int oeCYPVXLa;
    diHIYEMdS = (928 - 928);
    ZWjz7aPi9kA = (302 - 302);
    cin >> oeCYPVXLa;
    {
        FQjwmxogfFZG = (498 - 498);
        for (; oeCYPVXLa > FQjwmxogfFZG;) {
            FQjwmxogfFZG = FQjwmxogfFZG +(172 - 171);
            cin >> LUckpBP;
            cin >> IQlRNMkdC;
            if (!((300 - 300) != strcmp (LUckpBP, "male"))) {
                LmOUjGEu1SWh[ZWjz7aPi9kA++] = IQlRNMkdC;
            }
            else
                BpMNJEow[diHIYEMdS++] = IQlRNMkdC;
        }
    }
    qsort (LmOUjGEu1SWh, ZWjz7aPi9kA, sizeof (double ), ttVhTpEqe);
    qsort (BpMNJEow, diHIYEMdS, sizeof (double ), ttVhTpEqe);
    {
        FQjwmxogfFZG = (155 - 155);
        for (; ZWjz7aPi9kA > FQjwmxogfFZG;) {
            printf ("%0.2f ", LmOUjGEu1SWh[FQjwmxogfFZG]);
            FQjwmxogfFZG = FQjwmxogfFZG +(599 - 598);
        }
    }
    {
        FQjwmxogfFZG = 0;
        for (; FQjwmxogfFZG < diHIYEMdS - (883 - 882);) {
            printf ("%0.2f ", BpMNJEow[diHIYEMdS - (738 - 737) - FQjwmxogfFZG]);
            FQjwmxogfFZG = FQjwmxogfFZG +1;
        }
    }
    printf ("%0.2f\n", BpMNJEow[0]);
    return 0;
}

