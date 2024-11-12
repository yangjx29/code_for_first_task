int main () {
    double  AtDeB37aZId [(551 - 538)], qinyQuTp [(544 - 531)], rtI0SLnQR [(234 - 221)], S [80], iTbeABj8p;
    int OztTb1fJYkL;
    int G7FBIi6qza;
    int j4TkyWSA2;
    int ovZUPVIos9;
    int a [(773 - 693)];
    int YgLCNSt3 [(918 - 838)];
    int vFB9IHJ1K;
    int E6TfAjGPX;
    int dIeyf5D2RB;
    OztTb1fJYkL = (153 - 153);
    cin >> G7FBIi6qza;
    for (j4TkyWSA2 = (133 - 133); G7FBIi6qza > j4TkyWSA2; j4TkyWSA2++)
        cin >> AtDeB37aZId[j4TkyWSA2] >> qinyQuTp[j4TkyWSA2] >> rtI0SLnQR[j4TkyWSA2];
    for (j4TkyWSA2 = 0; j4TkyWSA2 < G7FBIi6qza -(607 - 606); j4TkyWSA2++)
        for (ovZUPVIos9 = j4TkyWSA2 + (442 - 441); ovZUPVIos9 < G7FBIi6qza; ovZUPVIos9++) {
            S[OztTb1fJYkL] = sqrt ((AtDeB37aZId[j4TkyWSA2] - AtDeB37aZId[ovZUPVIos9]) * (AtDeB37aZId[j4TkyWSA2] - AtDeB37aZId[ovZUPVIos9]) + (qinyQuTp[j4TkyWSA2] - qinyQuTp[ovZUPVIos9]) * (qinyQuTp[j4TkyWSA2] - qinyQuTp[ovZUPVIos9]) + (rtI0SLnQR[j4TkyWSA2] - rtI0SLnQR[ovZUPVIos9]) * (rtI0SLnQR[j4TkyWSA2] - rtI0SLnQR[ovZUPVIos9]));
            a[OztTb1fJYkL] = j4TkyWSA2;
            YgLCNSt3[OztTb1fJYkL] = ovZUPVIos9;
            OztTb1fJYkL++;
        }
    for (j4TkyWSA2 = 0; OztTb1fJYkL > j4TkyWSA2; j4TkyWSA2++)
        for (ovZUPVIos9 = OztTb1fJYkL -(941 - 940); ovZUPVIos9 > j4TkyWSA2; ovZUPVIos9--)
            if (S[ovZUPVIos9] > S[ovZUPVIos9 - (445 - 444)]) {
                iTbeABj8p = S[ovZUPVIos9];
                S[ovZUPVIos9] = S[ovZUPVIos9 - (481 - 480)];
                S[ovZUPVIos9 - 1] = iTbeABj8p;
                vFB9IHJ1K = a[ovZUPVIos9];
                a[ovZUPVIos9] = a[ovZUPVIos9 - 1];
                a[ovZUPVIos9 - 1] = vFB9IHJ1K;
                vFB9IHJ1K = YgLCNSt3[ovZUPVIos9];
                YgLCNSt3[ovZUPVIos9] = YgLCNSt3[ovZUPVIos9 - 1];
                YgLCNSt3[ovZUPVIos9 - 1] = vFB9IHJ1K;
            }
    for (j4TkyWSA2 = 0; j4TkyWSA2 < OztTb1fJYkL; j4TkyWSA2++) {
        E6TfAjGPX = a[j4TkyWSA2];
        dIeyf5D2RB = YgLCNSt3[j4TkyWSA2];
        cout << "(" << (int) AtDeB37aZId[E6TfAjGPX] << "," << (int) qinyQuTp[E6TfAjGPX] << "," << (int) rtI0SLnQR[E6TfAjGPX] << ")-(" << (int) AtDeB37aZId[dIeyf5D2RB] << "," << (int) qinyQuTp[dIeyf5D2RB] << "," << (int) rtI0SLnQR[dIeyf5D2RB] << ")=";
        cout << fixed << setprecision (2);
        cout << S[j4TkyWSA2] << endl;
    }
    return 0;
}

