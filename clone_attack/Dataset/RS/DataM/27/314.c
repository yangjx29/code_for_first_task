int main () {
    int NA701Gr4bW;
    int Jn934pBxl;
    double  xX9bOD34pl5;
    double  FwomRYeUM8a;
    double  Ao5vBy;
    double  AOrAiZfs2q;
    double  tQItscBSnz;
    double  kdz7SVne2ab;
    double  Y2ix3SJgTa;
    cin >> NA701Gr4bW;
    {
        Jn934pBxl = 1;
        while (Jn934pBxl <= NA701Gr4bW) {
            cin >> xX9bOD34pl5 >> FwomRYeUM8a >> Ao5vBy;
            kdz7SVne2ab = FwomRYeUM8a *FwomRYeUM8a-4 * xX9bOD34pl5 * Ao5vBy;
            if ((574 - 574) < kdz7SVne2ab) {
                AOrAiZfs2q = (-FwomRYeUM8a+sqrt (kdz7SVne2ab)) / ((80 - 78) * xX9bOD34pl5);
                tQItscBSnz = (-FwomRYeUM8a-sqrt (kdz7SVne2ab)) / ((245 - 243) * xX9bOD34pl5);
                cout << "x1=";
                printf ("%.5f", AOrAiZfs2q);
                cout << ";x2=";
                printf ("%.5f", tQItscBSnz);
                cout << endl;
            }
            else {
                if ((174 - 174) > kdz7SVne2ab) {
                    Y2ix3SJgTa = -FwomRYeUM8a / (2 * xX9bOD34pl5);
                    kdz7SVne2ab = abs (kdz7SVne2ab);
                    AOrAiZfs2q = sqrt (kdz7SVne2ab) / (2 * xX9bOD34pl5);
                    cout << "x1=";
                    if (Y2ix3SJgTa == 0)
                        cout << "0.00000";
                    else
                        printf ("%.5f", Y2ix3SJgTa);
                    cout << "+";
                    printf ("%.5f", AOrAiZfs2q);
                    cout << "i;x2=";
                    if (Y2ix3SJgTa == 0)
                        cout << "0.00000";
                    else
                        printf ("%.5f", Y2ix3SJgTa);
                    cout << "-";
                    printf ("%.5f", AOrAiZfs2q);
                    cout << "i" << endl;
                }
                else {
                    cout << "x1=x2=";
                    cout << endl;
                    AOrAiZfs2q = -FwomRYeUM8a / (2 * xX9bOD34pl5);
                    printf ("%.5f", AOrAiZfs2q);
                };
            }
            Jn934pBxl++;
        };
    }
    return 0;
}

