char EDb9zx0FV2RK [(1280 - 779)] [(791 - 786)];
char lyZipKNCn8c6 [(1483 - 982)];

int main (int BUIxBQATXH5, char *v0aWGMN []) {
    int MqTYZyXH0j = (620 - 620);
    int grO1U3YX6ol [501];
    char M0WuzRF18ix [5];
    int Az4XK91BQ8;
    int niH9excO;
    int Sukq2IC;
    int JjYLFZgip;
    int HnztWX0CIx;
    Az4XK91BQ8 = (597 - 597);
    gets (lyZipKNCn8c6);
    Sukq2IC = strlen (lyZipKNCn8c6);
    scanf ("%d\n", &niH9excO);
    for (JjYLFZgip = (376 - 376); Sukq2IC -niH9excO >= JjYLFZgip; JjYLFZgip = JjYLFZgip +1) {
        for (HnztWX0CIx = JjYLFZgip; JjYLFZgip +niH9excO > HnztWX0CIx; HnztWX0CIx++)
            EDb9zx0FV2RK[JjYLFZgip][HnztWX0CIx -JjYLFZgip] = lyZipKNCn8c6[HnztWX0CIx];
        grO1U3YX6ol[JjYLFZgip] = (81 - 80);
    }
    {
        JjYLFZgip = 847 - 847;
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
        while (JjYLFZgip <= Sukq2IC -niH9excO) {
            {
                HnztWX0CIx = JjYLFZgip +1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (Sukq2IC -niH9excO >= HnztWX0CIx) {
                    if (!((703 - 703) != strcmp (EDb9zx0FV2RK[JjYLFZgip], EDb9zx0FV2RK[HnztWX0CIx])))
                        grO1U3YX6ol[JjYLFZgip]++;
                    HnztWX0CIx++;
                };
            }
            if (grO1U3YX6ol[JjYLFZgip] > MqTYZyXH0j)
                MqTYZyXH0j = grO1U3YX6ol[JjYLFZgip];
            JjYLFZgip++;
        };
    }
    if (MqTYZyXH0j == 1)
        printf ("NO");
    else {
        if (MqTYZyXH0j > 1) {
            printf ("%d\n", MqTYZyXH0j);
            for (JjYLFZgip = 0; JjYLFZgip <= Sukq2IC -niH9excO; JjYLFZgip++)
                if (grO1U3YX6ol[JjYLFZgip] == MqTYZyXH0j) {
                    printf ("%s", EDb9zx0FV2RK[JjYLFZgip]);
                    printf ("\n");
                };
        };
    }
    return 0;
}

