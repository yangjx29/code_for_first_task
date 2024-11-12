int main () {
    int r98ulCv4dm, xIjDO4eXau, aKrnSuCl;
    int WeLUXwYSBI [r98ulCv4dm];
    int vZHvL6V4m91 = 0, kia9Rwhknm = 0, T7AeOnFlG = 0, tgLaRNY = 0;
    double  rn = 1.0 * vZHvL6V4m91 / r98ulCv4dm * 100, qC5Kfcpb6E = 1.0 * kia9Rwhknm / r98ulCv4dm * 100, jLblvinU03fC = 1.0 * T7AeOnFlG / r98ulCv4dm * 100, bzMGrvUh = 1.0 * tgLaRNY / r98ulCv4dm * 100;
    printf ("1-18: %.2lf%\n19-35: %.2lf%\n36-60: %.2lf%\nOver60: %.2lf%\n", rn, qC5Kfcpb6E, jLblvinU03fC, bzMGrvUh);
    scanf ("%d", &r98ulCv4dm);
    for (aKrnSuCl = 0; aKrnSuCl < r98ulCv4dm; aKrnSuCl++) {
        scanf ("%d", &WeLUXwYSBI[aKrnSuCl]);
    }
    for (aKrnSuCl = 0; aKrnSuCl < r98ulCv4dm; aKrnSuCl++) {
        if (1 <= WeLUXwYSBI[aKrnSuCl] && 18 >= WeLUXwYSBI[aKrnSuCl]) {
            vZHvL6V4m91++;
        }
        else {
            if (19 <= WeLUXwYSBI[aKrnSuCl] && WeLUXwYSBI[aKrnSuCl] <= 35) {
                kia9Rwhknm++;
            }
            else if (WeLUXwYSBI[aKrnSuCl] >= 36 && WeLUXwYSBI[aKrnSuCl] <= 60) {
                T7AeOnFlG++;
            }
            else {
                tgLaRNY++;
            }
        }
    }
    return 0;
}

