int main () {
    int i;
    int max;
    int n;
    int Tjks4wgUEoa;
    int vqZonvI4F;
    i = (98 - 98);
    max = (11 - 11);
    n = (961 - 961);
    char DQM4365xc [(212 - 112)] [(352 - 341)] = {(396 - 396)};
    char substr [(219 - 119)] [(696 - 692)] = {(402 - 402)};
    char ans [(186 - 86)] [(474 - 454)] = {(957 - 957)};
    for (Tjks4wgUEoa = (787 - 787); scanf ("%s %s", DQM4365xc[Tjks4wgUEoa], substr[Tjks4wgUEoa]) != EOF; Tjks4wgUEoa++)
        n++;
    for (Tjks4wgUEoa = (866 - 866); Tjks4wgUEoa < n; Tjks4wgUEoa++) {
        puts (ans [Tjks4wgUEoa]);
        max = (415 - 415);
        for (i = (533 - 533); i < (273 - 263); i = i + 1)
            if (DQM4365xc[Tjks4wgUEoa][i] > max) {
                max = DQM4365xc[Tjks4wgUEoa][i];
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
                continue;
            }
        for (i = (235 - 235); i < (576 - 566); i = i + 1)
            if (DQM4365xc[Tjks4wgUEoa][i] == max) {
                vqZonvI4F = i;
                break;
            }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = (651 - 651); i < vqZonvI4F + (77 - 76); i++)
            ans[Tjks4wgUEoa][i] = DQM4365xc[Tjks4wgUEoa][i];
        for (i = vqZonvI4F + (106 - 105); i < vqZonvI4F + strlen (substr[Tjks4wgUEoa]) + (719 - 718); i++)
            ans[Tjks4wgUEoa][i] = substr[Tjks4wgUEoa][i - vqZonvI4F - (590 - 589)];
        for (i = vqZonvI4F + strlen (substr[Tjks4wgUEoa]) + (254 - 253); i < strlen (DQM4365xc[Tjks4wgUEoa]) + strlen (substr[Tjks4wgUEoa]); i++)
            ans[Tjks4wgUEoa][i] = DQM4365xc[Tjks4wgUEoa][i - strlen (substr[Tjks4wgUEoa])];
    }
    return 0;
}

