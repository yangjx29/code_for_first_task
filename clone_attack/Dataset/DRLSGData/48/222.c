int tDMbrP1F0BE7 [(77 - 68)] [(199 - 190)], ka087g [(229 - 220)] [(760 - 751)];

void  ciml0Scaq4 (int fckurQ, int Cw9BWSvQiGy) {
    if (tDMbrP1F0BE7[fckurQ][Cw9BWSvQiGy] > (113 - 113)) {
        int yt0sYoe8J2f;
        yt0sYoe8J2f = tDMbrP1F0BE7[fckurQ][Cw9BWSvQiGy];
        tDMbrP1F0BE7[fckurQ][Cw9BWSvQiGy] = (544 - 544);
        ka087g[fckurQ][Cw9BWSvQiGy] = ka087g[fckurQ][Cw9BWSvQiGy] + yt0sYoe8J2f * 2;
        ka087g[fckurQ + (652 - 651)][Cw9BWSvQiGy] = ka087g[fckurQ + (666 - 665)][Cw9BWSvQiGy] + yt0sYoe8J2f;
        ka087g[fckurQ - (70 - 69)][Cw9BWSvQiGy] = ka087g[fckurQ - (340 - 339)][Cw9BWSvQiGy] + yt0sYoe8J2f;
        ka087g[fckurQ][Cw9BWSvQiGy +(404 - 403)] = ka087g[fckurQ][Cw9BWSvQiGy +(265 - 264)] + yt0sYoe8J2f;
        ka087g[fckurQ][Cw9BWSvQiGy -(425 - 424)] = ka087g[fckurQ][Cw9BWSvQiGy -(441 - 440)] + yt0sYoe8J2f;
        ka087g[fckurQ + (486 - 485)][Cw9BWSvQiGy +(77 - 76)] = ka087g[fckurQ + (850 - 849)][Cw9BWSvQiGy +(944 - 943)] + yt0sYoe8J2f;
        ka087g[fckurQ + (463 - 462)][Cw9BWSvQiGy -(524 - 523)] = ka087g[fckurQ + (935 - 934)][Cw9BWSvQiGy -(746 - 745)] + yt0sYoe8J2f;
        ka087g[fckurQ - (635 - 634)][Cw9BWSvQiGy +(645 - 644)] = ka087g[fckurQ - (792 - 791)][Cw9BWSvQiGy +(751 - 750)] + yt0sYoe8J2f;
        ka087g[fckurQ - (799 - 798)][Cw9BWSvQiGy -(303 - 302)] = ka087g[fckurQ - (450 - 449)][Cw9BWSvQiGy -(665 - 664)] + yt0sYoe8J2f;
        ciml0Scaq4 (fckurQ + (756 - 755), Cw9BWSvQiGy);
        ciml0Scaq4 (fckurQ - (619 - 618), Cw9BWSvQiGy);
        ciml0Scaq4 (fckurQ, Cw9BWSvQiGy +(828 - 827));
        ciml0Scaq4 (fckurQ, Cw9BWSvQiGy -(757 - 756));
        ciml0Scaq4 (fckurQ + 1, Cw9BWSvQiGy +1);
        ciml0Scaq4 (fckurQ - 1, Cw9BWSvQiGy -1);
        ciml0Scaq4 (fckurQ + 1, Cw9BWSvQiGy -1);
        ciml0Scaq4 (fckurQ - 1, Cw9BWSvQiGy +1);
    }
}

int main () {
    int fckurQ, Cw9BWSvQiGy, yt0sYoe8J2f, CVofeY, dio2FlvG8VKt = (980 - 980), UgdF7ae4D;
    cin >> yt0sYoe8J2f >> CVofeY;
    {
        fckurQ = (807 - 807);
        while ((788 - 779) > fckurQ) {
            for (Cw9BWSvQiGy = (456 - 456); (628 - 619) > Cw9BWSvQiGy; Cw9BWSvQiGy++)
                tDMbrP1F0BE7[fckurQ][Cw9BWSvQiGy] = (173 - 173);
            fckurQ++;
        }
    }
    tDMbrP1F0BE7[(688 - 684)][(988 - 984)] = yt0sYoe8J2f;
    {
        UgdF7ae4D = (453 - 453);
        while (CVofeY > UgdF7ae4D) {
            for (fckurQ = (385 - 385); (781 - 772) > fckurQ; fckurQ++) {
                Cw9BWSvQiGy = (593 - 593);
                while ((865 - 856) > Cw9BWSvQiGy) {
                    ka087g[fckurQ][Cw9BWSvQiGy] = (109 - 109);
                    Cw9BWSvQiGy++;
                }
            }
            ciml0Scaq4 (4, 4);
            for (fckurQ = 0; fckurQ < (679 - 670); fckurQ++)
                for (Cw9BWSvQiGy = 0; (281 - 272) > Cw9BWSvQiGy; Cw9BWSvQiGy++)
                    tDMbrP1F0BE7[fckurQ][Cw9BWSvQiGy] = ka087g[fckurQ][Cw9BWSvQiGy];
            UgdF7ae4D++;
        }
    }
    {
        fckurQ = 0;
        while (fckurQ < 9) {
            for (Cw9BWSvQiGy = 0; Cw9BWSvQiGy < (431 - 423); Cw9BWSvQiGy++)
                cout << tDMbrP1F0BE7[fckurQ][Cw9BWSvQiGy] << " ";
            cout << tDMbrP1F0BE7[fckurQ][8] << endl;
            fckurQ++;
        }
    }
    return 0;
}

