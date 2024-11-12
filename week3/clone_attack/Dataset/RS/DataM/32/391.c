int main () {
    int BusIzo;
    BusIzo = 0;
    int v6Vsug9ZOWj = (704 - 704);
    int num1 [101] = {(188 - 188)};
    int wEnrXKPJH [101] = {(324 - 324)};
    int iEBS8Nd;
    int i;
    int EVIurUhG3v90;
    char str1 [(877 - 776)];
    char avjPLCH0V [101];
    int UTR4mq9g3;
    int Z8I3wGfM;
    cin >> iEBS8Nd;
    {
        BusIzo = 825 - 824;
        while (BusIzo <= iEBS8Nd) {
            cin >> str1;
            cin >> avjPLCH0V;
            UTR4mq9g3 = strlen (str1), Z8I3wGfM = strlen (avjPLCH0V);
            {
                i = 0;
                while (i < UTR4mq9g3) {
                    num1[UTR4mq9g3 -i - 1] = str1[i] - '0';
                    i++;
                };
            }
            for (i = 0; Z8I3wGfM > i; i = i + 1)
                wEnrXKPJH[Z8I3wGfM -i - 1] = avjPLCH0V[i] - '0';
            for (i = 0; i < UTR4mq9g3; i++) {
                num1[i] = num1[i] - wEnrXKPJH[i];
                EVIurUhG3v90 = i;
                while (0 > num1[EVIurUhG3v90]) {
                    num1[EVIurUhG3v90] += 10, num1[EVIurUhG3v90 +1]--;
                    EVIurUhG3v90++;
                };
            }
            {
                i = UTR4mq9g3 -1;
                while (i >= 0) {
                    if (!(0 != num1[i]) && v6Vsug9ZOWj == 0) {
                        continue;
                    }
                    cout << num1[i];
                    i--;
                    v6Vsug9ZOWj = 1;
                };
            }
            v6Vsug9ZOWj = 0;
            cout << endl;
            for (i = 0; i < UTR4mq9g3; i++)
                num1[i] = 0, str1[i] = 0;
            {
                i = 0;
                while (i < Z8I3wGfM) {
                    wEnrXKPJH[i] = 0, avjPLCH0V[i] = 0;
                    i++;
                };
            }
            BusIzo++;
        };
    }
    return 0;
}

