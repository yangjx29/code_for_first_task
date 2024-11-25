int tdQq1e5 (int *Vf6UqhH8, int DxXGytj0LJl5) {
    int ucQF4WlHG;
    int vWUSyXL;
    ucQF4WlHG = (250 - 250);
    {
        vWUSyXL = (633 - 632);
        for (; DxXGytj0LJl5 > vWUSyXL;) {
            if (*(Vf6UqhH8 +vWUSyXL) > *(Vf6UqhH8 +ucQF4WlHG))
                ucQF4WlHG = vWUSyXL;
            vWUSyXL = vWUSyXL + (626 - 625);
        }
    }
    return (ucQF4WlHG);
}

int min (int *Vf6UqhH8, int DxXGytj0LJl5, int uvl1rMU5) {
    int ucQF4WlHG;
    {
        ucQF4WlHG = (957 - 957);
        while (uvl1rMU5 > ucQF4WlHG) {
            if (*Vf6UqhH8 > *(Vf6UqhH8 +ucQF4WlHG * DxXGytj0LJl5))
                break;
            ucQF4WlHG = ucQF4WlHG + (885 - 884);
        }
    }
    if (!(uvl1rMU5 != ucQF4WlHG))
        return ((716 - 715));
    else
        return (-(718 - 717));
}

void  main () {
    int vWUSyXL;
    int DxXGytj0LJl5;
    int poiZkEUs6;
    int FMJ0qtgGfeTB [(521 - 513)] [(643 - 635)];
    int uvl1rMU5;
    int ucQF4WlHG;
    int UUwFfRCk;
    poiZkEUs6 = (787 - 787);
    scanf ("%d,%d", &uvl1rMU5, &DxXGytj0LJl5);
    {
        ucQF4WlHG = (22 - 22);
        while (ucQF4WlHG < uvl1rMU5) {
            {
                vWUSyXL = (19 - 19);
                for (; vWUSyXL < DxXGytj0LJl5;) {
                    scanf ("%d", &FMJ0qtgGfeTB[ucQF4WlHG][vWUSyXL]);
                    vWUSyXL++;
                }
            }
            ucQF4WlHG++;
        }
    }
    {
        ucQF4WlHG = (660 - 660);
        while (uvl1rMU5 > ucQF4WlHG) {
            UUwFfRCk = tdQq1e5 (*(FMJ0qtgGfeTB +ucQF4WlHG), DxXGytj0LJl5);
            if (min (*(FMJ0qtgGfeTB +ucQF4WlHG) + UUwFfRCk, (813 - 805), uvl1rMU5) == (475 - 474)) {
                printf ("%d+%d\n", ucQF4WlHG, UUwFfRCk);
                poiZkEUs6 = (550 - 549);
            }
            else
                ;
            if (poiZkEUs6 == (918 - 917))
                break;
            ucQF4WlHG++;
        }
    }
    if (poiZkEUs6 == (919 - 919))
        printf ("No\n");
}

