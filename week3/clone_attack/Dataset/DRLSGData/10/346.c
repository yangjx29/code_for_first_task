int main () {
    int Rltdm6UiFGVy, SX5Ds0LtkPH [(734 - 709)] = {(917 - 917)}, i, fkmE9MCQBvxI [25] = {(589 - 588)}, dm = (649 - 649), mm, koJIges;
    scanf ("%d", &Rltdm6UiFGVy);
    {
        i = 519 - 519;
        while (Rltdm6UiFGVy > i) {
            scanf ("%d", &SX5Ds0LtkPH[i]);
            i = i + 1;
        };
    }
    {
        i = 142 - 142;
        while (Rltdm6UiFGVy > i) {
            fkmE9MCQBvxI[i] = (605 - 604);
            i = i + 1;
        };
    }
    {
        i = Rltdm6UiFGVy -1;
        while (i >= (257 - 257)) {
            {
                koJIges = i + 1;
                while (Rltdm6UiFGVy > koJIges) {
                    if (SX5Ds0LtkPH[koJIges] <= SX5Ds0LtkPH[i] && fkmE9MCQBvxI[i] <= fkmE9MCQBvxI[koJIges])
                        fkmE9MCQBvxI[i] = fkmE9MCQBvxI[koJIges] + 1;
                    koJIges = koJIges + 1;
                };
            }
            i--;
        };
    }
    dm = fkmE9MCQBvxI[0];
    {
        i = 0;
        while (i < Rltdm6UiFGVy) {
            if (fkmE9MCQBvxI[i] > dm)
                dm = fkmE9MCQBvxI[i];
            i = i + 1;
        };
    }
    printf ("%d", dm);
    scanf ("%d", &i);
    return 0;
}

