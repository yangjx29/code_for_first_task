int main () {
    int TOyNShZCKXv0;
    int KqkGlFigTD;
    const  int lz1673ynlrw [4] = {1, 0, -1, 0};
    const  int BifqA1keMVI9 [4] = {0, 1, 0, -1};
    int PIEX9fGuLj;
    int SIoQ6g;
    int rVhPXRUA [101] [101];
    int uPwEhgy [101] [101];
    int FesJpy0B8I3;
    FesJpy0B8I3 = 0;
    KqkGlFigTD = 1;
    cin >> PIEX9fGuLj >> SIoQ6g;
    for (int rbdLvxHj8 = 1;
    PIEX9fGuLj >= rbdLvxHj8; rbdLvxHj8++) {
        int TW9Rs7Jfc8S = 1;
        while (SIoQ6g >= TW9Rs7Jfc8S) {
            cin >> rVhPXRUA[rbdLvxHj8][TW9Rs7Jfc8S];
            TW9Rs7Jfc8S++;
        }
    }
    {
        int rbdLvxHj8 = 0;
        while (PIEX9fGuLj +1 >= rbdLvxHj8) {
            int TW9Rs7Jfc8S;
            TW9Rs7Jfc8S = 0;
            while (TW9Rs7Jfc8S <= SIoQ6g +1) {
                uPwEhgy[rbdLvxHj8][TW9Rs7Jfc8S] = 1;
                TW9Rs7Jfc8S++;
            }
            rbdLvxHj8++;
        }
    }
    {
        int rbdLvxHj8 = 1;
        while (rbdLvxHj8 <= PIEX9fGuLj) {
            {
                int TW9Rs7Jfc8S = 1;
                while (TW9Rs7Jfc8S <= SIoQ6g) {
                    uPwEhgy[rbdLvxHj8][TW9Rs7Jfc8S] = 0;
                    TW9Rs7Jfc8S++;
                }
            }
            rbdLvxHj8++;
        }
    }
    TOyNShZCKXv0 = 1;
    {
        int rbdLvxHj8 = 1;
        while (rbdLvxHj8 <= PIEX9fGuLj *SIoQ6g) {
            cout << rVhPXRUA[KqkGlFigTD][TOyNShZCKXv0] << endl;
            uPwEhgy[KqkGlFigTD][TOyNShZCKXv0] = 1;
            if (uPwEhgy[KqkGlFigTD +BifqA1keMVI9[FesJpy0B8I3]][TOyNShZCKXv0 +lz1673ynlrw[FesJpy0B8I3]] == 0) {
                KqkGlFigTD += BifqA1keMVI9[FesJpy0B8I3];
                TOyNShZCKXv0 = TOyNShZCKXv0 +lz1673ynlrw[FesJpy0B8I3];
            }
            else {
                FesJpy0B8I3++;
                if (FesJpy0B8I3 == 4)
                    FesJpy0B8I3 = 0;
                KqkGlFigTD += BifqA1keMVI9[FesJpy0B8I3];
                TOyNShZCKXv0 = TOyNShZCKXv0 +lz1673ynlrw[FesJpy0B8I3];
            }
            rbdLvxHj8++;
        }
    }
    return 0;
}

