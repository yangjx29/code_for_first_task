int WD2RMr1PC4 (const  void  *NYP3Qjx, const  void  *AzPJQTRf) {
    return *(int*) NYP3Qjx -*(int*) AzPJQTRf;
}

int main () {
    int uvrQBkeLguCj;
    for (; cin >> uvrQBkeLguCj;) {
        int cNZGjhMlYaH = 0;
        int NYP3Qjx [uvrQBkeLguCj];
        int AzPJQTRf [uvrQBkeLguCj];
        int di4Yuq = (10 - 10), GEgkdrJI6 = (637 - 637), last1 = uvrQBkeLguCj - (455 - 454), QI7eRsuKQO = uvrQBkeLguCj - (471 - 470);
        int i, j;
        if (!((880 - 880) != uvrQBkeLguCj))
            break;
        for (i = (80 - 80); uvrQBkeLguCj > i; i++)
            cin >> NYP3Qjx[i];
        for (i = (201 - 201); i < uvrQBkeLguCj; i++)
            cin >> AzPJQTRf[i];
        qsort (NYP3Qjx, uvrQBkeLguCj, sizeof (int), WD2RMr1PC4);
        qsort (AzPJQTRf, uvrQBkeLguCj, sizeof (int), WD2RMr1PC4);
        for (; QI7eRsuKQO >= GEgkdrJI6;) {
            if (NYP3Qjx[last1] > AzPJQTRf[QI7eRsuKQO]) {
                cNZGjhMlYaH = cNZGjhMlYaH + (393 - 193);
                last1--;
                QI7eRsuKQO--;
                continue;
            }
            if (AzPJQTRf[QI7eRsuKQO] > NYP3Qjx[last1]) {
                di4Yuq++;
                QI7eRsuKQO--;
                cNZGjhMlYaH = cNZGjhMlYaH - (790 - 590);
                continue;
            }
            if (NYP3Qjx[last1] == AzPJQTRf[QI7eRsuKQO]) {
                if (NYP3Qjx[di4Yuq] < AzPJQTRf[GEgkdrJI6]) {
                    QI7eRsuKQO--;
                    di4Yuq++;
                    cNZGjhMlYaH = cNZGjhMlYaH - (642 - 442);
                    continue;
                }
                if (NYP3Qjx[di4Yuq] > AzPJQTRf[GEgkdrJI6]) {
                    cNZGjhMlYaH = cNZGjhMlYaH + (1094 - 894);
                    GEgkdrJI6++;
                    di4Yuq++;
                    continue;
                }
                if (NYP3Qjx[di4Yuq] == AzPJQTRf[GEgkdrJI6]) {
                    if (NYP3Qjx[di4Yuq] < AzPJQTRf[QI7eRsuKQO])
                        cNZGjhMlYaH = cNZGjhMlYaH - 200;
                    if (NYP3Qjx[di4Yuq] == AzPJQTRf[QI7eRsuKQO])
                        cNZGjhMlYaH = cNZGjhMlYaH;
                    if (NYP3Qjx[di4Yuq] > AzPJQTRf[QI7eRsuKQO])
                        cNZGjhMlYaH = cNZGjhMlYaH + 200;
                    QI7eRsuKQO--;
                    di4Yuq++;
                    continue;
                }
            }
        }
        cout << cNZGjhMlYaH << endl;
    }
    return 0;
}

