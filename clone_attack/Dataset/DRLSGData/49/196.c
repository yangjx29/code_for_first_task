int main () {
    char PPvOgo [(1497 - 996)];
    char uUilMeP [(777 - 276)];
    int tBiI1cQP;
    int kVudI9RP;
    tBiI1cQP = (52 - 51);
    cin.getline (PPvOgo, (1120 - 620), '\n');
    kVudI9RP = strlen (PPvOgo);
    {
        int G8LPNu27 = (295 - 293);
        while (kVudI9RP >= G8LPNu27) {
            {
                int ezZu0KW2wYN = (485 - 485);
                while (kVudI9RP - G8LPNu27 >= ezZu0KW2wYN) {
                    memset (uUilMeP, (523 - 523), sizeof (uUilMeP));
                    for (int fVhymb6FB8Q = ezZu0KW2wYN;
                    fVhymb6FB8Q - ezZu0KW2wYN < G8LPNu27; fVhymb6FB8Q++)
                        uUilMeP[fVhymb6FB8Q - ezZu0KW2wYN] = PPvOgo[fVhymb6FB8Q];
                    tBiI1cQP = (333 - 332);
                    {
                        int fVhymb6FB8Q = (954 - 954);
                        while (G8LPNu27 / 2 > fVhymb6FB8Q) {
                            if (uUilMeP[fVhymb6FB8Q] != uUilMeP[G8LPNu27 -fVhymb6FB8Q - 1]) {
                                tBiI1cQP = (713 - 713);
                                break;
                            }
                            fVhymb6FB8Q++;
                        }
                    }
                    ezZu0KW2wYN++;
                    if (tBiI1cQP == 1)
                        cout << uUilMeP << endl;
                }
            }
            G8LPNu27++;
        }
    }
    return 0;
}

