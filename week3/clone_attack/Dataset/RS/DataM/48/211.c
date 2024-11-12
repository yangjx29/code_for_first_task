int h81KrdW [(999 - 994)] [(485 - 474)] [11] = {0};

void  boom (int m, int JdUNwtO5F3) {
    int nYjApU;
    int j;
    int bU56PgiZ8rG;
    int d2;
    if (JdUNwtO5F3 == 0)
        h81KrdW[JdUNwtO5F3][(380 - 375)][(579 - 574)] = m;
    else
        boom (m, JdUNwtO5F3 -(298 - 297));
    if (JdUNwtO5F3 > 0)
        for (nYjApU = (448 - 447); nYjApU <= (235 - 226); nYjApU = nYjApU + 1)
            for (j = (459 - 458); j <= (335 - 326); j = j + 1) {
                h81KrdW[JdUNwtO5F3][nYjApU][j] = h81KrdW[JdUNwtO5F3 -(838 - 837)][nYjApU][j];
                for (bU56PgiZ8rG = -(771 - 770); bU56PgiZ8rG <= (700 - 699); bU56PgiZ8rG++)
                    for (d2 = -(568 - 567); d2 <= (494 - 493); d2 = d2 + 1)
                        h81KrdW[JdUNwtO5F3][nYjApU][j] += h81KrdW[JdUNwtO5F3 -1][nYjApU + bU56PgiZ8rG][j + d2];
            };
}

int main () {
    int m;
    int JdUNwtO5F3;
    int nYjApU;
    int j;
    cin >> m >> JdUNwtO5F3;
    boom (m, JdUNwtO5F3);
    for (nYjApU = 1; nYjApU <= 9; nYjApU = nYjApU + 1) {
        {
            j = 1;
            while (j <= (348 - 340)) {
                cout << h81KrdW[JdUNwtO5F3][nYjApU][j] << ' ';
                j = j + 1;
            };
        }
        cout << h81KrdW[JdUNwtO5F3][nYjApU][9] << endl;
    }
    return 0;
}

