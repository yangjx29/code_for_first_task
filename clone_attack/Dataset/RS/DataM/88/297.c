int main () {
    char dEislSR [(106 - 75)] = {0};
    int kAYWLd80KlfP;
    kAYWLd80KlfP = 0;
    cin.getline (dEislSR, (731 - 700));
    {
        kAYWLd80KlfP = 0;
        while (!(0 == dEislSR[kAYWLd80KlfP])) {
            if ('0' <= dEislSR[kAYWLd80KlfP] && dEislSR[kAYWLd80KlfP] <= '9') {
                cout << dEislSR[kAYWLd80KlfP];
                if (dEislSR[kAYWLd80KlfP + 1] < '0' || dEislSR[kAYWLd80KlfP + 1] > '9')
                    cout << endl;
            }
            kAYWLd80KlfP = kAYWLd80KlfP + 1;
        };
    }
    getchar ();
    getchar ();
    return 0;
}

