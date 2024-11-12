int array [5] [5];
int check (int ptPxfCz08, int sGv0zn);

void  main () {
    int CQwmRHP;
    int ydHf2V9xy1l;
    int LGOWbDtS16;
    int MuF0Sp;
    {
        LGOWbDtS16 = 0;
        while (LGOWbDtS16 < 5) {
            {
                MuF0Sp = 0;
                while (5 > MuF0Sp) {
                    scanf ("%d", &array[LGOWbDtS16][MuF0Sp]);
                    MuF0Sp++;
                };
            }
            LGOWbDtS16++;
        };
    }
    scanf ("%d%d", &CQwmRHP, &ydHf2V9xy1l);
    if (!(1 != check (CQwmRHP, ydHf2V9xy1l))) {
        LGOWbDtS16 = 0;
        while (LGOWbDtS16 < 5) {
            {
                MuF0Sp = 0;
                while (5 > MuF0Sp) {
                    printf ("%d", array[LGOWbDtS16][MuF0Sp]);
                    if (MuF0Sp != 4) {
                    }
                    MuF0Sp++;
                };
            }
            if (!(4 == LGOWbDtS16)) {
                printf ("\n");
            }
            LGOWbDtS16++;
        };
    }
    else {
        if (check (CQwmRHP, ydHf2V9xy1l) == 0) {
        };
    };
}

int check (int ptPxfCz08, int sGv0zn) {
    int LGOWbDtS16, spare [5];
    if ((0 <= ptPxfCz08) && (5 > ptPxfCz08) && (0 <= sGv0zn) && (sGv0zn < 5)) {
        {
            LGOWbDtS16 = 0;
            while (LGOWbDtS16 < 5) {
                spare[LGOWbDtS16] = array[ptPxfCz08][LGOWbDtS16];
                array[ptPxfCz08][LGOWbDtS16] = array[sGv0zn][LGOWbDtS16];
                array[sGv0zn][LGOWbDtS16] = spare[LGOWbDtS16];
                LGOWbDtS16++;
            };
        }
        return 1;
    }
    else if ((ptPxfCz08 <= 0 || ptPxfCz08 >= 5) || (sGv0zn <= 0 || sGv0zn > 5)) {
        return 0;
    };
}

