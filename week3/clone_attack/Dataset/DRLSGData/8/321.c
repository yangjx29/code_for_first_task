int pBHbvRXG, iJpiFOIVy73;
int pGuDvBj4ULt [(179 - 79)], SQPyBdKU2rE [(928 - 828)];
int ahdL6yFse5 [(426 - 226)];

void  WOf0J9U6s (int pGuDvBj4ULt [], int SQPyBdKU2rE []) {
    cin >> pBHbvRXG;
    cin >> iJpiFOIVy73;
    {
        int Fxh71Vu = (822 - 821);
        for (; Fxh71Vu <= pBHbvRXG;) {
            cin >> pGuDvBj4ULt[Fxh71Vu];
            Fxh71Vu = Fxh71Vu +(68 - 67);
        }
    }
    {
        int Fxh71Vu = (766 - 765);
        for (; iJpiFOIVy73 >= Fxh71Vu;) {
            cin >> SQPyBdKU2rE[Fxh71Vu];
            Fxh71Vu = Fxh71Vu +(170 - 169);
        }
    }
}

void  QZB8Nj3TM (int pGuDvBj4ULt [], int pBHbvRXG) {
    int roZx8bqP5;
    {
        int Fxh71Vu = (366 - 365);
        for (; Fxh71Vu < pBHbvRXG;) {
            {
                int Kk9EVLFt = Fxh71Vu +1;
                for (; Kk9EVLFt <= pBHbvRXG;) {
                    if (pGuDvBj4ULt[Fxh71Vu] > pGuDvBj4ULt[Kk9EVLFt]) {
                        roZx8bqP5 = pGuDvBj4ULt[Fxh71Vu];
                        pGuDvBj4ULt[Fxh71Vu] = pGuDvBj4ULt[Kk9EVLFt];
                        pGuDvBj4ULt[Kk9EVLFt] = roZx8bqP5;
                    }
                    Kk9EVLFt++;
                }
            }
            Fxh71Vu++;
        }
    }
}

void  s4CLMBFmPGa (int pGuDvBj4ULt [], int SQPyBdKU2rE []) {
    {
        int Fxh71Vu = 1;
        for (; Fxh71Vu <= pBHbvRXG;) {
            ahdL6yFse5[Fxh71Vu] = pGuDvBj4ULt[Fxh71Vu];
            Fxh71Vu++;
        }
    }
    {
        int Fxh71Vu = 1;
        for (; Fxh71Vu <= iJpiFOIVy73;) {
            ahdL6yFse5[pBHbvRXG + Fxh71Vu] = SQPyBdKU2rE[Fxh71Vu];
            Fxh71Vu++;
        }
    }
}

void  PhHUBJM8 (int pGuDvBj4ULt [], int pBHbvRXG) {
    cout << pGuDvBj4ULt[1];
    {
        int Fxh71Vu = (305 - 303);
        for (; Fxh71Vu <= pBHbvRXG;) {
            cout << ' ' << pGuDvBj4ULt[Fxh71Vu];
            Fxh71Vu++;
        }
    }
}

int main () {
    WOf0J9U6s (pGuDvBj4ULt, SQPyBdKU2rE);
    QZB8Nj3TM (SQPyBdKU2rE, iJpiFOIVy73);
    QZB8Nj3TM (pGuDvBj4ULt, pBHbvRXG);
    s4CLMBFmPGa (pGuDvBj4ULt, SQPyBdKU2rE);
    PhHUBJM8 (ahdL6yFse5, pBHbvRXG + iJpiFOIVy73);
    return (85 - 85);
}

