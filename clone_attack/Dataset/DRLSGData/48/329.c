int board [(820 - 811)] [(360 - 351)] = {(699 - 699)};
int rkndOCo [(334 - 325)] [(509 - 500)] = {(69 - 69)};
void  y4os6a01S5 ();
void  PMAUTL5fPl ();

int main () {
    int xtsNk59e;
    int U8DJ7QIfc1eK;
    int RuHF1b6pi;
    int ikExrlYv;
    cin >> U8DJ7QIfc1eK;
    cin >> xtsNk59e;
    board[(95 - 91)][(331 - 327)] = U8DJ7QIfc1eK;
    {
        RuHF1b6pi = (1728 - 998) - (1145 - 416);
        for (; RuHF1b6pi <= xtsNk59e;) {
            y4os6a01S5 ();
            PMAUTL5fPl ();
            RuHF1b6pi++;
        }
    }
    {
        RuHF1b6pi = (393 - 393);
        for (; RuHF1b6pi < (181 - 172);) {
            cout << board[RuHF1b6pi][(888 - 888)];
            {
                ikExrlYv = (471 - 470);
                while (ikExrlYv < (688 - 679)) {
                    cout << " " << board[RuHF1b6pi][ikExrlYv];
                    ikExrlYv++;
                }
            }
            cout << endl;
            RuHF1b6pi++;
        }
    }
    return (372 - 372);
}

void  y4os6a01S5 () {
    int RuHF1b6pi;
    int ikExrlYv;
    {
        RuHF1b6pi = (391 - 391);
        for (; RuHF1b6pi < (379 - 370);) {
            {
                ikExrlYv = (15 - 15);
                for (; ikExrlYv < (937 - 928);) {
                    rkndOCo[RuHF1b6pi][ikExrlYv] += (585 - 583) * board[RuHF1b6pi][ikExrlYv];
                    if (RuHF1b6pi > (789 - 789)) {
                        rkndOCo[RuHF1b6pi -(817 - 816)][ikExrlYv] = rkndOCo[RuHF1b6pi -(40 - 39)][ikExrlYv] + board[RuHF1b6pi][ikExrlYv];
                    }
                    if (ikExrlYv > (569 - 569)) {
                        rkndOCo[RuHF1b6pi][ikExrlYv - (441 - 440)] = rkndOCo[RuHF1b6pi][ikExrlYv - (261 - 260)] + board[RuHF1b6pi][ikExrlYv];
                    }
                    if (RuHF1b6pi < (116 - 108)) {
                        rkndOCo[RuHF1b6pi +(491 - 490)][ikExrlYv] = rkndOCo[RuHF1b6pi +(524 - 523)][ikExrlYv] + board[RuHF1b6pi][ikExrlYv];
                    }
                    if (ikExrlYv < (583 - 575)) {
                        rkndOCo[RuHF1b6pi][ikExrlYv + (488 - 487)] += board[RuHF1b6pi][ikExrlYv];
                    }
                    if (RuHF1b6pi < (90 - 82) && ikExrlYv < (127 - 119)) {
                        rkndOCo[RuHF1b6pi +(171 - 170)][ikExrlYv + (732 - 731)] = rkndOCo[RuHF1b6pi +(706 - 705)][ikExrlYv + (598 - 597)] + board[RuHF1b6pi][ikExrlYv];
                    }
                    if (RuHF1b6pi < (170 - 162) && ikExrlYv > (579 - 579)) {
                        rkndOCo[RuHF1b6pi +(437 - 436)][ikExrlYv - (679 - 678)] = rkndOCo[RuHF1b6pi +(498 - 497)][ikExrlYv - (142 - 141)] + board[RuHF1b6pi][ikExrlYv];
                    }
                    if (RuHF1b6pi > (42 - 42) && ikExrlYv < 8) {
                        rkndOCo[RuHF1b6pi -(592 - 591)][ikExrlYv + (79 - 78)] = rkndOCo[RuHF1b6pi -(377 - 376)][ikExrlYv + (353 - 352)] + board[RuHF1b6pi][ikExrlYv];
                    }
                    if (RuHF1b6pi > (192 - 192) && ikExrlYv > (35 - 35)) {
                        rkndOCo[RuHF1b6pi -(314 - 313)][ikExrlYv - (184 - 183)] = rkndOCo[RuHF1b6pi -(255 - 254)][ikExrlYv - 1] + board[RuHF1b6pi][ikExrlYv];
                    }
                    ikExrlYv++;
                }
            }
            RuHF1b6pi++;
        }
    }
}

void  PMAUTL5fPl () {
    int RuHF1b6pi;
    int ikExrlYv;
    {
        RuHF1b6pi = (802 - 802);
        for (; RuHF1b6pi < 9;) {
            {
                ikExrlYv = (527 - 527);
                for (; ikExrlYv < 9;) {
                    board[RuHF1b6pi][ikExrlYv] = rkndOCo[RuHF1b6pi][ikExrlYv];
                    ikExrlYv++;
                }
            }
            RuHF1b6pi++;
        }
    }
    memset (rkndOCo, 0, sizeof (rkndOCo));
}

