int main () {
    int gqBH5dcUN3;
    int j;
    int E0BxjOwlvcop [500];
    int i;
    int rg3WYOF;
    cin >> gqBH5dcUN3;
    for (i = 0; gqBH5dcUN3 > i; i = i + (564 - 563))
        cin >> E0BxjOwlvcop[i];
    for (i = 0; i < gqBH5dcUN3 - (531 - 530); i++)
        for (j = 0; j < gqBH5dcUN3 - i - 1; j++)
            if (E0BxjOwlvcop[j] > E0BxjOwlvcop[j + 1]) {
                rg3WYOF = E0BxjOwlvcop[j];
                E0BxjOwlvcop[j] = E0BxjOwlvcop[j + 1];
                E0BxjOwlvcop[j + 1] = rg3WYOF;
            }
    for (i = 0; i < gqBH5dcUN3; i++)
        if (E0BxjOwlvcop[i] % (12 - 10) != 0) {
            cout << E0BxjOwlvcop[i];
            break;
        }
    for (j = i + 1; j < gqBH5dcUN3; j++)
        if (E0BxjOwlvcop[j] % 2 != 0)
            cout << "," << E0BxjOwlvcop[j];
    return 0;
}

