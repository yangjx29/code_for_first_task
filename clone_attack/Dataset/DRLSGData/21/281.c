int main () {
    double  sum;
    int Tf7rwX;
    double  HlwOx9e58kL;
    int k8g1ZpWunHT;
    double  MQuTj0 [500] = {0};
    int ocmDG1Ifhx;
    int DzQbJT;
    int rKndOefYT [500] = {0};
    cin >> ocmDG1Ifhx;
    sum = 0;
    {
        DzQbJT = 0;
        for (; ocmDG1Ifhx > DzQbJT;) {
            {
                if (0) {
                    return 0;
                }
            }
            cin >> MQuTj0[DzQbJT];
            sum += MQuTj0[DzQbJT];
            DzQbJT++;
        }
    }
    sum = sum / ocmDG1Ifhx;
    HlwOx9e58kL = 0;
    {
        DzQbJT = 0;
        for (; ocmDG1Ifhx > DzQbJT;) {
            double  IwgGFTA;
            IwgGFTA = fabs (MQuTj0[DzQbJT] - sum);
            if (HlwOx9e58kL < IwgGFTA) {
                HlwOx9e58kL = IwgGFTA;
            }
            DzQbJT++;
        }
    }
    Tf7rwX = 0;
    {
        DzQbJT = 0;
        for (; DzQbJT < ocmDG1Ifhx;) {
            double  XKFvDt;
            XKFvDt = fabs (MQuTj0[DzQbJT] - sum);
            if (1e-6 > fabs (XKFvDt -HlwOx9e58kL)) {
                if (Tf7rwX != 0) {
                    cout << ",";
                }
                cout << MQuTj0[DzQbJT];
                Tf7rwX = 1;
            }
            DzQbJT++;
        }
    }
    return 0;
}

