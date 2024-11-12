int EmgvzeAyqZlV, i, SiQg9hsMFN, JunYt9jSzbLe, dzZjay0q, A4rP8MwXg, VSgxuyO9kIij [110] [110] = {0}, C4RzUixCDQNn, tcTLh1;

int xE6QajCh7R () {
    {
        dzZjay0q = 0;
        while (dzZjay0q < EmgvzeAyqZlV -1) {
            {
                SiQg9hsMFN = 0;
                while (A4rP8MwXg > SiQg9hsMFN) {
                    C4RzUixCDQNn = 99999999;
                    {
                        JunYt9jSzbLe = 0;
                        for (; A4rP8MwXg > JunYt9jSzbLe;) {
                            if (C4RzUixCDQNn > VSgxuyO9kIij[SiQg9hsMFN][JunYt9jSzbLe])
                                C4RzUixCDQNn = VSgxuyO9kIij[SiQg9hsMFN][JunYt9jSzbLe];
                            JunYt9jSzbLe++;
                        }
                    }
                    if (C4RzUixCDQNn != 0) {
                        JunYt9jSzbLe = 0;
                        while (JunYt9jSzbLe < A4rP8MwXg) {
                            VSgxuyO9kIij[SiQg9hsMFN][JunYt9jSzbLe] -= C4RzUixCDQNn;
                            JunYt9jSzbLe++;
                        }
                    }
                    SiQg9hsMFN++;
                }
            }
            {
                SiQg9hsMFN = 0;
                while (A4rP8MwXg > SiQg9hsMFN) {
                    C4RzUixCDQNn = 99999999;
                    {
                        JunYt9jSzbLe = 0;
                        while (JunYt9jSzbLe < A4rP8MwXg) {
                            if (C4RzUixCDQNn > VSgxuyO9kIij[JunYt9jSzbLe][SiQg9hsMFN])
                                C4RzUixCDQNn = VSgxuyO9kIij[JunYt9jSzbLe][SiQg9hsMFN];
                            JunYt9jSzbLe++;
                        }
                    }
                    if (C4RzUixCDQNn != 0) {
                        JunYt9jSzbLe = 0;
                        while (A4rP8MwXg > JunYt9jSzbLe) {
                            VSgxuyO9kIij[JunYt9jSzbLe][SiQg9hsMFN] = VSgxuyO9kIij[JunYt9jSzbLe][SiQg9hsMFN] - C4RzUixCDQNn;
                            JunYt9jSzbLe++;
                        }
                    }
                    SiQg9hsMFN++;
                }
            }
            dzZjay0q++;
            tcTLh1 = tcTLh1 + VSgxuyO9kIij[1][1];
            {
                SiQg9hsMFN = 0;
                while (A4rP8MwXg -1 > SiQg9hsMFN) {
                    SiQg9hsMFN++;
                    JunYt9jSzbLe = 0;
                    while (A4rP8MwXg +1 > JunYt9jSzbLe) {
                        VSgxuyO9kIij[SiQg9hsMFN +1][JunYt9jSzbLe] = VSgxuyO9kIij[SiQg9hsMFN +2][JunYt9jSzbLe];
                        JunYt9jSzbLe++;
                    }
                }
            }
            A4rP8MwXg--;
            {
                SiQg9hsMFN = 0;
                while (SiQg9hsMFN < A4rP8MwXg) {
                    {
                        JunYt9jSzbLe = 0;
                        while (A4rP8MwXg -1 > JunYt9jSzbLe) {
                            VSgxuyO9kIij[SiQg9hsMFN][JunYt9jSzbLe +1] = VSgxuyO9kIij[SiQg9hsMFN][JunYt9jSzbLe +2];
                            JunYt9jSzbLe++;
                        }
                    }
                    SiQg9hsMFN++;
                }
            }
        }
    }
    return tcTLh1;
}

int main () {
    cin >> EmgvzeAyqZlV;
    {
        i = 0;
        while (EmgvzeAyqZlV > i) {
            tcTLh1 = 0;
            A4rP8MwXg = EmgvzeAyqZlV;
            for (SiQg9hsMFN = 0; EmgvzeAyqZlV > SiQg9hsMFN; SiQg9hsMFN++) {
                JunYt9jSzbLe = 0;
                while (EmgvzeAyqZlV > JunYt9jSzbLe) {
                    cin >> VSgxuyO9kIij[SiQg9hsMFN][JunYt9jSzbLe];
                    JunYt9jSzbLe++;
                }
            }
            cout << xE6QajCh7R () << endl;
            i++;
        }
    }
    return 0;
}

