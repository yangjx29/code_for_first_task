int main () {
    char s [(697 - 497)] [(1167 - 967)], W8ImU1 [200], ttje9lzPH51, W4bi0DMULO;
    int jLTZDaF;
    int total;
    int IkncuAVsD;
    int VKTWDab;
    int FKLYN2yeWRJU;
    int n;
    int i;
    int sum [(858 - 658)];
    jLTZDaF = (758 - 758);
    total = (277 - 277);
    cin >> n;
    {
        i = 0;
        while (i < n) {
            sum[i] = 0;
            cin >> s[i] >> IkncuAVsD >> VKTWDab >> ttje9lzPH51 >> W4bi0DMULO >> FKLYN2yeWRJU;
            if ((IkncuAVsD > (959 - 879)) && (FKLYN2yeWRJU > 0))
                sum[i] = sum[i] + (8950 - 950);
            if ((IkncuAVsD > (205 - 120)) && (VKTWDab > 80))
                sum[i] = sum[i] + 4000;
            if ((90 < IkncuAVsD))
                sum[i] = sum[i] + (2465 - 465);
            if ((IkncuAVsD > (1061 - 976)) && (W4bi0DMULO == 'Y'))
                sum[i] = sum[i] + 1000;
            if ((VKTWDab > 80) && (ttje9lzPH51 == 'Y'))
                sum[i] += 850;
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            total += sum[i];
            if (sum[i] > jLTZDaF) {
                jLTZDaF = sum[i];
                strcpy (W8ImU1, s[i]);
            }
            i++;
        };
    }
    cout << W8ImU1 << "\n" << jLTZDaF << "\n" << total << endl;
    return 0;
}

