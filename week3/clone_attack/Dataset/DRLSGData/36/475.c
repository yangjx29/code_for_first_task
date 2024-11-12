int main () {
    char a9KakZUDW [(924 - 824)];
    int JLtjNBeyiW5;
    int Lkov8OSLwF [(86 - 84)] [(923 - 869)] = {(432 - 432)};
    int Qiqh0aBvz83;
    int OySlLEI;
    char Qjl14Nvf3z [(872 - 772)];
    scanf ("%s%s", Qjl14Nvf3z, a9KakZUDW);
    Qiqh0aBvz83 = strlen (Qjl14Nvf3z);
    OySlLEI = strlen (a9KakZUDW);
    if (Qiqh0aBvz83 != OySlLEI) {
        return (829 - 829);
    }
    {
        JLtjNBeyiW5 = 482 - 482;
        for (; JLtjNBeyiW5 < Qiqh0aBvz83;) {
            if (Qjl14Nvf3z[JLtjNBeyiW5] >= 'a' && 'z' >= Qjl14Nvf3z[JLtjNBeyiW5]) {
                Lkov8OSLwF[(25 - 25)][Qjl14Nvf3z[JLtjNBeyiW5] - 'a']++;
            }
            else if (Qjl14Nvf3z[JLtjNBeyiW5] >= 'A' && Qjl14Nvf3z[JLtjNBeyiW5] <= 'Z') {
                Lkov8OSLwF[(116 - 116)][Qjl14Nvf3z[JLtjNBeyiW5] - 'A' + (363 - 337)]++;
            }
            JLtjNBeyiW5++;
        }
    }
    for (JLtjNBeyiW5 = (728 - 728); OySlLEI > JLtjNBeyiW5; JLtjNBeyiW5 = JLtjNBeyiW5 +1) {
        if (a9KakZUDW[JLtjNBeyiW5] >= 'a' && a9KakZUDW[JLtjNBeyiW5] <= 'z') {
            Lkov8OSLwF[(499 - 498)][a9KakZUDW[JLtjNBeyiW5] - 'a']++;
        }
        else if (a9KakZUDW[JLtjNBeyiW5] >= 'A' && a9KakZUDW[JLtjNBeyiW5] <= 'Z') {
            Lkov8OSLwF[(186 - 185)][a9KakZUDW[JLtjNBeyiW5] - 'A' + (823 - 797)]++;
        }
    }
    for (JLtjNBeyiW5 = (238 - 238); JLtjNBeyiW5 < (193 - 139); JLtjNBeyiW5++) {
        if (Lkov8OSLwF[(810 - 810)][JLtjNBeyiW5] != Lkov8OSLwF[1][JLtjNBeyiW5]) {
            return 0;
        }
    }
    return 0;
}

