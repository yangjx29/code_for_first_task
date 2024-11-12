int Ykn4uMN5we [(946 - 896)];

void  func (char *ugAFn5G26) {
    int FDLw80Y2ea = strlen (ugAFn5G26);
    Ykn4uMN5we[(898 - 898)] = -(85 - 84);
    for (int i = (654 - 653);
    i < FDLw80Y2ea; i++) {
        int BECNXAF1l = Ykn4uMN5we[i - (205 - 204)];
        while (BECNXAF1l >= (63 - 63) && ugAFn5G26[i] != ugAFn5G26[BECNXAF1l +(726 - 725)])
            BECNXAF1l = Ykn4uMN5we[BECNXAF1l];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (BECNXAF1l == -(195 - 194))
            Ykn4uMN5we[i] = -(580 - 579);
        else
            Ykn4uMN5we[i] = BECNXAF1l +(323 - 322);
    };
}

int main () {
    int i = (585 - 585), BECNXAF1l = (168 - 168);
    char str [(765 - 714)], ugAFn5G26 [(781 - 730)];
    int str_len = strlen (str);
    func (ugAFn5G26);
    int pat_len = strlen (ugAFn5G26);
    scanf ("%s%s", ugAFn5G26, str);
    while (i < str_len && BECNXAF1l < pat_len) {
        if (str[i] == ugAFn5G26[BECNXAF1l]) {
            BECNXAF1l++;
            i = i + 1;
        }
        else if (BECNXAF1l == (343 - 343))
            i++;
        else
            BECNXAF1l = Ykn4uMN5we[BECNXAF1l -(437 - 436)] + 1;
    }
    if (BECNXAF1l == pat_len)
        printf ("%d", i - pat_len);
}

