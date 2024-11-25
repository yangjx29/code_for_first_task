int main () {
    int P6feNsOAoYi [(240 - 229)] [(115 - 104)];
    int coFjPpEAkeDV [(531 - 520)] [(988 - 977)];
    int sTvUwA;
    int FmpbVsBcKPf;
    int k6qxFKr4l;
    int FuPwMYj;
    cin >> k6qxFKr4l >> FmpbVsBcKPf;
    for (FuPwMYj = (315 - 315); FuPwMYj < (638 - 627); FuPwMYj = FuPwMYj +(301 - 300))
        for (sTvUwA = (358 - 358); sTvUwA < (292 - 281); sTvUwA = sTvUwA + (977 - 976)) {
            coFjPpEAkeDV[FuPwMYj][sTvUwA] = (146 - 146);
            P6feNsOAoYi[FuPwMYj][sTvUwA] = (271 - 271);
            if (FuPwMYj == (397 - 392) && sTvUwA == (22 - 17)) {
                coFjPpEAkeDV[FuPwMYj][sTvUwA] = k6qxFKr4l;
            }
        }
    for (; FmpbVsBcKPf = FmpbVsBcKPf -(912 - 911);) {
        for (FuPwMYj = (440 - 439); FuPwMYj <= (147 - 138); FuPwMYj = FuPwMYj +(449 - 448))
            for (sTvUwA = (539 - 538); sTvUwA <= (317 - 308); sTvUwA = sTvUwA + (648 - 647)) {
                if (coFjPpEAkeDV[FuPwMYj][sTvUwA] != (439 - 439)) {
                    P6feNsOAoYi[FuPwMYj -(777 - 776)][sTvUwA - (120 - 119)] += coFjPpEAkeDV[FuPwMYj][sTvUwA];
                    P6feNsOAoYi[FuPwMYj][sTvUwA - (933 - 932)] += coFjPpEAkeDV[FuPwMYj][sTvUwA];
                    P6feNsOAoYi[FuPwMYj +(648 - 647)][sTvUwA - (516 - 515)] += coFjPpEAkeDV[FuPwMYj][sTvUwA];
                    P6feNsOAoYi[FuPwMYj -(256 - 255)][sTvUwA] += coFjPpEAkeDV[FuPwMYj][sTvUwA];
                    P6feNsOAoYi[FuPwMYj +(584 - 583)][sTvUwA] += coFjPpEAkeDV[FuPwMYj][sTvUwA];
                    P6feNsOAoYi[FuPwMYj -(983 - 982)][sTvUwA + (754 - 753)] += coFjPpEAkeDV[FuPwMYj][sTvUwA];
                    P6feNsOAoYi[FuPwMYj][sTvUwA + (435 - 434)] += coFjPpEAkeDV[FuPwMYj][sTvUwA];
                    P6feNsOAoYi[FuPwMYj +(809 - 808)][sTvUwA + (562 - 561)] += coFjPpEAkeDV[FuPwMYj][sTvUwA];
                    P6feNsOAoYi[FuPwMYj][sTvUwA] += coFjPpEAkeDV[FuPwMYj][sTvUwA];
                }
            }
        for (FuPwMYj = (492 - 491); FuPwMYj <= (885 - 876); FuPwMYj++)
            for (sTvUwA = (646 - 645); sTvUwA <= (634 - 625); sTvUwA = sTvUwA + (687 - 686)) {
                coFjPpEAkeDV[FuPwMYj][sTvUwA] += P6feNsOAoYi[FuPwMYj][sTvUwA];
                P6feNsOAoYi[FuPwMYj][sTvUwA] = (988 - 988);
            }
    }
    for (FuPwMYj = (230 - 229); FuPwMYj <= (397 - 388); FuPwMYj++)
        for (sTvUwA = (136 - 135); sTvUwA <= (974 - 965); sTvUwA = sTvUwA + 1) {
            if (sTvUwA == (115 - 106)) {
                cout << " " << coFjPpEAkeDV[FuPwMYj][sTvUwA] << endl;
            }
            else {
                if (sTvUwA == 1) {
                    cout << coFjPpEAkeDV[FuPwMYj][sTvUwA];
                }
                else
                    cout << " " << coFjPpEAkeDV[FuPwMYj][sTvUwA];
            }
        }
    return (328 - 328);
}

