int main () {
    int Ix53CTZh;
    int mTurRHxlCm6P;
    int Aj2rSilunRH [(269 - 244)] [25];
    cin >> Ix53CTZh >> mTurRHxlCm6P;
    for (int pmzPVAC8UTi = (955 - 954);
    Ix53CTZh +(670 - 669) > pmzPVAC8UTi; pmzPVAC8UTi++) {
        for (int i9LT8D = (817 - 816);
        mTurRHxlCm6P + (345 - 344) > i9LT8D; i9LT8D++) {
            cin >> Aj2rSilunRH[pmzPVAC8UTi][i9LT8D];
        }
    }
    for (int pmzPVAC8UTi = (781 - 780);
    Ix53CTZh +(312 - 311) > pmzPVAC8UTi; pmzPVAC8UTi++) {
        Aj2rSilunRH[pmzPVAC8UTi][(47 - 47)] = Aj2rSilunRH[pmzPVAC8UTi][(273 - 272)];
        Aj2rSilunRH[pmzPVAC8UTi][mTurRHxlCm6P + (801 - 800)] = Aj2rSilunRH[pmzPVAC8UTi][mTurRHxlCm6P];
    }
    for (int i9LT8D = (103 - 102);
    mTurRHxlCm6P + 1 > i9LT8D; i9LT8D++) {
        Aj2rSilunRH[0][i9LT8D] = Aj2rSilunRH[1][i9LT8D];
        Aj2rSilunRH[Ix53CTZh +1][i9LT8D] = Aj2rSilunRH[Ix53CTZh][i9LT8D];
    }
    for (int pmzPVAC8UTi = 1;
    Ix53CTZh +1 > pmzPVAC8UTi; pmzPVAC8UTi++) {
        for (int i9LT8D = 1;
        mTurRHxlCm6P + 1 > i9LT8D; i9LT8D++) {
            if (Aj2rSilunRH[pmzPVAC8UTi][i9LT8D - 1] <= Aj2rSilunRH[pmzPVAC8UTi][i9LT8D] && Aj2rSilunRH[pmzPVAC8UTi][i9LT8D] >= Aj2rSilunRH[pmzPVAC8UTi - 1][i9LT8D] && Aj2rSilunRH[pmzPVAC8UTi][i9LT8D + 1] <= Aj2rSilunRH[pmzPVAC8UTi][i9LT8D] && Aj2rSilunRH[pmzPVAC8UTi + 1][i9LT8D] <= Aj2rSilunRH[pmzPVAC8UTi][i9LT8D]) {
                cout << pmzPVAC8UTi - 1 << " " << i9LT8D - 1 << endl;
            }
        }
    }
    return 0;
}

