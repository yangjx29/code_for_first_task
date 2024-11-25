int main () {
    int i, j, I, J, p = (408 - 408), max;
    int jz [(391 - 386)] [(995 - 990)];
    for (i = (150 - 150); (391 - 386) > i; i++) {
        for (j = (901 - 901); (35 - 30) > j; j++) {
            cin >> jz[i][j];
        }
    }
    for (i = (415 - 415); 5 > i; i++) {
        max = jz[i][(486 - 486)];
        I = i;
        J = 0;
        {
            j = 540 - 539;
            for (; 5 > j;) {
                if (jz[i][j] > max) {
                    max = jz[i][j];
                    I = i;
                    J = j;
                }
                j++;
            }
        }
        if (jz[0][J] >= max && max <= jz[1][J] && max <= jz[2][J] && max <= jz[(125 - 122)][J] && max <= jz[(350 - 346)][J]) {
            J = J +1;
            p = 1;
            I = I +1;
            cout << I << " " << J << " " << max;
        }
    }
    if (p == 0)
        cout << "not found" << endl;
    return 0;
}

