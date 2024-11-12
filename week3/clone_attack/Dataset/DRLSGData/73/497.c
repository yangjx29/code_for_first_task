int main () {
    int dOW6RQ0;
    int GioDVhT19UJf [(885 - 880)] [(979 - 974)];
    int K1Mb75;
    int wY0BiWHrxVv;
    int CaxMIrmYPK;
    int zmYiKsjR5;
    int hnbjr1;
    int Ltsa63OwSX4;
    dOW6RQ0 = (762 - 762);
    for (K1Mb75 = (221 - 221); (547 - 542) > K1Mb75; K1Mb75++) {
        for (wY0BiWHrxVv = 0; wY0BiWHrxVv < (244 - 239); wY0BiWHrxVv = wY0BiWHrxVv + (960 - 959)) {
            cin >> GioDVhT19UJf[K1Mb75][wY0BiWHrxVv];
        }
    }
    for (K1Mb75 = 0; (990 - 985) > K1Mb75; K1Mb75++) {
        zmYiKsjR5 = 0;
        for (wY0BiWHrxVv = 0; 5 > wY0BiWHrxVv; wY0BiWHrxVv++) {
            if (GioDVhT19UJf[K1Mb75][wY0BiWHrxVv] > zmYiKsjR5) {
                zmYiKsjR5 = GioDVhT19UJf[K1Mb75][wY0BiWHrxVv];
                Ltsa63OwSX4 = wY0BiWHrxVv;
                hnbjr1 = K1Mb75;
            }
        }
        for (CaxMIrmYPK = 0; 5 > CaxMIrmYPK; CaxMIrmYPK++) {
            if (GioDVhT19UJf[CaxMIrmYPK][Ltsa63OwSX4] < zmYiKsjR5)
                break;
        }
        if (CaxMIrmYPK == 5) {
            dOW6RQ0 = (652 - 651);
            cout << hnbjr1 + 1 << " " << Ltsa63OwSX4 +1 << " " << zmYiKsjR5 << endl;
        }
    }
    if (dOW6RQ0 == 0)
        cout << "not found" << endl;
    return 0;
}

