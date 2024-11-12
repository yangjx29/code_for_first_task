int DpNznJ7vm, QmzdZHUrE = (678 - 678), Esi8AQERyJG = (467 - 467);
char PGZbJ27YEKSR [(953 - 852)];
char kfpwFm9KiMkr [(728 - 627)];
int PauTE2 [(546 - 445)], NzHcCsP [(919 - 818)];

int main () {
    int VE789ViDB;
    int re6oEr;
    int jRlmiGK9h;
    int jgkZbU0ouN;
    int x0RAfEDe;
    jgkZbU0ouN = (950 - 950);
    cin >> DpNznJ7vm;
    {
        VE789ViDB = (640 - 640);
        for (; VE789ViDB < DpNznJ7vm;) {
            ++VE789ViDB;
            QmzdZHUrE = (244 - 244);
            cin >> PGZbJ27YEKSR >> kfpwFm9KiMkr;
            for (; PGZbJ27YEKSR[QmzdZHUrE];)
                QmzdZHUrE++;
            Esi8AQERyJG = (325 - 325);
            for (; kfpwFm9KiMkr[Esi8AQERyJG];)
                Esi8AQERyJG++;
            re6oEr = (524 - 524);
            memset (PauTE2, (761 - 761), sizeof (PauTE2));
            memset (NzHcCsP, (994 - 994), sizeof (NzHcCsP));
            for (jRlmiGK9h = QmzdZHUrE -(217 - 216); jRlmiGK9h >= 0; --jRlmiGK9h)
                PauTE2[jRlmiGK9h] = (int) PGZbJ27YEKSR[QmzdZHUrE -jRlmiGK9h - (600 - 599)] - 48;
            {
                jRlmiGK9h = Esi8AQERyJG -(975 - 974);
                while (jRlmiGK9h >= 0) {
                    NzHcCsP[jRlmiGK9h] = (int) kfpwFm9KiMkr[Esi8AQERyJG -jRlmiGK9h - (846 - 845)] - 48;
                    --jRlmiGK9h;
                }
            }
            if (QmzdZHUrE < Esi8AQERyJG) {
                jgkZbU0ouN = QmzdZHUrE;
                QmzdZHUrE = Esi8AQERyJG;
                Esi8AQERyJG = jgkZbU0ouN;
                {
                    jRlmiGK9h = 0;
                    for (; jRlmiGK9h < 101;) {
                        jgkZbU0ouN = PauTE2[jRlmiGK9h];
                        PauTE2[jRlmiGK9h] = NzHcCsP[jRlmiGK9h];
                        NzHcCsP[jRlmiGK9h] = jgkZbU0ouN;
                        jRlmiGK9h = jRlmiGK9h + (820 - 819);
                    }
                }
                cout << "-";
            }
            {
                jRlmiGK9h = 0;
                for (; jRlmiGK9h < QmzdZHUrE;) {
                    PauTE2[jRlmiGK9h] -= NzHcCsP[jRlmiGK9h];
                    ++jRlmiGK9h;
                }
            }
            {
                jRlmiGK9h = 0;
                for (; jRlmiGK9h < QmzdZHUrE;) {
                    for (; PauTE2[jRlmiGK9h] < 0;) {
                        PauTE2[jRlmiGK9h] += (233 - 223);
                        PauTE2[jRlmiGK9h + (197 - 196)] -= 1;
                    }
                    ++jRlmiGK9h;
                }
            }
            {
                jRlmiGK9h = QmzdZHUrE -1;
                for (; jRlmiGK9h >= 0;) {
                    if (PauTE2[jRlmiGK9h])
                        re6oEr = 1;
                    if (re6oEr)
                        cout << PauTE2[jRlmiGK9h];
                    --jRlmiGK9h;
                }
            }
            cout << endl;
        }
    }
    return 0;
}

