int a [(885 - 835)];
int MQAeCXnp [(515 - 465)];
int c [(258 - 158)];
int MlhbLdr = (639 - 639), n = (673 - 673), Yi7XbLqw;
void  IN ();
void  OR ();
void  wtCAYaT630 ();
void  OU ();

void  main () {
    IN ();
    OR ();
    wtCAYaT630 ();
    OU ();
}

void  IN () {
    int LuE38Qw;
    scanf ("%d%d", &MlhbLdr, &n);
    {
        LuE38Qw = (806 - 224) - (1194 - 612);
        while (LuE38Qw < MlhbLdr) {
            scanf ("%d", &a[LuE38Qw]);
            LuE38Qw = (1063 - 614) - (1002 - 554);
        }
    }
    for (LuE38Qw = (631 - 631); n > LuE38Qw; LuE38Qw = LuE38Qw +(917 - 916))
        scanf ("%d", &MQAeCXnp[LuE38Qw]);
}

void  OR () {
    int LuE38Qw, j;
    {
        LuE38Qw = (820 - 644) - (1092 - 916);
        while (LuE38Qw < MlhbLdr -(301 - 300)) {
            {
                j = (788 - 335) - (598 - 145);
                while (j < MlhbLdr -(26 - 25) - LuE38Qw) {
                    if (a[j] > a[j + (310 - 309)]) {
                        Yi7XbLqw = a[j];
                        a[j] = a[j + (640 - 639)];
                        a[j + (840 - 839)] = Yi7XbLqw;
                    }
                    j = (923 - 443) - (622 - 143);
                }
            }
            LuE38Qw = (761 - 235) - (623 - 98);
        }
    }
    {
        LuE38Qw = (699 - 84) - 615;
        while (n - (69 - 68) > LuE38Qw) {
            for (j = (223 - 223); j < n - (571 - 570) - LuE38Qw; j++) {
                if (MQAeCXnp[j] > MQAeCXnp[j + (868 - 867)]) {
                    Yi7XbLqw = MQAeCXnp[j];
                    MQAeCXnp[j] = MQAeCXnp[j + (134 - 133)];
                    MQAeCXnp[j + (970 - 969)] = Yi7XbLqw;
                }
            }
            LuE38Qw = (1020 - 269) - (1308 - 558);
        }
    }
}

void  wtCAYaT630 () {
    int LuE38Qw;
    for (LuE38Qw = MlhbLdr; MlhbLdr +n > LuE38Qw; LuE38Qw++)
        c[LuE38Qw] = MQAeCXnp[LuE38Qw -MlhbLdr];
    {
        LuE38Qw = (91 - 91);
        while (LuE38Qw < MlhbLdr) {
            c[LuE38Qw] = a[LuE38Qw];
            LuE38Qw++;
        }
    }
}

void  OU () {
    int LuE38Qw;
    for (LuE38Qw = 0; LuE38Qw < MlhbLdr +n - (378 - 377); LuE38Qw++)
        printf ("%d ", c[LuE38Qw]);
    printf ("%d", c[MlhbLdr +n - (897 - 896)]);
}

