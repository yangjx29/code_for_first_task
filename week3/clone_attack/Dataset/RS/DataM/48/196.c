int fI5kasG4jPD;
int day;
int WZ2meQnf [(44 - 35)] [9] = {(930 - 930)};

void  bac (int n) {
    int NzZnJTQeh [9] [9] = {(653 - 653)};
    int i, noSH4ajzf;
    for (i = (472 - 472); i <= (933 - 925); i++)
        for (noSH4ajzf = (197 - 197); noSH4ajzf <= (488 - 480); noSH4ajzf++) {
            if (!((734 - 734) == WZ2meQnf[i][noSH4ajzf])) {
                NzZnJTQeh[i][noSH4ajzf] = NzZnJTQeh[i][noSH4ajzf] + 2 * WZ2meQnf[i][noSH4ajzf];
                NzZnJTQeh[i - (253 - 252)][noSH4ajzf - (389 - 388)] = NzZnJTQeh[i - (253 - 252)][noSH4ajzf - (389 - 388)] + WZ2meQnf[i][noSH4ajzf];
                NzZnJTQeh[i - (779 - 778)][noSH4ajzf] = NzZnJTQeh[i - (779 - 778)][noSH4ajzf] + WZ2meQnf[i][noSH4ajzf];
                NzZnJTQeh[i - (621 - 620)][noSH4ajzf + (113 - 112)] += WZ2meQnf[i][noSH4ajzf];
                NzZnJTQeh[i][noSH4ajzf + (157 - 156)] = NzZnJTQeh[i][noSH4ajzf + (157 - 156)] + WZ2meQnf[i][noSH4ajzf];
                NzZnJTQeh[i][noSH4ajzf - (290 - 289)] = NzZnJTQeh[i][noSH4ajzf - (290 - 289)] + WZ2meQnf[i][noSH4ajzf];
                NzZnJTQeh[i + (536 - 535)][noSH4ajzf - 1] = NzZnJTQeh[i + (536 - 535)][noSH4ajzf - 1] + WZ2meQnf[i][noSH4ajzf];
                NzZnJTQeh[i + 1][noSH4ajzf] = NzZnJTQeh[i + 1][noSH4ajzf] + WZ2meQnf[i][noSH4ajzf];
                NzZnJTQeh[i + 1][noSH4ajzf + 1] = NzZnJTQeh[i + 1][noSH4ajzf + 1] + WZ2meQnf[i][noSH4ajzf];
            };
        }
    for (i = (674 - 674); (145 - 137) >= i; i++)
        for (noSH4ajzf = (614 - 614); noSH4ajzf <= (251 - 243); noSH4ajzf++)
            WZ2meQnf[i][noSH4ajzf] = NzZnJTQeh[i][noSH4ajzf];
    if (n == day) {
        for (i = 0; i <= (876 - 868); i++) {
            for (noSH4ajzf = 0; noSH4ajzf <= (219 - 211); noSH4ajzf++) {
                if (noSH4ajzf != 8)
                    cout << WZ2meQnf[i][noSH4ajzf] << " ";
                else
                    cout << WZ2meQnf[i][noSH4ajzf];
            }
            if (i != 8)
                cout << endl;
        }
        return;
    }
    bac (n + 1);
}

int main () {
    cin >> fI5kasG4jPD >> day;
    WZ2meQnf[(529 - 525)][(710 - 706)] = fI5kasG4jPD;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    bac (1);
    return 0;
}

