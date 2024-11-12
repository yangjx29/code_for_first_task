int main () {
    int am83v9hScF, isC1x2, Cc70ik, GqArvn9y5Nx [12] = {0};
    int OcRNawzt9Ypo;
    int a;
    scanf ("%d", &OcRNawzt9Ypo);
    {
        a = 0;
        while (OcRNawzt9Ypo > a) {
            int EZiymxA, p2tfeBKO, sum;
            a++;
            scanf ("%d %d %d", &am83v9hScF, &isC1x2, &Cc70ik);
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
            if ((!(0 != am83v9hScF % 4) && !(0 == am83v9hScF % 100)) || am83v9hScF % 400 == 0) {
                int jITdQMs [12] = {0, 31, 29, 31, (500 - 470), 31, 30, 31, 31, 30, 31, 30};
                {
                    EZiymxA = 1;
                    while (EZiymxA <= 12) {
                        sum = 0;
                        {
                            p2tfeBKO = 0;
                            while (p2tfeBKO < EZiymxA) {
                                sum += jITdQMs[p2tfeBKO];
                                p2tfeBKO++;
                            };
                        }
                        GqArvn9y5Nx[EZiymxA] = sum + 1;
                        EZiymxA = EZiymxA +1;
                    };
                };
            }
            else {
                int month2 [12] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
                {
                    EZiymxA = 1;
                    while (EZiymxA <= 12) {
                        sum = 0;
                        {
                            p2tfeBKO = 0;
                            while (p2tfeBKO < EZiymxA) {
                                sum = sum + month2[p2tfeBKO];
                                p2tfeBKO++;
                            };
                        }
                        GqArvn9y5Nx[EZiymxA] = sum + 1;
                        EZiymxA++;
                    };
                };
            }
            if ((GqArvn9y5Nx[Cc70ik] - GqArvn9y5Nx[isC1x2]) % 7 == 0 || (GqArvn9y5Nx[isC1x2] - GqArvn9y5Nx[Cc70ik]) % 7 == 0)
                printf ("YES\n");
            else
                printf ("NO\n");
        };
    };
}

