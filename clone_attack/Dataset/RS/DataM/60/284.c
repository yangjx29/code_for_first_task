int HYnZr59t (int oW2U5F9lC, int CRhsYuM2) {
    int QY7DG3aFznb, fEHzt3 = (872 - 871);
    for (QY7DG3aFznb = 2; QY7DG3aFznb <= sqrt (oW2U5F9lC); QY7DG3aFznb = QY7DG3aFznb +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (oW2U5F9lC % QY7DG3aFznb == 0) {
            fEHzt3 = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            break;
        };
    }
    {
        QY7DG3aFznb = 2;
        while (QY7DG3aFznb <= sqrt (CRhsYuM2)) {
            if (CRhsYuM2 % QY7DG3aFznb == 0) {
                fEHzt3 = 0;
                break;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            QY7DG3aFznb++;
        };
    }
    return fEHzt3;
}

int main () {
    int UXhc50 = 0, aSVBok8e, QY7DG3aFznb;
    scanf ("%d", &aSVBok8e);
    for (QY7DG3aFznb = 1; QY7DG3aFznb <= aSVBok8e - 2;) {
        if (QY7DG3aFznb == 1) {
            QY7DG3aFznb = QY7DG3aFznb +2;
            continue;
        }
        if (HYnZr59t (QY7DG3aFznb, QY7DG3aFznb +2) == 1) {
            UXhc50++;
            printf ("%d %d\n", QY7DG3aFznb, QY7DG3aFznb +2);
        }
        QY7DG3aFznb = QY7DG3aFznb +2;
    }
    if (UXhc50 == 0)
        printf ("empty\n");
    return 0;
}

