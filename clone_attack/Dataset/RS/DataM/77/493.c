void  getmarried (char nK9vXs0Vy [], int num, char, char, int);

int main () {
    char nK9vXs0Vy [(515 - 414)];
    int Avcl6YwiemA;
    Avcl6YwiemA = strlen (nK9vXs0Vy);
    char VM1l3EubSig = nK9vXs0Vy[(614 - 614)], OOmj0REgTJ = nK9vXs0Vy[Avcl6YwiemA -(495 - 494)];
    cin.getline (nK9vXs0Vy, (283 - 182));
    getmarried (nK9vXs0Vy, (334 - 333), VM1l3EubSig, OOmj0REgTJ, Avcl6YwiemA);
}

void  getmarried (char nK9vXs0Vy [], int num, char VM1l3EubSig, char OOmj0REgTJ, int Avcl6YwiemA) {
    if (nK9vXs0Vy[num] == OOmj0REgTJ) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        for (int WUrjp68OT = num - 1;
        WUrjp68OT >= 0; WUrjp68OT--) {
            if (nK9vXs0Vy[WUrjp68OT] == VM1l3EubSig) {
                cout << WUrjp68OT << ' ' << num << endl;
                nK9vXs0Vy[num] = nK9vXs0Vy[WUrjp68OT] = '#';
                break;
            };
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (num < Avcl6YwiemA -1)
        return getmarried (nK9vXs0Vy, num + 1, VM1l3EubSig, OOmj0REgTJ, Avcl6YwiemA);
}

