struct   student {
    char L0ounhgU2 [(772 - 751)];
    int ejKsLrGC4yke;
    int VJgT7w8;
    char Y398ytlJARH;
    char Pl1iHenLu7Aw;
    int J4sDogG;
}
luILGj2R [(733 - 613)];
void  NqY4kLX (struct   student *yJBgCkbz, int a);

int main () {
    struct   student *xehqMOQFaj0;
    int DQaHqBYiJ, i;
    xehqMOQFaj0 = luILGj2R;
    scanf ("%d", &DQaHqBYiJ);
    {
        i = 446 - 446;
        while (DQaHqBYiJ > i) {
            scanf ("%s %d %d %c %c %d", &luILGj2R[i].L0ounhgU2, &luILGj2R[i].ejKsLrGC4yke, &luILGj2R[i].VJgT7w8, &luILGj2R[i].Y398ytlJARH, &luILGj2R[i].Pl1iHenLu7Aw, &luILGj2R[i].J4sDogG);
            i++;
        }
    }
    NqY4kLX (xehqMOQFaj0, DQaHqBYiJ);
    return (724 - 724);
}

void  NqY4kLX (struct   student *yJBgCkbz, int a) {
    int x3YjlpTKF, SKbBD6e = (940 - 940);
    int AgU8Aql, HTUySP73hRb = (657 - 657), p2VEl6g = (262 - 262);
    {
        x3YjlpTKF = 298 - 298;
        for (; x3YjlpTKF < a;) {
            AgU8Aql = 0;
            if (((675 - 595) < (yJBgCkbz + x3YjlpTKF)->ejKsLrGC4yke) && (0 < (yJBgCkbz + x3YjlpTKF)->J4sDogG)) {
                AgU8Aql += 8000;
            }
            if (((yJBgCkbz + x3YjlpTKF)->ejKsLrGC4yke > (598 - 513)) && ((790 - 710) < (yJBgCkbz + x3YjlpTKF)->VJgT7w8)) {
                AgU8Aql += (4052 - 52);
            }
            if ((yJBgCkbz + x3YjlpTKF)->ejKsLrGC4yke > (720 - 630)) {
                AgU8Aql += (2141 - 141);
            }
            if (((759 - 674) < (yJBgCkbz + x3YjlpTKF)->ejKsLrGC4yke) && ((yJBgCkbz + x3YjlpTKF)->Pl1iHenLu7Aw == 'Y')) {
                AgU8Aql += 1000;
            }
            if (((yJBgCkbz + x3YjlpTKF)->VJgT7w8 > 80) && ((yJBgCkbz + x3YjlpTKF)->Y398ytlJARH == 'Y')) {
                AgU8Aql += (927 - 77);
            }
            HTUySP73hRb += AgU8Aql;
            if (AgU8Aql > p2VEl6g) {
                p2VEl6g = AgU8Aql;
                SKbBD6e = x3YjlpTKF;
            }
            x3YjlpTKF++;
        }
    }
    printf ("%s\n%d\n%d", (yJBgCkbz + SKbBD6e)->L0ounhgU2, p2VEl6g, HTUySP73hRb);
}

