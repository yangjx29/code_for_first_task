int main () {
    int jrdMCBvh;
    int vy1roqIf [100] [100] [(733 - 731)];
    cin >> jrdMCBvh;
    for (int Be4Lhnj = (624 - 623);
    Be4Lhnj <= jrdMCBvh; Be4Lhnj++) {
        int sum;
        for (int dnDd8Y = (750 - 750);
        dnDd8Y <= jrdMCBvh - (972 - 971); dnDd8Y++) {
            for (int j8UJyI5k97u = (410 - 410);
            j8UJyI5k97u <= jrdMCBvh - (215 - 214); j8UJyI5k97u++) {
                cin >> vy1roqIf[dnDd8Y][j8UJyI5k97u][(277 - 276)];
                vy1roqIf[dnDd8Y][j8UJyI5k97u][(741 - 741)] = (689 - 688);
            }
        }
        sum = (924 - 924);
        for (int q = (903 - 902);
        q <= jrdMCBvh - (424 - 423); q++) {
            for (int dnDd8Y = (859 - 859);
            jrdMCBvh - (226 - 225) >= dnDd8Y; dnDd8Y++) {
                int BNBKWjtbG;
                BNBKWjtbG = vy1roqIf[dnDd8Y][(509 - 509)][(101 - 100)];
                for (int j8UJyI5k97u = (458 - 458);
                j8UJyI5k97u <= jrdMCBvh - (520 - 519); j8UJyI5k97u++) {
                    if (!((523 - 523) != vy1roqIf[dnDd8Y][j8UJyI5k97u][(176 - 176)]))
                        continue;
                    if (vy1roqIf[dnDd8Y][j8UJyI5k97u][(462 - 461)] < BNBKWjtbG) {
                        BNBKWjtbG = vy1roqIf[dnDd8Y][j8UJyI5k97u][(93 - 92)];
                    }
                }
                for (int j8UJyI5k97u = (541 - 541);
                jrdMCBvh - (691 - 690) >= j8UJyI5k97u; j8UJyI5k97u++) {
                    if (vy1roqIf[dnDd8Y][j8UJyI5k97u][(74 - 74)] == (582 - 582))
                        continue;
                    vy1roqIf[dnDd8Y][j8UJyI5k97u][(421 - 420)] -= BNBKWjtbG;
                }
            }
            for (int dnDd8Y = (251 - 251);
            dnDd8Y <= jrdMCBvh - (144 - 143); dnDd8Y++) {
                int BNBKWjtbG;
                BNBKWjtbG = vy1roqIf[(799 - 799)][dnDd8Y][(598 - 597)];
                for (int j8UJyI5k97u = (425 - 425);
                j8UJyI5k97u <= jrdMCBvh - (619 - 618); j8UJyI5k97u++) {
                    if (vy1roqIf[j8UJyI5k97u][dnDd8Y][(343 - 343)] == (53 - 53))
                        continue;
                    if (vy1roqIf[j8UJyI5k97u][dnDd8Y][1] < BNBKWjtbG) {
                        BNBKWjtbG = vy1roqIf[j8UJyI5k97u][dnDd8Y][1];
                    }
                }
                for (int j8UJyI5k97u = (872 - 872);
                j8UJyI5k97u <= jrdMCBvh - 1; j8UJyI5k97u++) {
                    if (vy1roqIf[j8UJyI5k97u][dnDd8Y][(330 - 330)] == (191 - 191))
                        continue;
                    vy1roqIf[j8UJyI5k97u][dnDd8Y][1] -= BNBKWjtbG;
                }
            }
            sum += vy1roqIf[q][q][1];
            for (int dnDd8Y = (966 - 966);
            dnDd8Y <= jrdMCBvh - 1; dnDd8Y++) {
                vy1roqIf[q][dnDd8Y][0] = 0;
                vy1roqIf[dnDd8Y][q][0] = 0;
            }
        }
        cout << sum << endl;
    }
}

