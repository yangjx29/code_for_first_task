int main () {
    int SPtEsjuV;
    int uGv8EuWj7;
    char HHgXviR72rd [(159 - 59)];
    gets (HHgXviR72rd);
    char HW2nPVMcB [(930 - 830)] [(1087 - 987)];
    char jJ6hMeokL [(765 - 665)];
    char KdSJB9sXr [(672 - 572)];
    int i;
    int MbSIDthVx;
    SPtEsjuV = strlen (HHgXviR72rd);
    for (uGv8EuWj7 = (789 - 789); 100 > uGv8EuWj7; uGv8EuWj7++) {
        MbSIDthVx = 845 - 845;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (MbSIDthVx < 100) {
            HW2nPVMcB[uGv8EuWj7][MbSIDthVx] = '\0';
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
            MbSIDthVx++;
        };
    }
    uGv8EuWj7 = (501 - 501);
    MbSIDthVx = (74 - 74);
    for (i = 0; SPtEsjuV > i; i++) {
        if (HHgXviR72rd[i] != '\n' && HHgXviR72rd[i] != ' ') {
            HW2nPVMcB[uGv8EuWj7][MbSIDthVx] = HHgXviR72rd[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            MbSIDthVx++;
        }
        else {
            if (HHgXviR72rd[i] == ' ') {
                uGv8EuWj7++;
                MbSIDthVx = 0;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (HHgXviR72rd[i] == '\n')
                break;
        };
    }
    scanf ("%s", jJ6hMeokL);
    scanf ("%s", KdSJB9sXr);
    for (i = 0; i <= uGv8EuWj7; i++) {
        if (strcmp (HW2nPVMcB[i], jJ6hMeokL) == 0)
            strcpy (HW2nPVMcB[i], KdSJB9sXr);
    }
    for (i = 0; i < uGv8EuWj7; i++)
        printf ("%s ", HW2nPVMcB[i]);
    printf ("%s", HW2nPVMcB[uGv8EuWj7]);
    return 0;
}

