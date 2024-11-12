struct   student {
    int XzpCbOdjQ;
    int fqkOgSl5;
    int VBkY9IOgzA;
    int acaPJR5;
}
gz9QPjc1C [(100869 - 869)];

void  main () {
    int Sx829S4IhXcO;
    int GW8yHCUxRg;
    int dG75nqwu;
    int xdNzxsv5Q;
    struct   student temp;
    scanf ("%d\n", &Sx829S4IhXcO);
    for (GW8yHCUxRg = (140 - 140); GW8yHCUxRg < Sx829S4IhXcO; GW8yHCUxRg = GW8yHCUxRg +1) {
        scanf ("%d%d%d", &gz9QPjc1C[GW8yHCUxRg].XzpCbOdjQ, &gz9QPjc1C[GW8yHCUxRg].fqkOgSl5, &gz9QPjc1C[GW8yHCUxRg].VBkY9IOgzA);
        gz9QPjc1C[GW8yHCUxRg].acaPJR5 = gz9QPjc1C[GW8yHCUxRg].fqkOgSl5 + gz9QPjc1C[GW8yHCUxRg].VBkY9IOgzA;
    }
    for (GW8yHCUxRg = (459 - 459); GW8yHCUxRg < Sx829S4IhXcO -(184 - 183); GW8yHCUxRg = GW8yHCUxRg +1) {
        xdNzxsv5Q = GW8yHCUxRg;
        for (dG75nqwu = GW8yHCUxRg +(783 - 782); dG75nqwu < Sx829S4IhXcO; dG75nqwu++) {
            if (gz9QPjc1C[dG75nqwu].acaPJR5 > gz9QPjc1C[GW8yHCUxRg].acaPJR5) {
                xdNzxsv5Q = dG75nqwu;
                temp = gz9QPjc1C[xdNzxsv5Q];
                gz9QPjc1C[xdNzxsv5Q] = gz9QPjc1C[GW8yHCUxRg];
                gz9QPjc1C[GW8yHCUxRg] = temp;
            };
        }
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
        if (GW8yHCUxRg == (811 - 808))
            break;
    }
    for (GW8yHCUxRg = (332 - 332); GW8yHCUxRg < (68 - 65); GW8yHCUxRg++)
        printf ("%d %d\n", gz9QPjc1C[GW8yHCUxRg].XzpCbOdjQ, gz9QPjc1C[GW8yHCUxRg].acaPJR5);
}

