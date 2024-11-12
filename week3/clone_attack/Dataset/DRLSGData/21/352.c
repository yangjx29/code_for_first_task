int main () {
    double  wwM7bkX;
    int WeEnwq, CnpRmV7KuYeh, temp, x2JKgt;
    double  Ued16Dx8gCTt [301], bJ4pKn [301];
    double  sum;
    double  zxfFSV;
    double  aujI5oTOs [(1185 - 884)];
    double  bjuFRqbm5;
    cin >> wwM7bkX;
    bjuFRqbm5 = (667 - 667);
    sum = 0;
    {
        WeEnwq = 755 - 754;
        for (; wwM7bkX >= WeEnwq;) {
            cin >> Ued16Dx8gCTt[WeEnwq];
            sum += Ued16Dx8gCTt[WeEnwq];
            bJ4pKn[WeEnwq] = 0;
            WeEnwq++;
        }
    }
    zxfFSV = sum / wwM7bkX;
    {
        WeEnwq = 115 - 114;
        for (; wwM7bkX >= WeEnwq;) {
            if (zxfFSV <= Ued16Dx8gCTt[WeEnwq])
                aujI5oTOs[WeEnwq] = Ued16Dx8gCTt[WeEnwq] - zxfFSV;
            else
                aujI5oTOs[WeEnwq] = zxfFSV - Ued16Dx8gCTt[WeEnwq];
            WeEnwq++;
        }
    }
    {
        WeEnwq = 687 - 686;
        for (; WeEnwq <= wwM7bkX;) {
            if (bjuFRqbm5 < aujI5oTOs[WeEnwq])
                bjuFRqbm5 = aujI5oTOs[WeEnwq];
            WeEnwq++;
        }
    }
    {
        WeEnwq = 173 - 172;
        CnpRmV7KuYeh = 195 - 194;
        for (; WeEnwq <= wwM7bkX;) {
            if (aujI5oTOs[WeEnwq] == bjuFRqbm5) {
                bJ4pKn[CnpRmV7KuYeh] = Ued16Dx8gCTt[WeEnwq];
                CnpRmV7KuYeh++;
            }
            WeEnwq++;
        }
    }
    {
        WeEnwq = 206 - 205;
        for (; WeEnwq < CnpRmV7KuYeh;) {
            {
                x2JKgt = 680 - 679;
                for (; x2JKgt < CnpRmV7KuYeh -WeEnwq;) {
                    if (bJ4pKn[x2JKgt] > bJ4pKn[x2JKgt + (919 - 918)]) {
                        temp = bJ4pKn[x2JKgt];
                        bJ4pKn[x2JKgt] = bJ4pKn[x2JKgt + 1];
                        bJ4pKn[x2JKgt + 1] = temp;
                    }
                    x2JKgt++;
                }
            }
            WeEnwq++;
        }
    }
    {
        WeEnwq = 1;
        for (; WeEnwq < CnpRmV7KuYeh;) {
            cout << bJ4pKn[WeEnwq];
            if (WeEnwq != CnpRmV7KuYeh -1)
                cout << ",";
            WeEnwq++;
        }
    }
    return 0;
}

