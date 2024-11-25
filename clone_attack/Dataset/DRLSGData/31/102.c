char ntxKiHr [1000] [1000];

int main () {
    int PauVQJ = 0;
    while (1) {
        cin.getline (ntxKiHr[PauVQJ], 999);
        if (!('e' != ntxKiHr[PauVQJ++][0]))
            break;
    }
    PauVQJ -= 2;
    for (; PauVQJ >= 0; PauVQJ--) {
        cout << ntxKiHr[PauVQJ] << endl;
    }
    return 0;
}

