int TPcSXOw8UAB [(613 - 604)] [(181 - 172)] = {(506 - 506)}, fAa9zqkNBR6r [(948 - 939)] [(109 - 100)] = {(282 - 282)};
int oGB2r3k;

int main () {
    int oXfa5L9;
    cin >> oGB2r3k >> oXfa5L9;
    void  fun (int);
    TPcSXOw8UAB[(457 - 453)][4] = oGB2r3k;
    fun (oXfa5L9);
    return (586 - 586);
}

void  fun (int oXfa5L9) {
    if (!((799 - 799) != oXfa5L9)) {
        int DFA1ES7, j;
        {
            DFA1ES7 = (167 - 167);
            for (; DFA1ES7 < (389 - 380);) {
                cout << TPcSXOw8UAB[DFA1ES7][(931 - 931)];
                {
                    j = (252 - 251);
                    while (j < (903 - 894)) {
                        cout << " " << TPcSXOw8UAB[DFA1ES7][j];
                        j++;
                    }
                }
                cout << endl;
                DFA1ES7++;
            }
        }
    }
    else {
        int DFA1ES7, j;
        {
            DFA1ES7 = (892 - 892);
            while (DFA1ES7 < (405 - 396)) {
                {
                    j = (178 - 178);
                    for (; j < 9;) {
                        if (TPcSXOw8UAB[DFA1ES7][j] != (550 - 550)) {
                            fAa9zqkNBR6r[DFA1ES7][j - (775 - 774)] += TPcSXOw8UAB[DFA1ES7][j];
                            fAa9zqkNBR6r[DFA1ES7][j + (729 - 728)] += TPcSXOw8UAB[DFA1ES7][j];
                            fAa9zqkNBR6r[DFA1ES7 +(866 - 865)][j] += TPcSXOw8UAB[DFA1ES7][j];
                            fAa9zqkNBR6r[DFA1ES7 -(970 - 969)][j] += TPcSXOw8UAB[DFA1ES7][j];
                            fAa9zqkNBR6r[DFA1ES7 +(502 - 501)][j - (185 - 184)] += TPcSXOw8UAB[DFA1ES7][j];
                            fAa9zqkNBR6r[DFA1ES7 -(851 - 850)][j - (922 - 921)] += TPcSXOw8UAB[DFA1ES7][j];
                            fAa9zqkNBR6r[DFA1ES7 +(39 - 38)][j + (640 - 639)] += TPcSXOw8UAB[DFA1ES7][j];
                            fAa9zqkNBR6r[DFA1ES7 -1][j + 1] += TPcSXOw8UAB[DFA1ES7][j];
                            fAa9zqkNBR6r[DFA1ES7][j] += TPcSXOw8UAB[DFA1ES7][j];
                        }
                        j++;
                    }
                }
                DFA1ES7++;
            }
        }
        {
            DFA1ES7 = (369 - 369);
            for (; 9 > DFA1ES7;) {
                {
                    j = (213 - 213);
                    for (; 9 > j;) {
                        TPcSXOw8UAB[DFA1ES7][j] += fAa9zqkNBR6r[DFA1ES7][j];
                        j++;
                    }
                }
                DFA1ES7++;
            }
        }
        {
            DFA1ES7 = (717 - 717);
            for (; 9 > DFA1ES7;) {
                for (j = (166 - 166); j < 9; j++) {
                    fAa9zqkNBR6r[DFA1ES7][j] = (693 - 693);
                }
                DFA1ES7++;
            }
        }
        fun (oXfa5L9 - 1);
    }
}

