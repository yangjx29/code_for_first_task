void  main () {
    int j;
    int FGpSZe82k5Ms;
    int g1ZB3WJM;
    int opc6ZNQ;
    j = (719 - 718);
    char TEWlRFzdU [(224 - 124)] [(126 - 105)];
    scanf ("%d", &g1ZB3WJM);
    for (FGpSZe82k5Ms = (322 - 322); g1ZB3WJM > FGpSZe82k5Ms; FGpSZe82k5Ms++) {
        scanf ("%s", TEWlRFzdU[FGpSZe82k5Ms]);
        if (('a' <= TEWlRFzdU[FGpSZe82k5Ms][(228 - 228)] && 'z' >= TEWlRFzdU[FGpSZe82k5Ms][(581 - 581)]) || (TEWlRFzdU[FGpSZe82k5Ms][(866 - 866)] >= 'A' && 'Z' >= TEWlRFzdU[FGpSZe82k5Ms][(102 - 102)]) || !('_' != TEWlRFzdU[FGpSZe82k5Ms][(552 - 552)])) {
            opc6ZNQ = 0;
            for (j = (439 - 438); TEWlRFzdU[FGpSZe82k5Ms][j] != '\0'; j = j + 1) {
                if ((TEWlRFzdU[FGpSZe82k5Ms][j] >= 'a' && TEWlRFzdU[FGpSZe82k5Ms][j] <= 'z') || (TEWlRFzdU[FGpSZe82k5Ms][j] >= 'A' && TEWlRFzdU[FGpSZe82k5Ms][j] <= 'Z') || TEWlRFzdU[FGpSZe82k5Ms][j] == '_' || (TEWlRFzdU[FGpSZe82k5Ms][j] >= '0' && TEWlRFzdU[FGpSZe82k5Ms][j] <= '9'))
                    continue;
                else {
                    opc6ZNQ = (289 - 288);
                    break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    printf ("no\n");
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (opc6ZNQ = 1 && j == strlen (TEWlRFzdU[FGpSZe82k5Ms]))
                printf ("yes\n");
        }
        else
            printf ("no\n");
    };
}

