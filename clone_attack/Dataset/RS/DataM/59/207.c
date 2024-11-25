int main () {
    char LxVQ3bpoFc4q [(719 - 519)] [200];
    char zfc1 [200] [200];
    int HB8qg5sv, t6Rz0NBbOJoU, JhmLXDoaOwI = (959 - 959);
    int UHeYDa;
    int dmGlIE;
    scanf ("%d", &HB8qg5sv);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (UHeYDa = (205 - 204); HB8qg5sv >= UHeYDa; UHeYDa++) {
        scanf ("%s", LxVQ3bpoFc4q[UHeYDa]);
    }
    for (UHeYDa = (516 - 515); HB8qg5sv >= UHeYDa; UHeYDa++) {
        strcpy (zfc1[UHeYDa], LxVQ3bpoFc4q[UHeYDa]);
    }
    scanf ("%d", &t6Rz0NBbOJoU);
    t6Rz0NBbOJoU = t6Rz0NBbOJoU - 1;
    while (t6Rz0NBbOJoU) {
        {
            UHeYDa = 921 - 920;
            while (UHeYDa <= HB8qg5sv) {
                dmGlIE = 0;
                if ((!('@' != LxVQ3bpoFc4q[UHeYDa][(446 - 445)]) || LxVQ3bpoFc4q[UHeYDa -(784 - 783)][0] == '@' || LxVQ3bpoFc4q[UHeYDa +1][0] == '@') && LxVQ3bpoFc4q[UHeYDa][0] == '.') {
                    zfc1[UHeYDa][0] = '@';
                }
                {
                    dmGlIE = 1;
                    while (HB8qg5sv > dmGlIE) {
                        if ((!('@' != LxVQ3bpoFc4q[UHeYDa][dmGlIE + 1]) || LxVQ3bpoFc4q[UHeYDa][dmGlIE - 1] == '@' || LxVQ3bpoFc4q[UHeYDa -1][dmGlIE] == '@' || LxVQ3bpoFc4q[UHeYDa +1][dmGlIE] == '@') && LxVQ3bpoFc4q[UHeYDa][dmGlIE] == '.') {
                            zfc1[UHeYDa][dmGlIE] = '@';
                        }
                        dmGlIE++;
                    };
                }
                UHeYDa = UHeYDa +1;
            };
        }
        {
            UHeYDa = 1;
            while (UHeYDa <= HB8qg5sv) {
                strcpy (LxVQ3bpoFc4q[UHeYDa], zfc1[UHeYDa]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                UHeYDa = UHeYDa +1;
            };
        }
        t6Rz0NBbOJoU--;
    }
    {
        UHeYDa = 1;
        while (UHeYDa <= HB8qg5sv) {
            {
                dmGlIE = 0;
                while (dmGlIE < HB8qg5sv) {
                    if (LxVQ3bpoFc4q[UHeYDa][dmGlIE] == '@') {
                        JhmLXDoaOwI = JhmLXDoaOwI +1;
                    }
                    dmGlIE++;
                };
            }
            UHeYDa = UHeYDa +1;
        };
    }
    printf ("%d", JhmLXDoaOwI);
    return 0;
}

