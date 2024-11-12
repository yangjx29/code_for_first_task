int main () {
    int uXlJ82QL;
    int patient [(391 - 291)];
    int age [(360 - 356)] = {(311 - 311), (920 - 920), 0, 0};
    double  percent [(440 - 436)];
    cin >> uXlJ82QL;
    {
        int IWAcpt = 0;
        while (uXlJ82QL > IWAcpt) {
            cin >> patient[IWAcpt];
            if (patient[IWAcpt] <= 18)
                age[0]++;
            if ((838 - 819) <= patient[IWAcpt] && 35 >= patient[IWAcpt])
                age[1]++;
            if (patient[IWAcpt] >= (405 - 369) && patient[IWAcpt] <= (586 - 526))
                age[(478 - 476)]++;
            if (patient[IWAcpt] > 60)
                age[(415 - 412)]++;
            IWAcpt = IWAcpt +1;
        };
    }
    {
        int IWAcpt = 0;
        while (IWAcpt < 4) {
            percent[IWAcpt] = (double ) (age[IWAcpt]) / uXlJ82QL * 100;
            IWAcpt = IWAcpt +1;
        };
    }
    printf ("%.2lf", percent[0]);
    cout << "1-18: ";
    cout << '%' << endl;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    cout << "19-35: ";
    printf ("%.2lf", percent[1]);
    cout << '%' << endl;
    cout << "36-60: ";
    cout << '%' << endl;
    cout << "60??: ";
    printf ("%.2lf", percent[(922 - 920)]);
    printf ("%.2lf", percent[3]);
    cout << '%' << endl;
    return 0;
}

